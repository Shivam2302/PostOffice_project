                                                             "QUERIES"

-- query1
--Overall investment till now in a particular scheme
select sum(account.transaction),account.scheme_id,name from account natural join scheme where account.transaction>0 and account.scheme_id = :id group by account.scheme_id,scheme.name;


-- query2
--Maximum invested scheme amongst all the schemes for each year
select sum1, scheme_id,name,year3 from 
(select sum(transaction) as sum1,account.scheme_id,name,extract(year from date_of_trans) as year3 from account natural join scheme    where (transaction>0)
group by account.scheme_id,name,year3) as r1
natural join
(select max(sume) as sum1,year3 from
(select sum(transaction) as sume,account.scheme_id,name,extract(year from date_of_trans) as year3 from account natural join scheme 
where (transaction>0)
group by account.scheme_id,name,year3 ) as r group by r.year3) as r2
where (r1.year3=r2.year3 and r1.sum1=r2.sum1) order by year3;

 
-- query3
--Scheme with maximum investors
select max,scheme_id,name from 
(select count(distinct cid) as max, scheme_id,name from account natural join scheme group by account.scheme_id,name) as r1
natural join
(select max(count) as max from (select count(distinct cid) as count, scheme_id,name from account natural join scheme group by      account.scheme_id,name) as r2) as r3 where r1.max = r3.max;


-- query4
--Most profitable scheme for a customer amongst all the schemes in which he/she has invested.
SELECT scheme_id,name,interest_rate,sum(transaction) as sum,tenure,account_no from account natural  join scheme where cid = :ci and transaction>0 group by cid,scheme_id,name,interest_rate,tenure,account_no;
-- further computations in embedded sql queries...



-- query5
--detail of any scheme in which a customer has invested and its maturity amount
SELECT distinct start_date from account where account_no = :account_no;
SELECT scheme_id,interest_rate,transaction,tenure from account natural   join scheme where account.account_no = account_no and date_of_trans = :s_date::date;
-- further computations in embedded sql queries...


-- query6
--Maximum deliveries by the post offices in each year.
SELECT max,pin,year1 from
(select count(item_id) as max,pin,extract(year from d_date) as year1 from item group by year1,pin) as r1
natural join
(select max(sum) as max,year1 from (select count(item_id) as sum,pin,extract(year from d_date) as year1 from item group by year1,pin)
as r3 group by year1) as r2 where r1.max = r2.max and r1.year1 = r2.year1;


--query7
--Which scheme gets the maximum investment in a particular post office
select sum,scheme_id,name,pin from scheme natural join 
(select sum,scheme_id,pin from
(SELECT max(sum2) as sum from (SELECT sum(transaction) as sum2,scheme_id,pin from account where transaction>0 and pin = :pid group by scheme_id,pin) as r1) as r natural join
(SELECT sum(transaction) as sum,scheme_id,pin from account where transaction>0 and pin = :pid group by scheme_id,pin) as r2
where r.sum=r2.sum) as r3;


-- query8
--No. of customers invested in each year in all the schemes
SELECT count(account_no),scheme_id,name,extract(year from start_date) as year1 from account natural join scheme group by scheme_id,year1,name order by year1;


--query9
Amount paid by customers in a particular type of post in each year
SELECT count(item_id),sum(cost),type from item where extract(year from d_date) = :yr group by type;
 


-- query10
--Details of the female managers from all the post offices
SELECT pin,fname,from_date from managed_by natural join manager where gender='female' and to_date is null;



-- query11
--Total transactions by a customer in a scheme
SELECT transaction,account_no,date_of_trans,cid from account where date_of_trans >=:sa_date::date and date_of_trans <=  :ta_date::date and account_no = :acc;



