# Write your MySQL query statement below
select id 
from (
    select id,recordDate,temperature,
    lag(temperature)
    over(order by recordDate) as prevtemp  ,
    lag(recordDate) 
    over (order by recordDate) as prevdate
    from Weather
) t
where temperature > prevtemp
   and datediff(recordDate,prevdate) = 1;