# Write your MySQL query statement below
SELECT e1.employee_id
from Employees e1 left join employees e2 on e2.employee_id = e1.manager_id
where e1.salary < 30000 && e2.employee_id is null && e1.manager_id is not null
    order by e1.employee_id;
