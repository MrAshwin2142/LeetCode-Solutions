# Write your MySQL query statement below
Select id 
from (
    select *,
        LAG(temperature,1) over(order by recordDate Asc) as temp, 
        Lag (recordDate) over(order by recordDate) as prev_date 
    from Weather 
    ) new_t 
where new_t.temperature > new_t.temp and DATEDIFF(new_t.recordDate, new_t.prev_date) = 1;;