# Write your MySQL query statement below
select Prices.product_id,
ifnull(
    round(
        sum(Prices.price * UnitsSold.units)/sum(UnitsSold.units)
        ,2)
    ,0.00) as average_price
from Prices
left join UnitsSold
on Prices.product_id = UnitsSold.product_id
AND UnitsSold.purchase_date BETWEEN Prices.start_date AND Prices.end_date
group by Prices.product_id