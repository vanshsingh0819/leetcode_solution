# Write your MySQL query statement below
select name 
from customer
where referee_id  is null  -- sql by deafault null value ko return nhi krrta hai                      isliye hmme yeh condition likhni pdhi
    or referee_id  != 2;
    -- IFNULL(referee_id,0) <> 2;  where <> ans != are same