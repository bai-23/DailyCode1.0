SELECT SUM(salary),AVG(salary),max(salary)
FROM employees;

SELECT sum(DISTINCT salary),sum(salary) FROM employees;

-- count（）
SELECT COUNT(first_name) 姓名 FROM employees;
SELECT COUNT(*) FROM employees;
SELECT COUNT(1) FROM employees; 
-- 效率
INNODB