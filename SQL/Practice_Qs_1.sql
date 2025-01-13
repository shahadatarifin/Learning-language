/*
Qs: Create a database for your company named XYZ.
Step1: create a table inside this DB to store employee info (id, name and salary).
Step2 : Add following information in the DB :
1, "adam", 25000
2, "bob", 30000
3, "casey", 40000
Step3 : Select & view all your table data.
*/

DROP DATABASE IF EXISTS XYZ; 

CREATE DATABASE IF NOT EXISTS XYZ;
USE XYZ;

CREATE TABLE IF NOT EXISTS employee_info(
	ID INT PRIMARY KEY,
    Name VARCHAR(255),
    Salary INT    
);

INSERT INTO employee_info (ID, Name, Salary)
VALUES
	(1, "adam", 25000),
    (2, "bob", 30000),
    (3, "casey", 40000);

SELECT * FROM employee_info;