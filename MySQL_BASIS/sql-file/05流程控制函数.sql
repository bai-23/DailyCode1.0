USE myemployees;

-- if函数
SELECT IF(10<5,'大','小');
SELECT last_name,commission_pct,IF(commission_pct is null,'没奖金','哟 有钱') 备注
FROM employees;

-- cass函数
-- 使用1
-- 查询员工的工资，要求：部门号=30，显示的工资为1.1倍....
SELECT salary old,department_id,
CASE department_id
	WHEN 30 THEN salary*1.1
	WHEN 40 THEN salary*1.2
	WHEN 50 THEN salary*1.3
	ELSE salary
END as new
FROM employees;

-- 使用2
-- 查询员工工资情况，如果工资>20000，显示A级
SELECT salary,
CASE 
when salary>20000 then 'A'
when salary>15000 then 'B'
when salary>10000 then 'C'
ELSE 'D'
END AS 工资级别
FROM employees;
