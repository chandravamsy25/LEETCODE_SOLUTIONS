
SELECT product_id,
       year AS first_year,
       quantity,
       price

FROM Sales 
WHERE(product_id,year) in (select product_id,min(year) from Sales group by product_id)


