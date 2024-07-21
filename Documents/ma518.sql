CREATE DATABASE ma518;
show databases;
use MA518;
show tables;


CREATE TABLE student (  
stu_id varchar(10),
stu_name varchar(20),
branch varchar(20)
);

CREATE TABLE branch_details (  
branch_name varchar(10),
subjects INT
);

CREATE TABLE credit_details
(  
branch varchar(20),
max_credits INT,
min_credits_required INT
);

INSERT INTO student VALUES
('1901401','DEVA','C.S'),
('1901402','HARSH','C.S'),
('1901403','DAVID','E.C'),
('1901404','GAURAV','E.C');

INSERT INTO branch_details VALUES
('C.S',8),
('E.C',7),
('M.E',7),
('I.C.E',9),
('E.E.E',8);

INSERT INTO credit_details VALUES
('C.S',21, 8),
('M.E',21, 7);

CREATE TABLE Worker (
WORKER_ID INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
FIRST_NAME CHAR(25),
LAST_NAME CHAR(25),
SALARY INT(15),
JOINING_DATE DATETIME,
DEPARTMENT CHAR(25)
);

INSERT INTO Worker
(WORKER_ID, FIRST_NAME, LAST_NAME, SALARY, JOINING_DATE, DEPARTMENT) VALUES
(001, 'Monika', 'Arora', 100000, '14-02-20 09.00.00', 'HR'),
(002, 'Niharuka', 'Sardar', 25000, '34-12-23 09.55.00', 'Admin'),
(003, 'Vishal', 'Singhal', 300000, '14-02-22 09.00.00', 'HR'),
(004, 'Amit', 'singh', 500000, '14-02-20 09.00.00', 'Admin'),
(005, 'koyal', 'mallick', 500000, '12-05-20 09.00.00', 'Admin'),
(006, 'kishan', 'dey', 200000, '14-02-20 09.00.00', 'Account'),
(007, 'vivek', 'paul', 75000, '20-03-20 10.00.00', 'Account'),
(008, 'dean', 'Ambrose', 90000, '31-02-12 09.00.00', 'Admin');

SELECT * FROM Worker;
SELECT * FROM Worker WHERE SALARY >300000;
SELECT * FROM Worker WHERE DEPARTMENT = 'HR';
SELECT * FROM Worker WHERE SALARY BETWEEN 300000 AND 500000;
SELECT * FROM Worker WHERE DEPARTMENT IN('HR', 'Admin');
SELECT * FROM Worker WHERE DEPARTMENT NOT IN('HR', 'Admin');
SELECT * FROM Worker WHERE FIRST_NAME LIKE '_I%';
SELECT * FROM Worker order by SALARY DESC;
SELECT DISTINCT DEPARTMENT FROM Worker;

-- group by 
SELECT DEPARTMENT, COUNT(*)  FROM Worker group by department;

-- AGREEGATION

SELECT DEPARTMENT, AVG(SALARY) FROM Worker GROUP BY DEPARTMENT;
SELECT DEPARTMENT, MIN(SALARY) FROM Worker GROUP BY DEPARTMENT;
SELECT DEPARTMENT, SUM(SALARY) FROM Worker GROUP BY DEPARTMENT;
SELECT DEPARTMENT, COUNT(DEPARTMENT) FROM Worker GROUP BY DEPARTMENT HAVING COUNT(DEPARTMENT) > 1;

INSERT INTO Worker
VALUES (009, 'dean', 'Ambrose', NULL, '31-02-12 09.00.00', 'NULL HAI BHAI');




SELECT * FROM ma518.Worker;
SELECT * FROM Worker WHERE SALARY is NULL;
SELECT * FROM student;
SELECT * FROM branch_details;
SELECT * FROM credit_details;
SELECT branch, max_credits FROM credit_details;
SELECT * FROM student, branch_details, credit_details;
SELECT * FROM student, branch_details, credit_details WHERE min_credits_required >= 7;

SELECT * FROM student;


SELECT subjects, branch_name FROM branch_details;

delete from credit_details where min_credits_required = 11 ;


SET SQL_SAFE_UPDATES = 0;

SELECT * FROM student;

select 44 + 11;

select now();

select lcase('ARUN SARDAR');

create table account(
id int primary key,
name varchar(225) UNIQUE,
balance INT NOT NULL DEFAULT 0
);

-- ADD NEW COLUMN
ALTER TABLE ACCOUNT ADD interest FLOAT NOT NULL DEFAULT 0;
ALTER TABLE ACCOUNT MODIFY INTEREST DOUBLE NOT NULL DEFAULT 0;
INSERT INTO ACCOUNT(ID, NAME) VALUES(1, 'A');

alter table account change column interest saving_interest FLOAT NOT NULL DEFAULT 0;

SELECT * FROM ACCOUNT;
DESC ACCOUNT;
