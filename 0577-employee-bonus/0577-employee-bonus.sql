SELECT Employee.name, Bonus.bonus
from Employee
left JOIN Bonus
on Employee.empId = Bonus.empId
where Bonus < 1000 or
     Bonus is NULL;