USE myemployees;

SELECT YEAR(NOW()) 年;

SELECT YEAR(hiredate) 年 FROM employees;

-- 字符转日期
SELECT STR_TO_DATE('1114/3/2','%Y/%c/%d') AS out_put;
-- 业务场景
SELECT * FROM employees WHERE hiredate = STR_TO_DATE('4-3 1992','%c-%d %Y');

-- 日期转字符
SELECT DATE_FORMAT(NOW(),'%y年%m%月%d日') as 输出;
-- 查询有奖金的员工名与入职日期（xx月/xx日 xx年）
SELECT last_name 姓,DATE_FORMAT(hiredate,'%m月/%d日 %y年') 入职日期
FROM employees
WHERE commission_pct is NOT NULL;