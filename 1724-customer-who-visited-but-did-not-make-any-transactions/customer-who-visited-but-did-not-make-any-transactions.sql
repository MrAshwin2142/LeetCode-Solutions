# Write your MySQL query statement below
SELECT customer_id, count(customer_id) as count_no_trans
FROM Visits v Left Join Transactions t on v.visit_id = t.visit_id
where t.visit_id is null
group by customer_id