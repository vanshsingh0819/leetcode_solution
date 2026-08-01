# Write your MySQL query statement below
select id as Id
from(
    select id,recordDate,temperature,
    lag(temperature)
    over(order by recordDate) as temp,
    lag(recordDate)
    over(order by recordDate) as prevDate
    from Weather
) as t
where temperature > temp
and datediff(recordDate,prevDate) = 1;