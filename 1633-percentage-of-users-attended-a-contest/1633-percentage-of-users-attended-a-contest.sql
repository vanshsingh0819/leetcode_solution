# Write your MySQL query statement below
select Register.contest_id,
       round( count(Register.contest_id)*100/ t.t_users
       ,2) as percentage
from (
    select count(user_id) as t_users
    from users
) t
join Register
group by contest_id
order by percentage DESC,contest_id;