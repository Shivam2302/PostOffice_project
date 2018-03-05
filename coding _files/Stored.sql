-- valid_account
set search_path to postal_service;
create or replace function valid_account(acc integer) returns integer as
$$
declare 
  cont int;
begin
  select count(account_no) into cont from account where account_no=acc; 
  if cont>0 then
    return 1;
  else 
    return 0;
  end if;
end;
$$ language 'plpgsql';


-- compute_cost
set search_path to postal_service;
create or replace function compute_cost() returns void as
$$
declare
  finalcost integer;
  rw record;
begin
  for rw in 
      select * from item natural join w_cost natural join d_cost
  loop
       finalcost=(rw.w_cst+rw.d_cst)/2;
       update item set cost = finalcost where item_id = rw.item_id;
  end loop;
end;
$$language 'plpgsql';     



-- check whether account number is valid or not for deposit
set search_path to postal_service;
create or replace function valid_user_deposit(acc integer) returns integer as $$
declare
cont integer;
chec integer;
time integer;
star date;
today date;
begin
 today=current_date;
 select count(account_no) into cont from account where account_no=acc;
 select distinct scheme_id into chec from account where account_no=acc;
 select distinct start_date into star from account where account_no=acc;
 select tenure into time from scheme where scheme_id=chec;                      
 if cont > 0 then
    if extract(year from age(today,star))>=time then
      return 0;
    else 
      return 1;
    end if;
 else
    return 0;
 end if;
end
$$ LANGUAGE 'plpgsql';


--check whether account number is valid or not for withdrawal
set search_path to postal_service;
create or replace function valid_user_withdraw(acc integer) returns integer as $$
declare  
cont integer;
remaining integer;
begin
  select count(account_no) into cont from account where account_no=acc;
  select sum(transaction) into remaining from account where account_no=acc;  
  if cont>0 and remaining>0 then
   return 1;
  else
   return 0;
  end if;
end
$$ language 'plpgsql';



-- amount deposited in various schemes.
set search_path to postal_service;
create or replace function deposit_check(acc int, amount int) returns integer as $$
declare
  chec integer;
  max date;
  today date;
  startAm integer;
  star date;
begin
   today=current_date;
   select distinct scheme_id into chec from account where account_no=acc;
   select distinct start_date into star from account where account_no=acc;
   select max(date_of_trans) into max from account where account_no=acc and transaction>0;
   select transaction into startAm from account where date_of_trans=star and account_no=acc;
   if chec=002 or chec=003 or chec=004 or chec=005 or chec=006 or chec=007 or chec=009 then
      return 0;
   elseif chec=001 then
         if (extract(year from age(today,max))*12 + extract(month from age(today,max)))>=1 then
            if amount=startAm then
              return 1;
            else
              return 0;
            end if;
         else 
           return 0;
         end if;  
   elseif chec=008 then
        if extract(year from age(today,max))>=1 then
           if amount=startAm then
             return 1;
           else
             return 0;
           end if;
        else 
          return 0;
        end if;
   end if;
end
$$ language 'plpgsql';



-- amount withdrawal in various schemes.
set search_path to postal_service;
 create or replace function withdrawal_check(acc integer,amount integer) returns integer as $$
 declare 
   principle integer;
   rate real;
   chec integer;
   max1 date;
   today date;
   time integer;
   star date;
   withAmount real;
   mon integer;
   withdrawal integer;
begin
   today=current_date;
   select distinct scheme_id into chec from account where account_no=acc;
   select max(date_of_trans) into max1 from account where account_no=acc and transaction<0;
   select sum(transaction) into withdrawal from account where account_no=acc and transaction<0;
   select tenure into time from scheme where scheme_id=chec;
   select distinct start_date into star from account where account_no=acc;
   select interest_rate into rate from scheme where scheme_id=chec;
   select transaction into principle from account where account_no=acc and date_of_trans=star; 
   if chec=001 then 
    if extract(year from age(today,star))>=time then
         --check amount withdrawn is valid or not.
       withAmount = principle*60 + (principle*rate*1810)/1200;
       if amount=withAmount then 
        return 1;
       else
        return 0;
       end if;
     else 
       return 0;
     end if;
   elseif chec=008 then
      if extract(year from age(today,star))>=time then
           --check amount withdrawn is valid or not
         withAmount= 15*principle + (principle*rate*120)/100;
         if amount=withAmount then
            return 1;
         else 
            return 0;
         end if;
      else 
          return 0;
      end if;
   elseif chec=009 then
     if extract(year from age(today,star))>=time then
          --check amount withdrawn is valid or not
        withAmount = 2*principle;
        if amount=withAmount then
           return 1;
        else 
           return 0;
        end if;
      else
         return 0;
      end if;
   elseif chec=004 or chec=005 or chec=006 or chec=007 then
     if extract(year from age(today,star))>=time then
          --amount must be equal to mature amount;
        withAmount = principle + (principle*rate*time)/100;
        if amount=withAmount then
          return 1;
        else 
          return 0;
        end if;
     else 
       return 0;
     end if;
   elseif chec=002 then
     if (extract(year from age(today,max1))*12 + extract(month from age(today,max1)))>=1 then
       -- check amount withdrawn is valid or not;
       mon=extract(year from age(today,star))*12 + extract(month from age(today,star));
       withAmount= (principle*rate*mon)/1200 + withdrawal;
       if amount<=withAmount then
         return 1;
       else 
         return 0;
       end if;
     else 
       return 0;
     end if;
   elseif chec=003 then
     if (extract(year from age(today,max1))*12 + extract(month from age(today,max1)))>=3 then
       --check amount withdrawn is valid or not.
       mon=extract(year from age(today,star))*12 + extract(month from age(today,star));
       withAmount= (principle*rate*mon)/1600 + withdrawal;
       if amount<=withAmount then
         return 1;
       else 
         return 0;
       end if;
     else 
       return 0;
     end if;
   end if;
end
$$ language 'plpgsql';



     
   
    
    





