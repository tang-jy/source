#!/bin/bash
# 下面三行是编译命令
g++ Data.cpp -o Data
g++ True.cpp -o True
g++ False.cpp -o False
while true; do
	./Data > input.in #将生成的数据保存进input.in文件里
	# 接下来两行就是将input.in文件输入进程序里面,之后再将程序输出的内容保存进两个文件std.out与output.out里
	./True < input.in > True.out 
	./False < input.in > False.out
	if delta True.out False.out; then # 对比两个文件
	## diff  原来的
		printf "AC\n"
	else 
		printf "Wa\n"
		exit 0 # 如果两个程序输出内容不同就退出
		break
	fi
done

