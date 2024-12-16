# Write your MySQL query statement below

SELECT v.customer_id,
       COUNT(v.visit_id) AS count_no_trans
FROM Visits AS v
LEFT JOIN Transactions AS j ON (v.visit_id=j.visit_id)

WHERE j.transaction_id IS NULL
GROUP BY v.customer_id;