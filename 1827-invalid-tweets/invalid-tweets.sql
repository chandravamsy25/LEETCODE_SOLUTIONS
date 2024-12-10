# Write your MySQL query statement below
#SELECT tweet_id 
#FROM Tweets
#WHERE COUNT(content)>15;

SELECT   tweet_id
FROM Tweets
WHERE LENGTH(content)>15;
