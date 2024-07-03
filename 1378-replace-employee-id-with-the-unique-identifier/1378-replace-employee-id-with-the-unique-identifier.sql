# Write your MySQL query statement below
select EmployeeUNI.unique_id,Employees.name
from Employees
 left join  EmployeeUNI
ON Employees.id=EmployeeUNI.id ;


# SELECT e.name, u.unique_id
# FROM Employees e 
# LEFT JOIN EmployeeUNI u 
# ON e.id = u.id