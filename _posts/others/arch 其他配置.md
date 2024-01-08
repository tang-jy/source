---
title: arch 使用
date: 2023-12-10
categories: 防止老年痴呆从我做起
---
### 蓝牙
1.安装必要软件包
```shell
pacman -S bluez bluez-utils pulseaudio-bluetooth pavucontrol pulseaudio-alsa
```

2.启动蓝牙服务
```shell
systemctl enable bluetooth
systemctl start bluetooth

```

3.启动pulseaudio服务

```shell
pulseaudio -k                   # 确保没有pulseaudio启动
pulseaudio --start              # 启动pulseaudio服务
```

如果此时提示配对成功但链接失败一般是写入权限问题，只需要在设置->蓝牙中移除设备在重新写入即可

### git 

````
git init 
git add .
git commit -m "description"
git push
````

