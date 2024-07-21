use MA518;

SHOW tables;

SELECT * FROM Sailors;


SELECT Sname, Age
FROM Sailors;

INSERT INTO Sailors (Sid, Sname, Rating, Age)
VALUES
(100, 'Bob', 8, 63.5);

SELECT DISTINCT S.Sname,S.Age
FROM Sailors S;

ALTER TABLE Sailors
RENAME COLUMN old_name TO new_name;

DELETE FROM Sailors
WHERE Sid = 100;

UPDATE `MA518`.`Sailors` SET `Age` = '35' WHERE (`Sid` = '74');

SELECT * FROM Sailors
WHERE Rating > 7;

SELECT S.Sname
FROM Sailors S, Reserves R
WHERE S.Sid = R.Sid AND R.Bid = 103;


SELECT R.Sid
FROM Reserves R, Boats B
WHERE R.Bid = B.Bid AND B.Color = 'red';


SELECT S.Sname
FROM Sailors S, Reserves R, Boats B
WHERE S.Sid = R.Sid AND R.Bid = B.Bid AND B.Color = 'red';

SELECT B.Color
FROM Sailors S, Reserves R, Boats B
WHERE S.Sid = R.Sid AND R.Bid = B.Bid AND S.Sname = 'Lubber';

SELECT DISTINCT S.Sname
FROM Sailors S, Reserves R
WHERE S.Sid = R.Sid  ;

SELECT Sid, Age + 1 AS Age
FROM Sailors;

SELECT * FROM Reserves;


SELECT DISTINCT S.Sname, S.Rating + 1 AS Rating
FROM Sailors S, Reserves r1, Reserves r2
WHERE S.Sid=r1.Sid AND S.Sid=r2.Sid AND r1.rday = r2.rday AND r1.Bid <> r2.Bid ;


SELECT S1.Sname , S2.Sname
FROM Sailors S1, Sailors S2
Where 2*S1.Rating = S2.Rating -1;

SELECT S.Sname
FROM Sailors S
WHERE Sname LIKE 'B_%b';

SELECT S.Sname
FROM Sailors S
WHERE LOWER(SUBSTRING(Sname, 1, 1)) = LOWER(SUBSTRING(Sname, -1, 1));



SELECT DISTINCT S.Sname
FROM Sailors S, Reserves R, Boats B
WHERE S.Sid = R.Sid AND R.Bid = B.Bid AND (B.Color = 'red' OR B.Color = 'blue');


SELECT S.Sname
FROM Sailors S, Reserves R, Boats B
WHERE S.Sid = R.Sid AND R.Bid = B.Bid AND B.Color = 'red'
UNION
SELECT S.Sname
FROM Sailors S, Reserves R, Boats B
WHERE S.Sid = R.Sid AND R.Bid = B.Bid AND B.Color = 'green';

SELECT Sname
FROM Sailors
WHERE Rating = 10
UNION
SELECT S.Sname
FROM Sailors S, Reserves R
WHERE S.Sid = R.Sid AND R.Bid = 104;

SELECT S.Sname
FROM Sailors S
WHERE S.Sid IN(
 SELECT R.Sid
 FROM Reserves R
 WHERE R.Bid IN (
 SELECT B.Bid
 FROM Boats B
 WHERE B.Color = 'red'));