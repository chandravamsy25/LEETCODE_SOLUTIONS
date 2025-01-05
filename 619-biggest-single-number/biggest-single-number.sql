# Write your MySQL query statement below
SELECT  max(num) AS num
FROM MyNumbers

WHERE num IN(select num from MyNumbers group by num HAVING count(num)=1 );
