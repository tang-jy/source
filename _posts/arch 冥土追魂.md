---
title: arch  冥土追魂
date: 2023-12-18
categories: wryyyyyyyyyyy rm -rf /*
---

### 网络连接抽风

#### 先查看网卡型号

`````shell
lspci | grep -i ethernet
`````

> 02:00.0 **Ethernet** controller: Realtek Semiconductor Co., Ltd. RTL8111/8168/8411 PCI Express Gigabit **Ethernet** Controller (rev 15)
>
> 根据提供的信息，您的网卡型号是Realtek Semiconductor Co.，Ltd. RTL8111/8168/8411 PCI  Express Gigabit Ethernet Controller（版本15）。这是一款PCI  Express接口的千兆以太网控制器。它用于连接计算机与局域网或互联网，实现高速的有线网络连接。

#### 下载

https://www.realtek.com/en/component/zoo/category/network-interface-controllers-10-100-1000m-gigabit-ethernet-pci-express-software

 >根据您提供的信息，您的网卡型号是Realtek RTL8111/8168/8411 PCI Express Gigabit Ethernet Controller。根据您的操作系统是Unix（Linux），您应该选择以下驱动程序之一：
 >
 >1. GBE Ethernet LINUX driver r8168 for kernel up to 5.19 版本：8.052.01 更新时间：2023/09/28 文件大小：124 KB
 >2. FE Ethernet LINUX driver r8101 for kernel up to 5.19 版本：1.038.02 更新时间：2022/11/15 文件大小：64 KB
 >
 >请注意，选择哪个驱动程序取决于您的内核版本和需要支持的功能。如果您的内核版本高于5.19，则应选择GBE驱动程序；如果您的内核版本低于5.19，则应选择FE驱动程序。


#### 安装

`````
tar -xjf r8125-9.012.03.tar.bz2                                                                                                        
cd src 
sudo make all
cd ..
chmod +x autorun.sh
sudo ./autorun.sh
reboot
`````

 
