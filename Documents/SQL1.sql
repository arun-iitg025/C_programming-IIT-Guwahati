CREATE DATABASE temp;

USE temp;	-- iska matlab ki kaun sa Database ko use kar rahe haii
-- this is sql
 
CREATE TABLE student (
id INT PRIMARY KEY,
name VARCHAR(255)
);

INSERT INTO student VALUES(11, 'Butler');
INSERT INTO student VALUES(14, 'Arun');

SELECT * FROM student; 		-- yahan humein pura table show kar dega
DROP DATABASE IF EXISTS temp;