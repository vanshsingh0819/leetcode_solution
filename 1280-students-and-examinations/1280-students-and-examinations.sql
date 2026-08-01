select Students.student_id,students.student_name,Subjects.subject_name,
count(Examinations.student_id ) as attended_exams
from Students
cross join Subjects
left join Examinations
on Students.student_id = Examinations.student_id
and Examinations.subject_name = Subjects.subject_name
group by student_id,student_name,subject_name
order by student_id,subject_name;