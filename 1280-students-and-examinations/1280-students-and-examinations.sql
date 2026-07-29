# Write your MySQL query statement below
select Students.student_id, Students.student_name,Subjects.subject_name,
count(Examinations.subject_name) as attended_exams
from Students
cross Join Subjects
left join Examinations
on Students.student_id = Examinations.student_id
and subjects.subject_name = Examinations.subject_name
group by student_id,student_name,subject_name
order by student_id,student_name;
