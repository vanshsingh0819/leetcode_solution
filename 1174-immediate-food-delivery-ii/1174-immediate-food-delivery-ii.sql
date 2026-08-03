# Write your MySQL query statement below
select 
round(
    count(case when customer_pref_delivery_date = order_date then 1 end)/count(customer_id)*100.0
,2) as immediate_percentage
from Delivery
where (customer_id, order_date) IN (
    select customer_id,min(order_date)
    from Delivery
    group by customer_id
)