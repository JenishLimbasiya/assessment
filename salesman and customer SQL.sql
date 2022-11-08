/* CREATE CUSTOMER AND SALESMAN TABLE AND WRITE SQL QUERY TO SOLVE THE GIVEN PROBLEM : */

/* create table salesman */
CREATE TABLE salesman
(
    salesman int(200) PRIMARY KEY,
    name varchar(200),
    city varchar(200),
    commission varchar(200)
)

/* insert into deta salesman table */
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5001,'james hoog','new yourk',0.15);
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5002,'nail knite','paris',0.13);
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5005,'pit alex','london',0.11);
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5006,'mc lyon','paris',0.14);
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5007,'paul adam','rome',0.13);
INSERT INTO salesman(salesman_id,name,city,commission) VALUES(5003,'lauson hen','san jose',0.12)

/* create table customer */
CREATE TABLE customer
(
   customer_id int(200),
    cust_name varchar(200),
    city varchar(200),
    grade int(200),
    salesman_id int(200),
    FOREIGN KEY customer(salesman_id) REFERENCES salesman(salesman_id)
)

/* deta insert into customer table */
INSERT into customer(customer_id,cust_name,city,grade,salesman_id) VALUES(3002,'nick rimando','new yourk',100,5001);
INSERT into customer(customer_id,cust_name,city,grade,salesman_id) VALUES(3007,'brad davis','new yourk',200,5001);
INSERT into customer(customer_id,cust_name,city,grade,salesman_id) VALUES(3005,'graham zusi','california ',200,5002);
INSERT into customer(customer_id,cust_name,city,grade,salesman_id) VALUES(3008,'julian green','london',300,5002);
INSERT into customer(customer_id,cust_name,city,grade,salesman_id) VALUES(3004,'fabian johnson','paris ',300,5006);
INSERT into customer(customer_id,cust_name,city,grade,salesman_id) VALUES(3009,'geoff cameron','berlin ',100,5003);
INSERT into customer(customer_id,cust_name,city,grade,salesman_id) VALUES(3003,'jozy altidor','moscow ',200,5007);
INSERT into customer(customer_id,cust_name,city ,salesman_id) VALUES(3001,'brad guzan','london',5005)

 /* return the customer name ,city, salesman name, commission */
 
  SQL query : 
  ANS : SELECT cust_name,customer.city,name,commission FROM `customer` JOIN salesman on customer.salesman_id=salesman.salesman_id;


