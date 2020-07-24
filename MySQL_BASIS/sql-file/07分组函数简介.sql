SELECT SUM(salary),AVG(salary),max(salary)
FROM employees;

SELECT sum(DISTINCT salary),sum(salary) FROM employees;
