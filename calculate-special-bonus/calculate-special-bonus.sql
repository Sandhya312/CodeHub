# Write your MySQL query statement below
SELECT employee_id, salary*(employee_id%2!=0)*(name NOT LIKE 'M%')  as bonus FROM Employees
ORDER BY employee_id ;