# Write your MySQL query statement below
SELECT product_name,
       SUM(unit) AS unit

FROM Products JOIN Orders ON (Products.product_id=Orders.product_id)
WHERE left(order_date,7)='2020-02'
GROUP BY Orders.product_id
HAVING unit>=100;