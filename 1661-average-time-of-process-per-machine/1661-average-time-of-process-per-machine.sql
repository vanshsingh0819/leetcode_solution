select start_activity.machine_id,
round(avg(end_activity.timestamp-start_activity.timestamp),3) as processing_time
from Activity as start_activity
join Activity as end_activity
on start_activity.machine_id = end_activity.machine_id
and start_activity. process_id= end_activity. process_id
where start_activity.activity_type = 'start' and end_activity.activity_type = 'end'
group by machine_id;