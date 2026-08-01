# Write your MySQL query statement below
select Signups.user_id,
      ifnull(round((sum(case when Confirmations.action = 'confirmed' then 1 
      WHEN Confirmations.action = 'timeout' THEN 0
      else 0 end)/ count(action)),2),0.00) as confirmation_rate
from Signups
left join Confirmations
on  Signups.user_id = Confirmations.user_id
group by Signups.user_id
