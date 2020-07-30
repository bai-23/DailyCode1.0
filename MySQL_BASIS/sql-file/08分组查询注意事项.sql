-- 和分组函数一同查询的字段有限制

SELECT AVG(salary),employee_id FROM employees;

-- 例：查询员工表中的最大入职时间和最小入职时间的相差天数

SELECT DATEDIFF(MAX(hiredate),MIN(hiredate) ) difference FROM employees;

-- 例：查询部门编号为90的个数
SELECT COUNT(*)
FROM employees
WHERE department_id=90;