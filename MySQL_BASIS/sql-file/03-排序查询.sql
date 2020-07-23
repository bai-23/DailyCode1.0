use myemployees;

SELECT *, salary*12*(1+IFNULL(commission_pct,0)) 年薪
FROM employees
ORDER BY 年薪;