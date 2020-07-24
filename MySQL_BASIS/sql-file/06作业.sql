SELECT CONCAT(last_name,' earns ',salary, ' monthly but wants ', salary*3) as "dream"
from employees
WHERE salary=24000;

SELECT last_name, job_id as job,
case job_id
WHEN 'AD_PRES' THEN 'A'
WHEN 'ST_MAN' THEN 'B'
WHEN 'IT_PROG' THEN 'C'
WHEN 'SA_PRE' THEN 'D'
WHEN 'ST_CLERK' THEN 'E'
end as grade
from employees
WHERE job_id = 'AD_PRES';