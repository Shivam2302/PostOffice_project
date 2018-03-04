# PostOffice_project
- In this project, a database is built for basic functionalities of post office.
- Database contains information of various services provided by a post office such as transportation services, various interest schemes etc.
- This project is implemented with the help of embedded sql in c (PRO\*C). PRO\*C is choosen to learn concepts of RDBMS in more details.
- Pl/pgsql (SQL procedural language) is used for making stored procedures.

### Build Requirements :
- Postgresql

- libpq ( C application programmer's interface to PostgreSQL )  
    ```
        $  sudo apt-get remove libpq5
    ```
    ```
        $  sudo apt-get install libpq-dev
    ```
- ecpg  ( ecpg is the embedded SQL preprocessor for C programs )

    ```
        $  sudo apt-get update
    ```
    ```
        $  sudo apt-get install ecpg-xc
    ```
     
### Build instructions :
- Download or clone repository.

- Make you account in postgresql.

- Create schema using **Table.sql**.

- Add stored procedures to your schema using **Stored.sql**.

- Add data to your tables using **DataFinal.sql**.

- Put your database name, username, password in main function of console_app.pgc. (console_app.pgc is the driving file)

- Now, In order to run code, execute following commands in terminal.

    <pre>
     $  ecpg console_app.pgc</pre>
     
    <pre>
     $  gcc -I<b>/usr/include/postgresql/</b> -c console_app.c </pre>
     
    <pre>
     $  gcc -o console_app console_app.o -L<b>/usr/lib/postgresql/9.5/lib/</b> -lecpg</pre>
    
    <pre>
     $  ./console_app</pre>
     
   you may have to change the path (bold) if postgresql is installed in some different directory. 
  
### Screenshots :
- Some of the Screenshots of output of this project are given below.
<p align="center">
  <img src="https://i.imgur.com/2qrq5iu.png"> <br>
  Fig 1 - Steps to run code<br><br><br>
  <img src="https://i.imgur.com/Yto8KN1.png"> <br>
  Fig 2 - Output of query 1<br><br><br>
  <img src="https://i.imgur.com/Z8zzDNl.png"> <br>
  Fig 3 - Output of query 3<br><br><br>
  <img src="https://i.imgur.com/KbaLJRi.png"> <br>
  Fig 4 - Output of query 6<br><br><br>
</p>


