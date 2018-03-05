set search_path to postal_service;

begin;

--data for post-office
insert into post_office values(305002,'Aditya Mills','Adarsh Nagar','Ajmer','Rajasthan');
insert into post_office values(302016,'BANI PARK','Bani Park','Jaipur','Rajasthan');
insert into post_office values(382255,'CHANDARVA','Chandarva','Ahmedabad','Gujarat');
insert into post_office values(360060,'KANESARA','Kanesara','Rajkot','Gujurat');
insert into post_office values(143006,'GURU BAZAR','Guru Bazar','Amritsar','Punjab');
insert into post_office values(151302,'BEHNIWAL','Behniwal','Bathinda','Punjab');
insert into post_office values(803211,'JALALPUR','Jalalpur','Patna','Bihar');
insert into post_office values(843109,'HARIDASPUR','Halridaspur','Muzaffarpur','Bihar');
insert into post_office values(110003,'ALIGANJ','Aliganj','South Delhi','Delhi');
insert into post_office values(110096,'GHAZIPUR','Ghazipur','East Delhi','Delhi');


--data for contact_number of post_office 
insert into p_contact values(305002,9876543210);
insert into p_contact values(305002,9876543211);
insert into p_contact values(302016,9876543212);
insert into p_contact values(302016,9876543213);
insert into p_contact values(382255,9876543214);
insert into p_contact values(360060,9876543215);
insert into p_contact values(143006,9876543216);
insert into p_contact values(143006,9876543217);
insert into p_contact values(151302,9876543218);
insert into p_contact values(151302,9876543219);
insert into p_contact values(803211,9876543220);
insert into p_contact values(843109,9876543221);
insert into p_contact values(110003,9876543222);
insert into p_contact values(110003,9876543224);
insert into p_contact values(110096,9876543225);


--data for manager
insert into manager values(101,'Sudhanshu','Bhardwaj','male',TO_DATE('02/23/2010','MM/DD/YYYY'),50000,TO_DATE('02/23/1997','MM/DD/YYYY'),'Rail Coach factory','kapurthala','punjab');
insert into manager values(102,'Jaya','Sharma','female',TO_DATE('01/10/2010','MM/DD/YYYY'),52000,TO_DATE('01/10/1997','MM/DD/YYYY'),' Pratap Nagar','Chittorgarh','rajasthan');
insert into manager values(103,'Kriti','Singhal','female',TO_DATE('12/14/2010','MM/DD/YYYY'),54000,TO_DATE('12/14/1997','MM/DD/YYYY'),'Navrang nagar','Beawar','Rajasthan');
insert into manager values(104,'Vishal','Vaishnav','male',TO_DATE('08/25/2010','MM/DD/YYYY'),56000,TO_DATE('08/25/1996','MM/DD/YYYY'),'Usmaan Gunj','Hyderabad','Telangana');
insert into manager values(105,'Shweta','Kumari','female',TO_DATE('12/14/2010','MM/DD/YYYY'),58000,TO_DATE('12/14/1997','MM/DD/YYYY'),'Boring Road','Patna','Bihar');
insert into manager values(106,'Aalok','Yadav','male',TO_DATE('02/25/2010','MM/DD/YYYY'),60000,TO_DATE('02/25/1996','MM/DD/YYYY'),'Model Town ','jalandhar','punjab');
insert into manager values(107,'Aman','Choudhary','male',TO_DATE('02/13/2010','MM/DD/YYYY'),48000,TO_DATE('02/13/1997','MM/DD/YYYY'),'Shajanpur','Lucknow','Uttar Pradesh');
insert into manager values(108,'Shashi','Bhushan','male',TO_DATE('11/09/2010','MM/DD/YYYY'),49000,TO_DATE('11/09/1994','MM/DD/YYYY'),'Hiran Magri','Udaipur','Rajasthan');
insert into manager values(109,'Amit','Burman','male',TO_DATE('10/16/2010','MM/DD/YYYY'),53000,TO_DATE('10/16/1997','MM/DD/YYYY'),'Shastri Nagar','Bikanar','Rajathan');
insert into manager values(110,'Tejvir','Singh','male',TO_DATE('03/05/2010','MM/DD/YYYY'),53000,TO_DATE('03/05/1997','MM/DD/YYYY'),'Shree rang nagar','Gandhinagar','Gujrat');


--data for manager_contact
insert into m_contact values(101,8699761914);
insert into m_contact values(101,8437002520);
insert into m_contact values(102,9465701079);
insert into m_contact values(103,7621873994);
insert into m_contact values(103,8699761914);
insert into m_contact values(104,9512974430);
insert into m_contact values(104,7500953895);
insert into m_contact values(105,7500953894);
insert into m_contact values(106,9465701087);
insert into m_contact values(106,9465701078);
insert into m_contact values(107,1234567891);
insert into m_contact values(107,1234567892);
insert into m_contact values(108,1234567893);
insert into m_contact values(109,1234567895);
insert into m_contact values(110,1234567894);


--data for investor investing in a scheme
insert into investor values(301,'Divyanshi','Puri',25,'female','Government Emp.','Pratap Nagar','Chittorgarh','Rajasthan');
insert into investor values(302,'Devanshu','Rathore',30,'male','Private Emp.','Shajanpur','Lucknow','Uttar Pradesh');
insert into investor values(303,'Aditi','Saxena',22,'female','Business','Shastri Nagar','Bikanar','Rajathan');
insert into investor values(304,'Sachin','Sharma',40,'male','Government Emp.','Usmaan Gunj','Hyderabad','Telangana');
insert into investor values(305,'Kalindi','Dashora',44,'female','Business','Housing Colony','Nainital','Uttarakhand');
insert into investor values(306,'Surbhi','Maali',65,'female','Private Emp.','Madhuban Colony','Kaputhala','Punjab');
insert into investor values(307,'Tushar','Joshi',70,'male','Government Emp.','Boring Road','Patna','Bihar');
insert into investor values(308,'Kalpit','Chittora',68,'male','Business','Keshav Nagar','Indore','Madhya Pradesh');
insert into investor values(309,'Hemant','Khatri',80,'male','Government Emp.','Agucha Colony','Vijaynagar','Delhi');
insert into investor values(310,'Harshita','Tomar',48,'male','Private Emp.','Niti Vihar','Kurukshetra','Haryana');
insert into investor values(311,'Saloni','Puri',32,'female','Government Emp.','Bhagvan Pur','Roorkee','Uttar Pradesh');
insert into investor values(312,'Ajay','Sharma',45,'male','Private Emp.','rampur','Sharanpur','Uttrakhand');
insert into investor values(313,'Aditi','uttam',25,'female','Business','r.c.f','Kapurthala','Punjab');
insert into investor values(314,'Arpan','Sharma',40,'male','Government Emp.','Choti Baradari','Pathankot','Punjab');
insert into investor values(315,'Manmeet','Mehta',22,'female','Government Emp.','Ram nagar','Pathankot','Punjab');


--data for contact_number of investor
insert into c_contact values(301,9876540001);
insert into c_contact values(301,9876540002);
insert into c_contact values(302,9876540003);
insert into c_contact values(302,9876540004);
insert into c_contact values(303,9876540005);
insert into c_contact values(304,9876540006);
insert into c_contact values(304,9876540007);
insert into c_contact values(305,9876540008);
insert into c_contact values(306,9876540009);
insert into c_contact values(306,9876540010);
insert into c_contact values(307,9876540011);
insert into c_contact values(307,9876540012);
insert into c_contact values(308,9876540013);
insert into c_contact values(308,9876540014);
insert into c_contact values(309,9876540015);
insert into c_contact values(310,9876540016);
insert into c_contact values(310,9876540017);


--data for sender sending item
insert into sender values(201,'Vishnu','Singhal','Navrang Nagar','Beawar','Rajasthan');
insert into sender values(202,'Anurag','Sharma','Nakoda Nagar','Chittor','Rajasthan');
insert into sender values(203,'Pradeep','Kumar','Madhuban Colony','Kaputhala','Punjab');
insert into sender values(204,'Prem','Gupta','Somnagar','Indore','Madhya Pradesh');
insert into sender values(205,'Mahendra','Gupta','Chitrakoot Colony','Gandhinagar','Gujurat');
insert into sender values(206,'Sunita','Singhal','Bunny Park','Bhopal','Madhya Pradesh');
insert into sender values(207,'Urmila','Goyal','Champa Nagar','Chennai','Tamil Nadu');
insert into sender values(208,'Sheela','Sharma','Housing Colony','Nainital','Uttarakhand');
insert into sender values(209,'Mukul','Soni','Mahavir Colony','Roorkee','Uttar Pradesh');
insert into sender values(210,'Atika','Singhal','Ashok Nagar','KanyaKumari','Kerela');


--data for contact_number of sender
insert into s_contact values(201,9000000001);
insert into s_contact values(201,9000000002);
insert into s_contact values(202,9000000003);
insert into s_contact values(202,9000000004);
insert into s_contact values(203,9000000005);
insert into s_contact values(203,9000000006);
insert into s_contact values(204,9000000007);
insert into s_contact values(204,9000000008);
insert into s_contact values(205,9000000009);
insert into s_contact values(205,9000000010);
insert into s_contact values(206,9000000011);
insert into s_contact values(207,9000000012);
insert into s_contact values(207,9000000013);
insert into s_contact values(208,9000000014);
insert into s_contact values(208,9000000015);
insert into s_contact values(209,9000000016);
insert into s_contact values(210,9000000017);
insert into s_contact values(210,9000000018);



--data for branch relation branch 
insert into managed_by values(101,305002,TO_DATE('02/23/2010','MM/DD/YYYY'),TO_DATE('02/23/2013','MM/DD/YYYY'));
insert into managed_by values(101,302016,TO_DATE('02/23/2013','MM/DD/YYYY'),null);

insert into managed_by values(106,302016,TO_DATE('02/25/2010','MM/DD/YYYY'),TO_DATE('02/23/2013','MM/DD/YYYY'));
insert into managed_by values(106,305002,TO_DATE('02/23/2013','MM/DD/YYYY'),null);

insert into managed_by values(102,382255,TO_DATE('01/10/2010','MM/DD/YYYY'),TO_DATE('01/10/2013','MM/DD/YYYY'));
insert into managed_by values(102,360060,TO_DATE('01/10/2013','MM/DD/YYYY'),null);

insert into managed_by values(107,360060,TO_DATE('02/13/2010','MM/DD/YYYY'),TO_DATE('01/10/2013','MM/DD/YYYY'));
insert into managed_by values(107,382255,TO_DATE('01/10/2013','MM/DD/YYYY'),null);

insert into managed_by values(108,151302,TO_DATE('11/09/2010','MM/DD/YYYY'),TO_DATE('12/14/2013','MM/DD/YYYY'));
insert into managed_by values(108,143006,TO_DATE('12/14/2013','MM/DD/YYYY'),null);

insert into managed_by values(103,143006,TO_DATE('12/14/2010','MM/DD/YYYY'),TO_DATE('12/14/2013','MM/DD/YYYY'));
insert into managed_by values(103,151302,TO_DATE('12/14/2013','MM/DD/YYYY'),null);

insert into managed_by values(104,803211,TO_DATE('08/25/2010','MM/DD/YYYY'),TO_DATE('08/25/2013','MM/DD/YYYY'));
insert into managed_by values(104,110003,TO_DATE('08/25/2013','MM/DD/YYYY'),null);

insert into managed_by values(109,110003,TO_DATE('10/16/2010','MM/DD/YYYY'),TO_DATE('08/25/2013','MM/DD/YYYY'));
insert into managed_by values(109,803211,TO_DATE('08/25/2013','MM/DD/YYYY'),null);

insert into managed_by values(105,110003,TO_DATE('12/14/2010','MM/DD/YYYY'),TO_DATE('12/14/2013','MM/DD/YYYY'));
insert into managed_by values(105,843109,TO_DATE('12/14/2013','MM/DD/YYYY'),null);

insert into managed_by values(110,843109,TO_DATE('03/05/2010','MM/DD/YYYY'),TO_DATE('12/14/2013','MM/DD/YYYY'));
insert into managed_by values(110,110096,TO_DATE('12/14/2013','MM/DD/YYYY'),null);


--data for finding cost for different weight
insert into w_cost values(0,50,'speed post',20);
insert into w_cost values(51,200,'speed post',37);
insert into w_cost values(201,500,'speed post',50);
insert into w_cost values(501,1000,'speed post',60);
insert into w_cost values(0,50,'registered post',15);
insert into w_cost values(51,200,'registered post',30);
insert into w_cost values(201,500,'registered post',40);
insert into w_cost values(501,1000,'registered post',50);
insert into w_cost values(0,50,'ordinary post',10);
insert into w_cost values(51,200,'ordinary post',15);



--data for finding cost for different distances
insert into d_cost values(0,100,'speed post',27);
insert into d_cost values(101,200,'speed post',40);
insert into d_cost values(201,1000,'speed post',50);
insert into d_cost values(1001,2000,'speed post',62);
insert into d_cost values(2001,3000,'speed post',77);
insert into d_cost values(0,100,'registered post',20);
insert into d_cost values(101,200,'registered post',30);
insert into d_cost values(201,1000,'registered post',50);
insert into d_cost values(1001,2000,'registered post',55);
insert into d_cost values(2001,3000,'registered post',70);
insert into d_cost values(0,100,'ordinary post',10);
insert into d_cost values(101,200,'ordinary post',20);
insert into d_cost values(201,1000,'ordinary post',35);
insert into d_cost values(1001,2000,'ordinary post',45);
insert into d_cost values(2001,3000,'ordinary post',55);
 

-- data for item send by sender;
insert into item values(100001,89,145,'Ajmer','speed post','Jaipur',305002,201,51,200,101,200,TO_Date('02/23/2012','MM/DD/YYYY'),TO_Date('02/25/2012','MM/DD/YYYY'),null);
insert into item values(100002,103,440,'Ajmer','speed post','Ahmedabad',305002,201,51,200,201,1000,TO_Date('06/10/2012','MM/DD/YYYY'),TO_Date
('06/12/2012','MM/DD/YYYY'),null);
insert into item values(100003,46,874,'Jaipur','registered post','Rajkot',302016,202,0,50,201,1000,TO_Date('11/15/2012','MM/DD/YYYY'),TO_Date
('11/19/2012','MM/DD/YYYY'),null);
insert into item values(100004,180,900,'Jaipur','ordinary post','Bathinda',302016,202,51,200,201,1000,TO_Date('12/12/2012','MM/DD/YYYY'),TO_Date
('12/29/2012','MM/DD/YYYY'),null);
insert into item values(100005,270,1020,'Amritsar','speed post','Jaipur',143006,203,201,500,1001,2000,TO_Date('01/01/2013','MM/DD/YYYY'),TO_Date
('01/06/2013','MM/DD/YYYY'),null);
insert into item values(100006,45,1400,'Amritsar','ordinary post','Patna',143006,203,0,50,1001,2000,TO_Date('02/26/2013','MM/DD/YYYY'),TO_Date
('03/06/2013','MM/DD/YYYY'),null);
insert into item values(100007,255,1020,'Patna','speed post','Amritsar',803211,204,201,500,1001,2000,TO_Date('03/15/2013','MM/DD/YYYY'),TO_Date
('03/17/2013','MM/DD/YYYY'),null);
insert into item values(100008,60,189,'Amritsar','ordinary post','Bathinda',143006,204,51,200,101,200,TO_Date('03/28/2013','MM/DD/YYYY'),TO_Date
('04/08/2013','MM/DD/YYYY'),null);
insert into item values(100009,340,861,'Patna','registered post','South Delhi',803211,205,201,500,201,1000,TO_Date('04/09/2013','MM/DD/YYYY'),TO_Date
('04/15/2013','MM/DD/YYYY'),null);
insert into item values(100010,900,1020,'Muzaffarpur','speed post','Jaipur',843109,205,501,1000,1001,2000,TO_Date('04/25/2013','MM/DD/YYYY'),TO_Date
('04/27/2013','MM/DD/YYYY'),null);
insert into item values(100011,190,1020,'Jaipur','ordinary post','Muzaffarpur',302016,206,51,200,1001,2000,TO_Date('04/26/2013','MM/DD/YYYY'),TO_Date
('05/08/2013','MM/DD/YYYY'),null);
insert into item values(100012,30,1136,'Jaipur','registered post','Patna',803211,206,0,50,1001,2000,TO_Date('05/05/2013','MM/DD/YYYY'),TO_Date
('05/17/2013','MM/DD/YYYY'),null);
insert into item values(100013,30,72,'Muzaffarpur','registered post','Patna',843109,207,0,50,0,100,TO_Date('05/08/2013','MM/DD/YYYY'),TO_Date
('05/12/2013','MM/DD/YYYY'),null);
insert into item values(100014,750,874,'Rajkot','speed post','Jaipur',360060,207,501,1000,201,1000,TO_Date('05/15/2013','MM/DD/YYYY'),TO_Date
('05/17/2013','MM/DD/YYYY'),null);
insert into item values(100015,180,150,'South Delhi','ordinary post','Amritsar',110003,208,51,200,201,1000,TO_Date('05/19/2013','MM/DD/YYYY'),TO_Date
('06/02/2013','MM/DD/YYYY'),null);
insert into item values(100016,150,1121,'East Delhi','speed post','Rajkot',110096,208,51,200,1001,2000,TO_Date('06/02/2013','MM/DD/YYYY'),TO_Date
('06/15/2013','MM/DD/YYYY'),null);
insert into item values(100017,60,1391,'Bathinda','ordinary post','Muzaffarpur',151302,209,0,50,1001,2000,TO_Date('05/05/2013','MM/DD/YYYY'),TO_Date
('05/17/2013','MM/DD/YYYY'),null);
insert into item values(100018,60,1417,'Bathinda','registered post','Patna',151302,209,51,200,1001,2000,TO_Date('05/05/2013','MM/DD/YYYY'),TO_Date
('05/12/2013','MM/DD/YYYY'),null);
insert into item values(100019,220,1676,'Ahmedabad','registered post','Patna',382255,210,201,500,1001,2000,TO_Date('05/11/2013','MM/DD/YYYY'),TO_Date
('05/18/2013','MM/DD/YYYY'),null);
insert into item values(100020,450,1200,'Ahmedabad','speed post','Amritsar',382255,210,201,500,1001,2000,TO_Date('05/13/2013','MM/DD/YYYY'),TO_Date
('05/15/2013','MM/DD/YYYY'),null);
insert into item values(100021,90,1076,'South Delhi','registered post','Muzaffarpur',110003,201,51,200,1001,2000,TO_Date
('05/15/2013','MM/DD/YYYY'),TO_Date('05/21/2013','MM/DD/YYYY'),null);
insert into item values(100022,510,1093,'East Delhi','speed post','Patna',110096,202,501,1000,1001,2000,TO_Date('05/15/2013','MM/DD/YYYY'),TO_Date
('05/18/2013','MM/DD/YYYY'),null);
insert into item values(100023,420,385,'Ajmer','speed post','South Delhi',305002,203,201,500,201,1000,TO_Date('05/16/2013','MM/DD/YYYY'),TO_Date
('05/19/2013','MM/DD/YYYY'),null);
insert into item values(100024,600,1273,'Patna','registered post','Ajmer',803211,204,501,1000,1001,2000,TO_Date('05/16/2013','MM/DD/YYYY'),TO_Date
('05/23/2013','MM/DD/YYYY'),null);
insert into item values(100025,70,274,'Jaipur','speed post','East Delhi',302016,205,51,200,201,1000,TO_Date('05/18/2013','MM/DD/YYYY'),TO_Date
('05/21/2013','MM/DD/YYYY'),null);
insert into item values(100026,365,1025,'Bathinda','speed post','Ahmedabad',151302,206,201,500,1001,2000,TO_Date('05/19/2013','MM/DD/YYYY'),TO_Date
('05/22/2013','MM/DD/YYYY'),null);
insert into item values(100027,90,1121,'East Delhi','ordinary post','Rajkot',110096,207,51,200,1001,2000,TO_Date('05/21/2013','MM/DD/YYYY'),TO_Date
('05/30/2013','MM/DD/YYYY'),null);
insert into item values(100028,307,926,'South Delhi','speed post','Ahmedabad',110003,208,201,500,201,1000,TO_Date('05/22/2013','MM/DD/YYYY'),TO_Date
('05/25/2013','MM/DD/YYYY'),null);
insert into item values(100029,40,1120,'Rajkot','ordinary post','East Delhi',360060,209,0,50,1001,2000,TO_Date('05/22/2013','MM/DD/YYYY'),TO_Date
('06/02/2013','MM/DD/YYYY'),null);
insert into item values(100030,36,1400,'Muzaffarpur','ordinary post','Bathinda',843109,210,0,50,1001,2000,TO_Date('05/24/2013','MM/DD/YYYY'),TO_Date
('06/05/2013','MM/DD/YYYY'),null);


--data for schemes in the post-office
insert into scheme values('001','Recurring Deposit Account',7.2,10,5,10,'monthly');
insert into scheme values('002','Monthly Income Scheme',7.6,10,5,1500,'one time');
insert into scheme values('003','Senior Citizen Saving Scheme',8.4,60,5,1000,'one time');
insert into scheme values('004','Time Deposit Account',6.9,10,1,200,'one time');
insert into scheme values('005','Time Deposit Account',7.0,10,2,200,'one time');
insert into scheme values('006','Time Deposit Account',7.2,10,3,200,'one time');
insert into scheme values('007','Time Deposit Account',7.7,10,5,200,'one time');
insert into scheme values('008','Public Provident Fund Account',7.9,18,15,500,'yearly');
insert into scheme values('009','Kisan Vikas Patra',7.8,18,9,1000,'one time');


-- data for accounts in various schemes

insert into account values(305002,301,004,401,TO_DATE('02/01/2010','MM/DD/YYYY'),50000,TO_DATE('02/01/2010','MM/DD/YYYY'));
-- account closed
--temporary delete insert into account values(305002,301,004,401,TO_DATE('02/01/2011','MM/DD/YYYY'),-53450,TO_DATE('02/01/2010','MM/DD/YYYY'));
insert into account values(305002,306,004,408,TO_DATE('04/01/2013','MM/DD/YYYY'),50000,TO_DATE('04/01/2013','MM/DD/YYYY'));
--account closed
insert into account values(305002,306,004,408,TO_DATE('04/01/2014','MM/DD/YYYY'),-53450,TO_DATE('04/01/2013','MM/DD/YYYY'));

insert into account values(305002,302,004,415,TO_DATE('05/03/2016','MM/DD/YYYY'),50000,TO_DATE('05/03/2016','MM/DD/YYYY'));
insert into account values(305002,303,004,416,TO_DATE('05/05/2016','MM/DD/YYYY'),50000,TO_DATE('05/05/2016','MM/DD/YYYY'));
insert into account values(305002,304,004,417,TO_DATE('05/09/2016','MM/DD/YYYY'),50000,TO_DATE('05/09/2016','MM/DD/YYYY'));
insert into account values(305002,305,004,418,TO_DATE('05/11/2016','MM/DD/YYYY'),50000,TO_DATE('05/11/2016','MM/DD/YYYY'));
insert into account values(305002,311,005,411,TO_DATE('02/20/2016','MM/DD/YYYY'),40000,TO_DATE('02/20/2016','MM/DD/YYYY'));


insert into account values(302016,302,005,402,TO_DATE('02/14/2010','MM/DD/YYYY'),40000,TO_DATE('02/14/2010','MM/DD/YYYY'));
--account closed
insert into account values(302016,302,005,402,TO_DATE('02/14/02012','MM/DD/YYYY'),-45600,TO_DATE('02/14/2010','MM/DD/YYYY'));


insert into account values(302016,303,005,419,TO_DATE('05/13/2016','MM/DD/YYYY'),40000,TO_DATE('05/13/2016','MM/DD/YYYY'));
insert into account values(302016,304,005,420,TO_DATE('05/15/2016','MM/DD/YYYY'),40000,TO_DATE('05/15/2016','MM/DD/YYYY'));
insert into account values(302016,305,005,421,TO_DATE('05/17/2016','MM/DD/YYYY'),40000,TO_DATE('05/17/2016','MM/DD/YYYY'));
insert into account values(302016,312,004,412,TO_DATE('02/23/2016','MM/DD/YYYY'),50000,TO_DATE('02/23/2016','MM/DD/YYYY'));
--account closed
insert into account values(302016,312,004,412,TO_DATE('02/23/2017','MM/DD/YYYY'),-53450,TO_DATE('02/23/2016','MM/DD/YYYY'));



insert into account values(382255,303,006,403,TO_DATE('02/23/2010','MM/DD/YYYY'),45000,TO_DATE('02/23/2010','MM/DD/YYYY'));
--account closed
insert into account values(382255,303,006,403,TO_DATE('02/23/2013','MM/DD/YYYY'),-54720,TO_DATE('02/23/2010','MM/DD/YYYY'));
insert into account values(382255,313,005,413,TO_DATE('02/23/2016','MM/DD/YYYY'),40000,TO_DATE('02/23/2016','MM/DD/YYYY'));



insert into account values(360060,304,007,404,TO_DATE('02/27/2010','MM/DD/YYYY'),55000,TO_DATE('02/27/2010','MM/DD/YYYY'));
--account closed
insert into account values(360060,304,007,404,TO_DATE('02/27/2015','MM/DD/YYYY'),-76175,TO_DATE('02/27/2010','MM/DD/YYYY'));
insert into account values(360060,314,006,414,TO_DATE('02/28/2016','MM/DD/YYYY'),45000,TO_DATE('02/28/2016','MM/DD/YYYY'));


insert into account values(143006,305,008,405,TO_DATE('03/15/2010','MM/DD/YYYY'),60000,TO_DATE('03/15/2010','MM/DD/YYYY'));
insert into account values(143006,305,008,405,TO_DATE('03/15/2011','MM/DD/YYYY'),60000,TO_DATE('03/15/2010','MM/DD/YYYY'));
insert into account values(143006,305,008,405,TO_DATE('03/15/2012','MM/DD/YYYY'),60000,TO_DATE('03/15/2010','MM/DD/YYYY'));
insert into account values(143006,305,008,405,TO_DATE('03/15/2013','MM/DD/YYYY'),60000,TO_DATE('03/15/2010','MM/DD/YYYY'));
insert into account values(143006,305,008,405,TO_DATE('03/15/2014','MM/DD/YYYY'),60000,TO_DATE('03/15/2010','MM/DD/YYYY'));
insert into account values(143006,305,008,405,TO_DATE('03/15/2015','MM/DD/YYYY'),60000,TO_DATE('03/15/2010','MM/DD/YYYY'));
insert into account values(143006,305,008,405,TO_DATE('03/15/2016','MM/DD/YYYY'),60000,TO_DATE('03/15/2010','MM/DD/YYYY'));
--temporary delete insert into account values(143006,305,008,405,TO_DATE('03/15/2017','MM/DD/YYYY'),60000,TO_DATE('03/15/2010','MM/DD/YYYY'));

insert into account values(143006,315,001,431,TO_DATE('06/13/2016','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));
insert into account values(143006,315,001,431,TO_DATE('07/13/2016','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));
insert into account values(143006,315,001,431,TO_DATE('08/13/2016','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));
insert into account values(143006,315,001,431,TO_DATE('09/13/2016','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));
insert into account values(143006,315,001,431,TO_DATE('10/13/2016','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));
insert into account values(143006,315,001,431,TO_DATE('11/13/2016','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));
insert into account values(143006,315,001,431,TO_DATE('12/13/2016','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));

insert into account values(143006,315,001,431,TO_DATE('01/13/2017','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));
insert into account values(143006,315,001,431,TO_DATE('02/13/2017','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));
insert into account values(143006,315,001,431,TO_DATE('03/13/2017','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));
insert into account values(143006,315,001,431,TO_DATE('04/13/2017','MM/DD/YYYY'),6000,TO_DATE('06/13/2016','MM/DD/YYYY'));


insert into account values(151302,306,009,406,TO_DATE('03/17/2012','MM/DD/YYYY'),100000,TO_DATE('03/17/2012','MM/DD/YYYY'));

insert into account values(151302,307,009,422,TO_DATE('05/19/2016','MM/DD/YYYY'),100000,TO_DATE('05/19/2016','MM/DD/YYYY'));
insert into account values(151302,308,009,423,TO_DATE('05/21/2016','MM/DD/YYYY'),100000,TO_DATE('05/21/2016','MM/DD/YYYY'));
insert into account values(151302,309,009,424,TO_DATE('05/23/2016','MM/DD/YYYY'),100000,TO_DATE('05/23/2016','MM/DD/YYYY'));
insert into account values(151302,310,009,425,TO_DATE('05/27/2016','MM/DD/YYYY'),100000,TO_DATE('05/27/2016','MM/DD/YYYY'));


insert into account values(803211,307,003,407,TO_DATE('03/23/2013','MM/DD/YYYY'),20000,TO_DATE('03/23/2013','MM/DD/YYYY'));
insert into account values(803211,307,003,407,TO_DATE('06/23/2013','MM/DD/YYYY'),-420,TO_DATE('03/23/2013','MM/DD/YYYY'));
insert into account values(803211,307,003,407,TO_DATE('12/23/2013','MM/DD/YYYY'),-420,TO_DATE('03/23/2013','MM/DD/YYYY'));
insert into account values(803211,307,003,407,TO_DATE('03/23/2014','MM/DD/YYYY'),-420,TO_DATE('03/23/2013','MM/DD/YYYY'));
insert into account values(803211,307,003,407,TO_DATE('09/23/2014','MM/DD/YYYY'),-420,TO_DATE('03/23/2013','MM/DD/YYYY'));
insert into account values(803211,307,003,407,TO_DATE('03/23/2015','MM/DD/YYYY'),-420,TO_DATE('03/23/2013','MM/DD/YYYY'));
insert into account values(803211,307,003,407,TO_DATE('12/23/2015','MM/DD/YYYY'),-420,TO_DATE('03/23/2013','MM/DD/YYYY'));


insert into account values(803211,301,003,426,TO_DATE('06/01/2016','MM/DD/YYYY'),20000,TO_DATE('06/01/2016','MM/DD/YYYY'));
insert into account values(803211,301,003,426,TO_DATE('09/01/2016','MM/DD/YYYY'),-420,TO_DATE('06/01/2016','MM/DD/YYYY'));
insert into account values(803211,301,003,426,TO_DATE('03/01/2017','MM/DD/YYYY'),-420,TO_DATE('06/01/2016','MM/DD/YYYY'));


insert into account values(803211,302,003,427,TO_DATE('06/04/2016','MM/DD/YYYY'),20000,TO_DATE('06/04/2016','MM/DD/YYYY'));
insert into account values(803211,302,003,427,TO_DATE('12/04/2016','MM/DD/YYYY'),-420,TO_DATE('06/04/2016','MM/DD/YYYY'));
insert into account values(803211,302,003,427,TO_DATE('03/04/2017','MM/DD/YYYY'),-420,TO_DATE('06/04/2016','MM/DD/YYYY'));


insert into account values(803211,303,003,428,TO_DATE('06/06/2016','MM/DD/YYYY'),20000,TO_DATE('06/06/2016','MM/DD/YYYY'));
insert into account values(803211,303,003,428,TO_DATE('09/06/2016','MM/DD/YYYY'),-420,TO_DATE('06/06/2016','MM/DD/YYYY'));
insert into account values(803211,303,003,428,TO_DATE('12/06/2016','MM/DD/YYYY'),-420,TO_DATE('06/06/2016','MM/DD/YYYY'));


insert into account values(803211,304,003,429,TO_DATE('06/09/2016','MM/DD/YYYY'),20000,TO_DATE('06/09/2016','MM/DD/YYYY'));
insert into account values(803211,304,003,429,TO_DATE('09/09/2016','MM/DD/YYYY'),-420,TO_DATE('06/09/2016','MM/DD/YYYY'));
insert into account values(803211,304,003,429,TO_DATE('03/09/2017','MM/DD/YYYY'),-420,TO_DATE('06/09/2016','MM/DD/YYYY'));

insert into account values(803211,305,003,430,TO_DATE('06/11/2016','MM/DD/YYYY'),20000,TO_DATE('06/11/2016','MM/DD/YYYY'));
insert into account values(803211,305,003,430,TO_DATE('09/11/2016','MM/DD/YYYY'),-420,TO_DATE('06/11/2016','MM/DD/YYYY'));
insert into account values(803211,305,003,430,TO_DATE('12/11/2016','MM/DD/YYYY'),-420,TO_DATE('06/11/2016','MM/DD/YYYY'));



insert into account values(843109,301,002,432,TO_DATE('06/15/2016','MM/DD/YYYY'),55000,TO_DATE('06/15/2016','MM/DD/YYYY'));
insert into account values(843109,301,002,432,TO_DATE('08/15/2016','MM/DD/YYYY'),-348,TO_DATE('06/15/2016','MM/DD/YYYY'));
insert into account values(843109,301,002,432,TO_DATE('09/15/2016','MM/DD/YYYY'),-348,TO_DATE('06/15/2016','MM/DD/YYYY'));
insert into account values(843109,301,002,432,TO_DATE('11/15/2016','MM/DD/YYYY'),-348,TO_DATE('06/15/2016','MM/DD/YYYY'));
insert into account values(843109,301,002,432,TO_DATE('01/15/2017','MM/DD/YYYY'),-348,TO_DATE('06/15/2016','MM/DD/YYYY'));
insert into account values(843109,301,002,432,TO_DATE('02/15/2017','MM/DD/YYYY'),-348,TO_DATE('06/15/2016','MM/DD/YYYY'));

insert into account values(843109,302,002,433,TO_DATE('06/17/2016','MM/DD/YYYY'),55000,TO_DATE('06/17/2016','MM/DD/YYYY'));
insert into account values(843109,302,002,433,TO_DATE('08/17/2016','MM/DD/YYYY'),-348,TO_DATE('06/17/2016','MM/DD/YYYY'));
insert into account values(843109,302,002,433,TO_DATE('09/17/2016','MM/DD/YYYY'),-348,TO_DATE('06/17/2016','MM/DD/YYYY'));
insert into account values(843109,302,002,433,TO_DATE('10/17/2016','MM/DD/YYYY'),-348,TO_DATE('06/17/2016','MM/DD/YYYY'));
insert into account values(843109,302,002,433,TO_DATE('11/17/2016','MM/DD/YYYY'),-348,TO_DATE('06/17/2016','MM/DD/YYYY'));


insert into account values(843109,303,002,434,TO_DATE('06/19/2016','MM/DD/YYYY'),55000,TO_DATE('06/19/2016','MM/DD/YYYY'));
insert into account values(843109,303,002,434,TO_DATE('07/19/2016','MM/DD/YYYY'),-348,TO_DATE('06/19/2016','MM/DD/YYYY'));
insert into account values(843109,303,002,434,TO_DATE('08/19/2016','MM/DD/YYYY'),-348,TO_DATE('06/19/2016','MM/DD/YYYY'));
insert into account values(843109,303,002,434,TO_DATE('10/19/2016','MM/DD/YYYY'),-348,TO_DATE('06/19/2016','MM/DD/YYYY'));
insert into account values(843109,303,002,434,TO_DATE('02/19/2017','MM/DD/YYYY'),-348,TO_DATE('06/19/2016','MM/DD/YYYY'));
-- temporary delete insert into account values(843109,303,002,434,TO_DATE('03/19/2017','MM/DD/YYYY'),-348,TO_DATE('06/19/2016','MM/DD/YYYY'));


insert into account values(110003,309,001,409,TO_DATE('04/05/2013','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('05/05/2013','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('06/05/2013','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('07/05/2013','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('08/05/2013','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('09/05/2013','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('10/05/2013','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('11/05/2013','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('12/05/2013','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));

insert into account values(110003,309,001,409,TO_DATE('01/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('02/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('03/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('04/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('05/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('06/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('07/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('08/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('09/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('10/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('11/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('12/05/2014','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));

insert into account values(110003,309,001,409,TO_DATE('01/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('02/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('03/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('04/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('05/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('06/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('07/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('08/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('09/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('10/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('11/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('12/05/2015','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));

insert into account values(110003,309,001,409,TO_DATE('01/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('02/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('03/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('04/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('05/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('06/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('07/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('08/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('09/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('10/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('11/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('12/05/2016','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));

insert into account values(110003,309,001,409,TO_DATE('01/05/2017','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('02/05/2017','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
insert into account values(110003,309,001,409,TO_DATE('03/05/2017','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));
--temporary delete insert into account values(110003,309,001,409,TO_DATE('04/05/2017','MM/DD/YYYY'),5000,TO_DATE('04/05/2013','MM/DD/YYYY'));


insert into account values(110096,310,001,410,TO_DATE('02/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('03/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('04/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('05/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('06/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('07/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('08/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('09/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('10/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('11/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('12/15/2016','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));

insert into account values(110096,310,001,410,TO_DATE('01/15/2017','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('02/15/2017','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('03/15/2017','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));
insert into account values(110096,310,001,410,TO_DATE('04/15/2017','MM/DD/YYYY'),5000,TO_DATE('02/15/2016','MM/DD/YYYY'));

commit;

