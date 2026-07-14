# Write your MySQL query statement below
select * from Patients 
where REGEXP_LIKE(conditions,'(^| )DIAB1','c');