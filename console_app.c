/* Processed by ecpg (10.1) */
/* These include files are added by the preprocessor */
#include <ecpglib.h>
#include <ecpgerrno.h>
#include <sqlca.h>
/* End of automatic include section */

#line 1 "console_app.pgc"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "sqlca.h"

/* exec sql begin declare section */

   
  
     
     
     
     
  typedef struct { 
#line 11 "console_app.pgc"
 int sum ;
 
#line 12 "console_app.pgc"
 int scheme_id ;
 
#line 13 "console_app.pgc"
 char name [ 30 ] ;
 
#line 14 "console_app.pgc"
 int year1 ;
 }  query2_rec ;

#line 15 "console_app.pgc"


   
  
     
     
     
     
     
     
  typedef struct { 
#line 19 "console_app.pgc"
 int id ;
 
#line 20 "console_app.pgc"
 char name [ 30 ] ;
 
#line 21 "console_app.pgc"
 float rate ;
 
#line 22 "console_app.pgc"
 int depo ;
 
#line 23 "console_app.pgc"
 int ten ;
 
#line 24 "console_app.pgc"
 int acc ;
 }  query4_rec ;

#line 25 "console_app.pgc"


   
  
     
     
     
     
  typedef struct { 
#line 29 "console_app.pgc"
 int no_of_new_customers ;
 
#line 30 "console_app.pgc"
 int scheme_id ;
 
#line 31 "console_app.pgc"
 char name [ 30 ] ;
 
#line 32 "console_app.pgc"
 int yr ;
 }  query8_rec ;

#line 33 "console_app.pgc"


   
  
     
     
     
     
  typedef struct { 
#line 37 "console_app.pgc"
 int trans ;
 
#line 38 "console_app.pgc"
 int acco ;
 
#line 39 "console_app.pgc"
 char r_date [ 12 ] ;
 
#line 40 "console_app.pgc"
 int cid ;
 }  query11_rec ;

#line 41 "console_app.pgc"


   
  
     
     
     
  typedef struct { 
#line 45 "console_app.pgc"
 int pin ;
 
#line 46 "console_app.pgc"
 char fname [ 20 ] ;
 
#line 47 "console_app.pgc"
 char from_date [ 12 ] ;
 }  query10_rec ;

#line 48 "console_app.pgc"


   
  
     
     
     
  typedef struct { 
#line 52 "console_app.pgc"
 int delivery ;
 
#line 53 "console_app.pgc"
 int pin ;
 
#line 54 "console_app.pgc"
 int year1 ;
 }  query6_rec ;

#line 55 "console_app.pgc"


   
  
     
     
     
  typedef struct { 
#line 59 "console_app.pgc"
 int delivery ;
 
#line 60 "console_app.pgc"
 int revenue ;
 
#line 61 "console_app.pgc"
 char post [ 20 ] ;
 }  query9_rec ;

#line 62 "console_app.pgc"


   
   
   
   
   
   

   
   
   

   
   

   
   
   
   
   
   
   

   
   
   
   
   

   
   
   
   
   

   
   
   
   
   
   
   


#line 64 "console_app.pgc"
 int mgr_id ;
 
#line 65 "console_app.pgc"
 char fname [ 20 ] ;
 
#line 66 "console_app.pgc"
 char gender [ 10 ] ;
 
#line 67 "console_app.pgc"
 char date_of_birth [ 12 ] ;
 
#line 68 "console_app.pgc"
 char date_of_join [ 12 ] ;
 
#line 69 "console_app.pgc"
 int income ;
 
#line 71 "console_app.pgc"
 int pin ;
 
#line 72 "console_app.pgc"
 char to_date [ 12 ] ;
 
#line 73 "console_app.pgc"
 char from_date [ 12 ] ;
 
#line 75 "console_app.pgc"
 int cid ;
 
#line 76 "console_app.pgc"
 int age ;
 
#line 78 "console_app.pgc"
 int from_weight ;
 
#line 79 "console_app.pgc"
 int to_weight ;
 
#line 80 "console_app.pgc"
 char type [ 20 ] ;
 
#line 81 "console_app.pgc"
 int w_cst ;
 
#line 82 "console_app.pgc"
 int from_distance ;
 
#line 83 "console_app.pgc"
 int to_distance ;
 
#line 84 "console_app.pgc"
 int d_cst ;
 
#line 86 "console_app.pgc"
 int scheme_id ;
 
#line 87 "console_app.pgc"
 char name [ 30 ] ;
 
#line 88 "console_app.pgc"
 float interest_rate ;
 
#line 89 "console_app.pgc"
 float tenure ;
 
#line 90 "console_app.pgc"
 int min_dep ;
 
#line 92 "console_app.pgc"
 int account_no ;
 
#line 93 "console_app.pgc"
 char date_of_trans [ 12 ] ;
 
#line 94 "console_app.pgc"
 char start_date [ 12 ] ;
 
#line 95 "console_app.pgc"
 int transaction ;
 
#line 96 "console_app.pgc"
 int sid ;
 
#line 98 "console_app.pgc"
 int item_id ;
 
#line 99 "console_app.pgc"
 float weight ;
 
#line 100 "console_app.pgc"
 int distance ;
 
#line 101 "console_app.pgc"
 char source [ 20 ] ;
 
#line 102 "console_app.pgc"
 char destination [ 20 ] ;
 
#line 103 "console_app.pgc"
 char t_date [ 12 ] ;
 
#line 104 "console_app.pgc"
 char s_date [ 12 ] ;
/* exec sql end declare section */
#line 106 "console_app.pgc"



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query1()
{
  /* exec sql begin declare section */
     
     
  
#line 117 "console_app.pgc"
 int id ;
 
#line 118 "console_app.pgc"
 int investment = 0 ;
/* exec sql end declare section */
#line 119 "console_app.pgc"

  printf("enter id\n");
  scanf("%d",&id);
  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "select sum ( account . transaction ) , account . scheme_id , name from account natural join scheme where account . transaction > 0 and account . scheme_id = $1  group by account . scheme_id , scheme . name", 
	ECPGt_int,&(id),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(investment),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(scheme_id),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(name),(long)30,(long)1,(30)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 122 "console_app.pgc"

  printf("total investment in %s with id %d is %d.\n\n",name,id,investment);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query2()
{

  /* exec sql begin declare section */
     
     
     
     
  
#line 136 "console_app.pgc"
 int year2 ;
 
#line 137 "console_app.pgc"
 int year3 ;
 
#line 138 "console_app.pgc"
 int sum1 = 0 , sum2 = 0 , sume = 0 ;
 
#line 139 "console_app.pgc"
 query2_rec work ;
/* exec sql end declare section */
#line 140 "console_app.pgc"


  /* declare cur cursor for select sum1 , scheme_id , name , year3 from ( select sum ( transaction ) as sum1 , account . scheme_id , name , extract ( year from date_of_trans ) as year3 from account natural join scheme where ( transaction > 0 ) group by account . scheme_id , name , year3 ) as r1 natural join ( select max ( sume ) as sum1 , year3 from ( select sum ( transaction ) as sume , account . scheme_id , name , extract ( year from date_of_trans ) as year3 from account natural join scheme where ( transaction > 0 ) group by account . scheme_id , name , year3 ) as r group by r . year3 ) as r2 where ( r1 . year3 = r2 . year3 and r1 . sum1 = r2 . sum1 ) order by year3 */
#line 151 "console_app.pgc"


  printf("sum\t\t scheme_id\t\t name\t\t\t\t\t year\n");
  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cur cursor for select sum1 , scheme_id , name , year3 from ( select sum ( transaction ) as sum1 , account . scheme_id , name , extract ( year from date_of_trans ) as year3 from account natural join scheme where ( transaction > 0 ) group by account . scheme_id , name , year3 ) as r1 natural join ( select max ( sume ) as sum1 , year3 from ( select sum ( transaction ) as sume , account . scheme_id , name , extract ( year from date_of_trans ) as year3 from account natural join scheme where ( transaction > 0 ) group by account . scheme_id , name , year3 ) as r group by r . year3 ) as r2 where ( r1 . year3 = r2 . year3 and r1 . sum1 = r2 . sum1 ) order by year3", ECPGt_EOIT, ECPGt_EORT);}
#line 154 "console_app.pgc"

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur", ECPGt_EOIT, 
	ECPGt_int,&(work.sum),(long)1,(long)1,sizeof( query2_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.scheme_id),(long)1,(long)1,sizeof( query2_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.name),(long)30,(long)1,sizeof( query2_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.year1),(long)1,(long)1,sizeof( query2_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 155 "console_app.pgc"


  while(sqlca.sqlcode==0) 
  {
    printf("%d\t\t\t%d\t\t%s\t\t\t%d\n",work.sum,work.scheme_id,work.name,work.year1);
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur", ECPGt_EOIT, 
	ECPGt_int,&(work.sum),(long)1,(long)1,sizeof( query2_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.scheme_id),(long)1,(long)1,sizeof( query2_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.name),(long)30,(long)1,sizeof( query2_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.year1),(long)1,(long)1,sizeof( query2_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 160 "console_app.pgc"

  }
  printf("\n");

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cur", ECPGt_EOIT, ECPGt_EORT);}
#line 164 "console_app.pgc"

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query3()
{

  /* exec sql begin declare section */
     
     
  
#line 177 "console_app.pgc"
 int max ;
 
#line 178 "console_app.pgc"
 int count ;
/* exec sql end declare section */
#line 179 "console_app.pgc"


  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "select max , scheme_id , name from ( select count ( distinct cid ) as max , scheme_id , name from account natural join scheme group by account . scheme_id , name ) as r1 natural join ( select max ( count ) as max from ( select count ( distinct cid ) as count , scheme_id , name from account natural join scheme group by account . scheme_id , name ) as r2 ) as r3 where r1 . max = r3 . max", ECPGt_EOIT, 
	ECPGt_int,&(max),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(scheme_id),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(name),(long)30,(long)1,(30)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 184 "console_app.pgc"

  printf("Maximum number of investors are %d in scheme %s with id %d\n\n",max,name,scheme_id); 
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query4()
{

  /* exec sql begin declare section */
     
     
     
     
  
#line 198 "console_app.pgc"
 query4_rec work ;
 
#line 199 "console_app.pgc"
 int ci , sum = 0 ;
 
#line 200 "console_app.pgc"
 int maturity_amount = 0 ;
 
#line 201 "console_app.pgc"
 int profit ;
/* exec sql end declare section */
#line 202 "console_app.pgc"


  printf("enter the customer id\n");
  scanf("%d",&ci);
  printf("\n");

  ECPGset_var( 0, &( ci ), __LINE__);\
 /* declare cur4 cursor for select scheme_id , name , interest_rate , sum ( transaction ) as sum , tenure , account_no from account natural join scheme where cid = $1  and transaction > 0 group by cid , scheme_id , name , interest_rate , tenure , account_no */
#line 208 "console_app.pgc"

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cur4 cursor for select scheme_id , name , interest_rate , sum ( transaction ) as sum , tenure , account_no from account natural join scheme where cid = $1  and transaction > 0 group by cid , scheme_id , name , interest_rate , tenure , account_no", 
	ECPGt_int,&(ci),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 209 "console_app.pgc"


  printf("scheme_id\t name\t\t\tamount_deposited\t tenure\t\tamount_matured\t\tprofit\n\n");
  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur4", ECPGt_EOIT, 
	ECPGt_int,&(work.id),(long)1,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.name),(long)30,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_float,&(work.rate),(long)1,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.depo),(long)1,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.ten),(long)1,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.acc),(long)1,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 212 "console_app.pgc"

  while(sqlca.sqlcode==0) 
  {
    maturity_amount=0;
    profit=0;

    if(work.id==1)
      maturity_amount = work.depo + (work.depo*work.rate*1810)/72000;

    else if(work.id==2 || work.id==3)
      maturity_amount = work.depo + (5*work.rate*work.depo)/100;

    else if(work.id==5 || work.id==6 || work.id==7 || work.id==4)
      maturity_amount = work.depo + (work.ten*work.rate*work.depo)/100;
    
    else if(work.id==8)
      maturity_amount = work.depo + (120*work.rate*work.depo)/1500;

    else
      maturity_amount = 2*work.depo;

    profit = (maturity_amount-work.depo)*100/work.depo;
    printf("%d\t\t%s\t\t%d\t\t  %d\t\t%d\t\t\t%d\n\n",work.id,work.name,work.depo,work.ten,maturity_amount,profit);
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur4", ECPGt_EOIT, 
	ECPGt_int,&(work.id),(long)1,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.name),(long)30,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_float,&(work.rate),(long)1,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.depo),(long)1,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.ten),(long)1,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.acc),(long)1,(long)1,sizeof( query4_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 235 "console_app.pgc"
 
  }
  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cur4", ECPGt_EOIT, ECPGt_EORT);}
#line 237 "console_app.pgc"

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query5()
{
  /* exec sql begin declare section */
    
    
    
    
  
#line 249 "console_app.pgc"
 int maturity_amount = 0 ;
 
#line 250 "console_app.pgc"
 int withdraw ;
 
#line 251 "console_app.pgc"
 int r ;
 
#line 252 "console_app.pgc"
 int co = - 1 ;
/* exec sql end declare section */
#line 253 "console_app.pgc"

  printf("Enter your account_no\n\n");
  scanf("%d",&account_no);
  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "select valid_user_withdraw ( $1  )", 
	ECPGt_int,&(account_no),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(co),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 256 "console_app.pgc"


  if(co==1)
  {
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "select distinct start_date from account where account_no = $1 ", 
	ECPGt_int,&(account_no),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_char,(s_date),(long)12,(long)1,(12)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 260 "console_app.pgc"

    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "select scheme_id , interest_rate , transaction , tenure from account natural join scheme where account . account_no = account_no and date_of_trans = $1  :: date", 
	ECPGt_char,(s_date),(long)12,(long)1,(12)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(scheme_id),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_float,&(interest_rate),(long)1,(long)1,sizeof(float), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(transaction),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_float,&(tenure),(long)1,(long)1,sizeof(float), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 261 "console_app.pgc"


    if(scheme_id==1)
      maturity_amount = transaction*60 + (transaction*interest_rate*1810)/1200;

    else if(scheme_id==2 || scheme_id==3)
    {
      { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "select sum ( transactions ) from account where account . acccount_no = $1  and account . transaction < 0 group by account . account_no", 
	ECPGt_int,&(account_no),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(withdraw),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 269 "console_app.pgc"

      maturity_amount = transaction + (5*interest_rate*transaction)/100 + withdraw;
    }

    else if(scheme_id==5 || scheme_id==6 || scheme_id==7 || scheme_id==4)
      maturity_amount = transaction + (tenure*interest_rate*transaction)/100; 

    else if(scheme_id==8)
      maturity_amount = 15*transaction + (120*interest_rate*transaction)/100;

    else
      maturity_amount = 2*transaction;
 
      printf("maturity_amount you will receive is %d if there will be no future withdraw from now on\n\n",maturity_amount);
  }

  else
   printf("invalid account number\n");
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query6()
{

  /* exec sql begin declare section */
    
  
#line 299 "console_app.pgc"
 query6_rec work ;
/* exec sql end declare section */
#line 300 "console_app.pgc"


  /* declare cur6 cursor for select max , pin , year1 from ( select count ( item_id ) as max , pin , extract ( year from d_date ) as year1 from item group by year1 , pin ) as r1 natural join ( select max ( sum ) as max , year1 from ( select count ( item_id ) as sum , pin , extract ( year from d_date ) as year1 from item group by year1 , pin ) as r3 group by year1 ) as r2 where r1 . max = r2 . max and r1 . year1 = r2 . year1 */
#line 306 "console_app.pgc"

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cur6 cursor for select max , pin , year1 from ( select count ( item_id ) as max , pin , extract ( year from d_date ) as year1 from item group by year1 , pin ) as r1 natural join ( select max ( sum ) as max , year1 from ( select count ( item_id ) as sum , pin , extract ( year from d_date ) as year1 from item group by year1 , pin ) as r3 group by year1 ) as r2 where r1 . max = r2 . max and r1 . year1 = r2 . year1", ECPGt_EOIT, ECPGt_EORT);}
#line 307 "console_app.pgc"


  printf("Max deliveries\t pin_no\t\t year\n\n");
  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur6", ECPGt_EOIT, 
	ECPGt_int,&(work.delivery),(long)1,(long)1,sizeof( query6_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.pin),(long)1,(long)1,sizeof( query6_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.year1),(long)1,(long)1,sizeof( query6_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 310 "console_app.pgc"


  while(sqlca.sqlcode==0) 
  {
    printf("%d\t\t %d\t\t %d\n\n",work.delivery,work.pin,work.year1);
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur6", ECPGt_EOIT, 
	ECPGt_int,&(work.delivery),(long)1,(long)1,sizeof( query6_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.pin),(long)1,(long)1,sizeof( query6_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.year1),(long)1,(long)1,sizeof( query6_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 315 "console_app.pgc"

  }

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cur6", ECPGt_EOIT, ECPGt_EORT);}
#line 318 "console_app.pgc"

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query7()
{

  /* exec sql begin declare section */
    
    
    
  
#line 331 "console_app.pgc"
 int sum2 = 0 , sum = 0 ;
 
#line 332 "console_app.pgc"
 int investment ;
 
#line 333 "console_app.pgc"
 int pid ;
/* exec sql end declare section */
#line 334 "console_app.pgc"


  printf("enter the pin\n");
  scanf("%d",&pid);
  printf("\n");

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "select sum , scheme_id , name , pin from scheme natural join ( select sum , scheme_id , pin from ( select max ( sum2 ) as sum from ( select sum ( transaction ) as sum2 , scheme_id , pin from account where transaction > 0 and pin = $1  group by scheme_id , pin ) as r1 ) as r natural join ( select sum ( transaction ) as sum , scheme_id , pin from account where transaction > 0 and pin = $2  group by scheme_id , pin ) as r2 where r . sum = r2 . sum ) as r3", 
	ECPGt_int,&(pid),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(pid),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(investment),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(scheme_id),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(name),(long)30,(long)1,(30)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(pin),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 344 "console_app.pgc"


  printf("Investment\t scheme_id\t scheme_name\t pin\n\n");
  printf("%d\t %d\t %s\t %d\n\n",investment,scheme_id,name,pin);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query8()
{

  /* exec sql begin declare section */
    
    
  
#line 360 "console_app.pgc"
 int year1 ;
 
#line 361 "console_app.pgc"
 query8_rec work ;
/* exec sql end declare section */
#line 362 "console_app.pgc"


  /* declare cur8 cursor for select count ( account_no ) , scheme_id , name , extract ( year from start_date ) as year1 from account natural join scheme group by scheme_id , year1 , name order by year1 */
#line 364 "console_app.pgc"

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cur8 cursor for select count ( account_no ) , scheme_id , name , extract ( year from start_date ) as year1 from account natural join scheme group by scheme_id , year1 , name order by year1", ECPGt_EOIT, ECPGt_EORT);}
#line 365 "console_app.pgc"


  printf("No. Of new customers\t scheme_id\t scheme_name\tyear\n\n");
  while(sqlca.sqlcode==0)
  {
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur8", ECPGt_EOIT, 
	ECPGt_int,&(work.no_of_new_customers),(long)1,(long)1,sizeof( query8_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.scheme_id),(long)1,(long)1,sizeof( query8_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.name),(long)30,(long)1,sizeof( query8_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.yr),(long)1,(long)1,sizeof( query8_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 370 "console_app.pgc"

    printf("%d\t\t %d\t\t %s\t\t %d\n\n",work.no_of_new_customers,work.scheme_id,work.name,work.yr);
  }

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cur8", ECPGt_EOIT, ECPGt_EORT);}
#line 374 "console_app.pgc"

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query9()
{ 

  /* exec sql begin declare section */
    
    
  
#line 387 "console_app.pgc"
 query9_rec work ;
 
#line 388 "console_app.pgc"
 int yr ;
/* exec sql end declare section */
#line 389 "console_app.pgc"


  printf("enter the year\n");
  scanf("%d",&yr);
  printf("\n");

  ECPGset_var( 1, &( yr ), __LINE__);\
 /* declare cur9 cursor for select count ( item_id ) , sum ( cost ) , type from item where extract ( year from d_date ) = $1  group by type */
#line 395 "console_app.pgc"

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cur9 cursor for select count ( item_id ) , sum ( cost ) , type from item where extract ( year from d_date ) = $1  group by type", 
	ECPGt_int,&(yr),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 396 "console_app.pgc"


  printf("No of deliveries\t total revenue\t type of post\n\n");
  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur9", ECPGt_EOIT, 
	ECPGt_int,&(work.delivery),(long)1,(long)1,sizeof( query9_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.revenue),(long)1,(long)1,sizeof( query9_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.post),(long)20,(long)1,sizeof( query9_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 399 "console_app.pgc"


  while(sqlca.sqlcode==0) 
  {
    printf("%d\t\t %d\t\t %s\n\n",work.delivery,work.revenue,work.post);
    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur9", ECPGt_EOIT, 
	ECPGt_int,&(work.delivery),(long)1,(long)1,sizeof( query9_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.revenue),(long)1,(long)1,sizeof( query9_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.post),(long)20,(long)1,sizeof( query9_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 404 "console_app.pgc"

  }

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cur9", ECPGt_EOIT, ECPGt_EORT);}
#line 407 "console_app.pgc"

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query10()
{

  /* exec sql begin declare section */
   
  
#line 420 "console_app.pgc"
 query10_rec work ;
/* exec sql end declare section */
#line 421 "console_app.pgc"


  /* declare cur10 cursor for select pin , fname , from_date from managed_by natural join manager where gender = 'female' and to_date is null */
#line 423 "console_app.pgc"
 
  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cur10 cursor for select pin , fname , from_date from managed_by natural join manager where gender = 'female' and to_date is null", ECPGt_EOIT, ECPGt_EORT);}
#line 424 "console_app.pgc"


  printf("pin_no\t manager_name\t joining date\n\n");
  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur10", ECPGt_EOIT, 
	ECPGt_int,&(work.pin),(long)1,(long)1,sizeof( query10_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.fname),(long)20,(long)1,sizeof( query10_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.from_date),(long)12,(long)1,sizeof( query10_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 427 "console_app.pgc"


  while(sqlca.sqlcode==0) 
    {
      printf("%d\t %s\t %s\n\n",work.pin,work.fname,work.from_date);
      { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur10", ECPGt_EOIT, 
	ECPGt_int,&(work.pin),(long)1,(long)1,sizeof( query10_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.fname),(long)20,(long)1,sizeof( query10_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.from_date),(long)12,(long)1,sizeof( query10_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 432 "console_app.pgc"

    }

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cur10", ECPGt_EOIT, ECPGt_EORT);}
#line 435 "console_app.pgc"

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query11()
{

  /* exec sql begin declare section */
    
    
    
     
  
#line 448 "console_app.pgc"
 query11_rec work ;
 
#line 449 "console_app.pgc"
 int acc ;
 
#line 450 "console_app.pgc"
 int cr = - 1 ;
 
#line 451 "console_app.pgc"
 const char * mystmt ;
/* exec sql end declare section */
#line 452 "console_app.pgc"


  printf("enter dates and account_no\n");
  scanf("%s%s%d",&s_date,&t_date,&acc);
  printf("\n");
  
  mystmt =" SELECT valid_account(:acc) ";
  { ECPGprepare(__LINE__, NULL, 0, "mystmt", mystmt);}
#line 459 "console_app.pgc"

  { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_execute, "mystmt", 
	ECPGt_int,&(acc),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(cr),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 460 "console_app.pgc"

  printf("%d\n",cr);

  if(cr==1)
  {
    ECPGset_var( 2, &( acc ), __LINE__);\
 /* declare cur11 cursor for select transaction , account_no , date_of_trans , cid from account where date_of_trans >= $1  :: date and date_of_trans <= $2  :: date and account_no = $3  */
#line 465 "console_app.pgc"

    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cur11 cursor for select transaction , account_no , date_of_trans , cid from account where date_of_trans >= $1  :: date and date_of_trans <= $2  :: date and account_no = $3 ", 
	ECPGt_char,(s_date),(long)12,(long)1,(12)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(t_date),(long)12,(long)1,(12)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(acc),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 466 "console_app.pgc"


    printf("transaction\t account_no\t date_of_trans\t cid\n\n");

    while(sqlca.sqlcode==0)
    {
      { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur11", ECPGt_EOIT, 
	ECPGt_int,&(work.trans),(long)1,(long)1,sizeof( query11_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.acco),(long)1,(long)1,sizeof( query11_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,&(work.r_date),(long)12,(long)1,sizeof( query11_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(work.cid),(long)1,(long)1,sizeof( query11_rec ), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 472 "console_app.pgc"

      printf("%d\t %d\t %s\t %d\n\n",work.trans,work.acco,work.r_date,work.cid);
    }

    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cur11", ECPGt_EOIT, ECPGt_EORT);}
#line 476 "console_app.pgc"

  }

  if(cr==0)
    printf("invalid account number\n");
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void query12()
{
  /* exec sql begin declare section */
  
   
   
   
   
  
 
#line 492 "console_app.pgc"
 int t , c1 , c2 , acc , amt ;
 
#line 493 "console_app.pgc"
 const char * mystmt1 ;
 
#line 494 "console_app.pgc"
 const char * mystmt2 ;
 
#line 495 "console_app.pgc"
 const char * mystmt3 ;
 
#line 496 "console_app.pgc"
 const char * mystmt4 ;
 
#line 497 "console_app.pgc"
 char tod_date [ 12 ] ;
/* exec sql end declare section */
#line 498 "console_app.pgc"


 printf("enter account no.,amount\n");
 scanf("%d %d",&acc,&amt);

 printf("what do you want\n1. deposit\n2. withdrawal\n");
 scanf("%d",&t);
 printf("\n"); 

 if(t==1)
  {
    mystmt1 =" SELECT valid_user_deposit(:acc) ";
    { ECPGprepare(__LINE__, NULL, 0, "mystmt1", mystmt1);}
#line 510 "console_app.pgc"

    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_execute, "mystmt1", 
	ECPGt_int,&(acc),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(c1),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 511 "console_app.pgc"

   
    if(c1==1)
    {
      printf("Valid acoount no.\n");
      mystmt2 =" SELECT deposit_check(:acc,:amt) ";
      { ECPGprepare(__LINE__, NULL, 0, "mystmt2", mystmt2);}
#line 517 "console_app.pgc"

      { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_execute, "mystmt2", 
	ECPGt_int,&(acc),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(amt),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(c2),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 518 "console_app.pgc"

   
      if(c2==1)
      {
        printf("You can make deposit\n");
        printf("enter today's date");
        scanf("%s",&tod_date);
              
        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "select distinct pin , cid , scheme_id , start_date from account where account_no = $1 ", 
	ECPGt_int,&(acc),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(pin),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(cid),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(scheme_id),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(start_date),(long)12,(long)1,(12)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 526 "console_app.pgc"

        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "set transaction read write", ECPGt_EOIT, ECPGt_EORT);}
#line 527 "console_app.pgc"

        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into account ( pin , cid , scheme_id , account_no , date_of_trans , transaction , start_date ) values ( $1  , $2  , $3  , $4  , $5  , $6  , $7  )", 
	ECPGt_int,&(pin),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(cid),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(scheme_id),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(acc),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(tod_date),(long)12,(long)1,(12)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(amt),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(start_date),(long)12,(long)1,(12)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 528 "console_app.pgc"

      }
      if(c2==0)
        printf("You can't make deposit today!\n");
    }
    if(c1==0)
      printf("oops,something went wrong\n");
  }
 if(t==2)
  {
    mystmt3 =" SELECT valid_user_withdraw(:acc) ";
    { ECPGprepare(__LINE__, NULL, 0, "mystmt3", mystmt3);}
#line 539 "console_app.pgc"

    { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_execute, "mystmt3", 
	ECPGt_int,&(acc),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(c1),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 540 "console_app.pgc"


    if(c1==1)
    {
      printf("Valid account no.\n");
      mystmt4 =" SELECT withdrawal_check(:acc,:amt) ";
      { ECPGprepare(__LINE__, NULL, 0, "mystmt4", mystmt4);}
#line 546 "console_app.pgc"

      { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_execute, "mystmt4", 
	ECPGt_int,&(acc),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(amt),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(c2),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 547 "console_app.pgc"

      if(c2==1)
      {
        printf("You can make withdraw\n");
        printf("enter today's date");
        scanf("%s",&tod_date);

        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "select distinct pin , cid , scheme_id , start_date from account where account_no = $1 ", 
	ECPGt_int,&(acc),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, 
	ECPGt_int,&(pin),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(cid),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(scheme_id),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(start_date),(long)12,(long)1,(12)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);}
#line 554 "console_app.pgc"

        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "set transaction read write", ECPGt_EOIT, ECPGt_EORT);}
#line 555 "console_app.pgc"

        { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into account ( pin , cid , scheme_id , account_no , date_of_trans , transaction , start_date ) values ( $1  , $2  , $3  , $4  , $5  , $6  , $7  )", 
	ECPGt_int,&(pin),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(cid),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(scheme_id),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(acc),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(tod_date),(long)12,(long)1,(12)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(amt),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_char,(start_date),(long)12,(long)1,(12)*sizeof(char), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);}
#line 556 "console_app.pgc"

      }
      if(c2==0)
        printf("oops,something went wrong\n");
    }
   if(c1==0)
    printf("oops,something went wrong\n");
  }
  { ECPGtrans(__LINE__, NULL, "commit");}
#line 564 "console_app.pgc"
 
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// main function.


int main()
{
   
#line 1 "/usr/include/postgresql/sqlca.h"
#ifndef POSTGRES_SQLCA_H
#define POSTGRES_SQLCA_H

#ifndef PGDLLIMPORT
#if  defined(WIN32) || defined(__CYGWIN__)
#define PGDLLIMPORT __declspec (dllimport)
#else
#define PGDLLIMPORT
#endif							/* __CYGWIN__ */
#endif							/* PGDLLIMPORT */

#define SQLERRMC_LEN	150

#ifdef __cplusplus
extern "C"
{
#endif

struct sqlca_t
{
	char		sqlcaid[8];
	long		sqlabc;
	long		sqlcode;
	struct
	{
		int			sqlerrml;
		char		sqlerrmc[SQLERRMC_LEN];
	}			sqlerrm;
	char		sqlerrp[8];
	long		sqlerrd[6];
	/* Element 0: empty						*/
	/* 1: OID of processed tuple if applicable			*/
	/* 2: number of rows processed				*/
	/* after an INSERT, UPDATE or				*/
	/* DELETE statement					*/
	/* 3: empty						*/
	/* 4: empty						*/
	/* 5: empty						*/
	char		sqlwarn[8];
	/* Element 0: set to 'W' if at least one other is 'W'	*/
	/* 1: if 'W' at least one character string		*/
	/* value was truncated when it was			*/
	/* stored into a host variable.             */

	/*
	 * 2: if 'W' a (hopefully) non-fatal notice occurred
	 */	/* 3: empty */
	/* 4: empty						*/
	/* 5: empty						*/
	/* 6: empty						*/
	/* 7: empty						*/

	char		sqlstate[5];
};

struct sqlca_t *ECPGget_sqlca(void);

#ifndef POSTGRES_ECPG_INTERNAL
#define sqlca (*ECPGget_sqlca())
#endif

#ifdef __cplusplus
}
#endif

#endif

#line 578 "console_app.pgc"

   /* exec sql begin declare section */
    
       
       
        
   
#line 580 "console_app.pgc"
 int choice = 0 ;
 
#line 581 "console_app.pgc"
 const char * target = "postoffice@127.0.0.1:5432" ;
 
#line 582 "console_app.pgc"
 const char * user = "postgres" ;
 
#line 583 "console_app.pgc"
 const char * password = "password" ;
/* exec sql end declare section */
#line 584 "console_app.pgc"

   { ECPGconnect(__LINE__, 0, target , user , "password" , NULL, 0); }
#line 585 "console_app.pgc"

   { ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "set search_path to postal_service", ECPGt_EOIT, ECPGt_EORT);}
#line 586 "console_app.pgc"
	

	while(choice!=13)
    {
	  printf("\t\t\t\t\t\t\t POSTAL SERVICES DATABASE\n\n");
	  printf("The queries you can perform for this database are -\n\n");
	  printf("1.Overall investment till now in a particular scheme.\n\n");
      printf("2.Maximum invested scheme amongst all the schemes for each year.\n\n");
	  printf("3.Scheme with maximum investors.\n\n");
      printf("4.profits in  different schemes for a customer amongst all the schemes in which he/she has invested.\n\n");
	  printf("5.detail of any scheme in which a customer has invested and its maturity amount\n\n");
	  printf("6.Maximum deliveries by the post offices in each year.\n\n");
	  printf("7.Which scheme gets the maximum investment in a particular post office\n\n");
	  printf("8.No. of customers invested in each year in all the schemes\n\n");
	  printf("9.Amount paid by customers in a particular type of post in each year.\n\n");
	  printf("10.Details of the female managers from all the post offices.\n\n");
	  printf("11.Transactions between any two days by a customer in a scheme.\n\n");
      printf("12.Make a transaction.\n\n");
      printf("13.Exit.\n\n");

	  printf("enter the number of query u want to know\n");
	  scanf("%d",&choice);

	  if(choice==1)
		 query1();
	  else if(choice==2)
		 query2();
	  else if(choice==3)
		 query3();
	  else if(choice==4)
		 query4();
	  else if(choice==5)
		 query5();
	  else if(choice==6)
		 query6();
	  else if(choice==7)
		 query7();
	  else if(choice==8)
		 query8();
	  else if(choice==9)
		 query9();
	  else if(choice==10)
		 query10();
	  else if(choice==11)
		 query11();
      else if(choice==12)
     	 query12();
      else if(choice==13)
         break;
      else
         printf("Invalid Choice");
	}
}
