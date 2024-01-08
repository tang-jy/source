---
title: 什么递归
date: 2023-12-7
categories: 不是递归
---

### 个人博客备忘

主题是[butterfly](https://butterfly.js.org/posts/21cfbf15/)

更新 hexo g --d
### shell 的奇怪用法

#### 当前文件夹的孙子变成儿子
``````shell
#!/bin/bash

# 获取当前目录路径
current_dir=$(pwd)

# 遍历当前目录下的子文件夹
for dir in */; do
  # 判断是否为目录
  if [ -d "$dir" ]; then
    # 遍历子文件夹内部的子文件夹
    for subdir in "$dir"/*/; do
      # 判断是否为目录
      if [ -d "$subdir" ]; then
        # 移动子文件夹到当前目录
        mv "$subdir" "$current_dir"
        echo "Moved $subdir to current directory."
      fi
    done
  fi
done
``````

#### .zshrc 

```sh
function ac {
    cd /home/tang/works/cpps
    if [[ $# -gt 0 ]]; then
        # 如果存在参数，则执行 create.sh 脚本并传递参数
        ./create.sh "$1" "$2" 
        if [[ $? -gt 0 ]];then 
        	echo "失败"
        else 
        	echo "已经成功在contest $1 处建立了A-$2"
        fi
    fi
    command nvim 
}

```



### 关于sudo 使用时不会使用当前用户的环境的问题

````sh
sudo nvim  # 无法识别当前用户的环境
sudo  -E nvim # 可以使用当前的用户配置的环境
````

### /kill @

```sh
xkill #输入之后可以选定一个窗口进行强制删除
```

### abandon abandon abandon (记录一些看起来像是行业黑话的东西)

---------

#### kernel → $n.$ 内核

所有linux 内核版本都说的是一个东西

#### DAO → $n.$ Data Access Object 后端的数据库访问

>  DAO 是 Data Access Object（数据访问对象）的缩写在软件开发中，DAO 主要负责处理数据存取的相关任务，它提供了一种抽象接口，让业务逻辑与底层的数据存取细节相互独立。在一个典型的应用程序中，你可能有许多与数据库或其他数据存储相关的操作，比如插入、更新、删除和查询。使用DAO模式，你可以将这些操作封装到独立的 DAO 类中，然后在业务逻辑中通过调用 DAO 类的方法来进行数据访问，而不必关心底层数据库的具体实现。举个例子，如果你在项目中看到一个类名为 `UserDAO`，那么它很有可能是负责与用户数据交互的 DAO 类。这个类可能包含一些方法，比如 `getUserById(int userId)` 用于根据用户ID获取用户信息，或者 `saveUser(User user)` 用于保存用户信息到数据库。在Java中，特别是在与数据库交互的应用程序中（比如使用 JDBC 或者 ORM 框架），DAO模式是很常见的。DAO 类通常负责封装数据库连接、执行 SQL 语句、处理结果集等底层的数据存取逻辑。



