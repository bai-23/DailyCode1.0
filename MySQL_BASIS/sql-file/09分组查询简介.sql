-- 引入：查询每个工种的最高工资

SELECT MAX(salary),job_id
FROM employees
GROUP BY job_id;

-- 查询每个位置上的部门个数
SELECT COUNT(*), location_id
FROM departments
GROUP BY location_id;

-- 添加添加：查询邮箱中包含a字符的，每个部门的平均工资
SELECT AVG(salary), department_id
FROM employees
WHERE email LIKE '%a%'
GROUP BY department_id;

-- 查询有奖金的每个领导手下员工的最高工资
SELECT MAX(salary) 最高工资, manager_id 领导编号
FROM employees
WHERE commission_pct IS NOT NULL
GROUP BY manager_id;

-- 复杂条件
-- 查询哪个部门的员工个数大于2
-- ① 查询每个部门的员工个数
-- ② 根据①筛选查询哪个部门员工个数>2
SELECT COUNT(*), department_id
FROM employees
GROUP BY department_id
HAVING COUNT(*)>2;

-- 查询每个工种有奖金的员工的最高工资>12000的工种编号和最高工资
SELECT MAX(salary), job_id
FROM employees
WHERE commission_pct is not null
GROUP BY job_id
HAVING MAX(salary)>12000;

-- 查询领导编号大于102的每个领导手下的最低工资>5000的领导编号是哪个，以及其最低工资
SELECT MIN(salary),manager_id
FROM employees
WHERE manager_id>102
GROUP BY manager_id
HAVING MIN(salary)>5000;

-- 总结
