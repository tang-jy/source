---
title: 300个编译器
date: 2023-12-7
categories: 找个电子场上班
---

### linux 环境变量配置

配置.zshrc和/etc/profileThe xsi:schemaLocation attribute can be used in an XML document to reference an XML Schema document that has a target namespace. `xml
<ns:root
xmlns:ns="http://example.com/ns"
xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
xsi:schemaLocation="http://example.com/ns example.xsd"> <!-- ... -->

`

````shell
echo $JAVA_HOME  # 检查是否配置过
````

`````sh
export JAVA_HOME=/usr/local/jdk-17.0.9
export PATH=.:$JAVA_HOME/bin:$PATH
export CLASSPATH=#$JAVA_HOME/lib/tools.jar:$JAVA_HOME/lib/dt.jar:$JAVA_HOME/lib
#他奶奶的class path 没必要设置
`````

同时,之前如果手贱设置过/etc/envirement文件的需要把那一段删去或者替换成正确的

### vscode 相关配置

#### code 导入相关包


`````js
{
    "java.project.referencedLibraries": [
        "/home/tang/works/javas/lib/mysql-connector-java-8.0.18.jar"
    ]
}
`````

### eclipse 

需要的下的是eclipse-tee什么的

如果需要JDK or JRE 否则打不开,这个时候我们就要哄骗它,让它认为我们配置了JDK & JRE 

````shell
cd /usr/lib/eclipse && mkdir jre
cd jre 
sudo ln -s /usr/local/jdk-17.0.9/bin bin
````

#### 设置中文

help → install new 什么什么 → add https://download.eclipse.org/technology/babel/update-site/latest/ 

之后取消勾选最下面能个选项,一路next

### 连接流程

- 创建工程导入sql-connecter包
- 注册驱动 like this Class.forName("com.mysql.jdbc.Driver");
- 获取连接 like this Connection conn = DriverManager.getConnection(url,name,passwd)
- 定义SQL语句 like this String sqql= "A SQL WORD";
- 获取执行对象 like this stmt =  conn.createStatement();
- 执行SQL语句 like this stmt.executeUpdate(sqql);





