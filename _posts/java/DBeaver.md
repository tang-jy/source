---
title: big excel
date: 2023-12-7
categories: 找个电子场上班
---

### 使用DBeaver 建立数据库

连接到数据库服务器：选择 “Database” > “New Database Connection”，然后选择你使用的数据库类型，并填写连接信息，如主机名、端口、用户名和密码等。

创建数据库：一旦连接成功，你需要创建一个新的数据库。在连接的数据库视图中，右键点击数据库连接，选择 “Create” > “Database”

创建表：选择刚刚创建的数据库，右键点击它，选择 “Create” > “Table”。在弹出的窗口中，你可以定义表的各个字段、数据类型、约束等。按照你设计的表结构，逐个添加表字段。



###  SQL语句向已存在表设置主键和外键

#### 已存在表设置主键

```sql
alter table table-who-have-zhujian
add constraint PK_对应的列的名字
primary key (对应的列的名字)
```

####  已存在表设置外键



```sql
ALTER TABLE submission
ADD CONSTRAINT FK_UserID
FOREIGN KEY (userID) REFERENCES Usr(userID);
```

