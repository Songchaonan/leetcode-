# 题目：
编写一个 SQL 查询，满足条件：无论 person 是否有地址信息，都需要基于上述两表提供 person 的以下信息：FirstName, LastName, City, State
# 程序：
~~~
SELECT Person.FirstName, Person.LastName, Address.City, Address.State FROM Person LEFT JOIN Address ON Person.PersonId = Address.PersonId;
~~~
# 心得：
用Left Join来做，根据PersonId这项来把两个表联合起来。
