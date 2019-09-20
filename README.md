# 编译器
---
## 百度网盘下载
[百度网盘链接](https://pan.baidu.com/s/1p6ZYa3AyKuIl3OleZJiONQ)
密码: cj53
解压后放在tools目录下面

---
# sunxi烧录工具
---
```shell
cd tools/sunxi-tools
make
```
---
# Rt-Thread所用的BOOT代码
---
## 编译
```shell
cd f1c100s_spl
scons
```
## 清理
```shell
cd f1c100s_spl
scons -c
```
---
# Rt-Thread
---
## 编译
```shell
cd rt-thread
scons
```
## 清理
```shell
cd rt-thread
scons -c
```
## 测试
```shell
cd rt-thread
./script/dram_exec.sh
```
## 烧录到SPI-FLASH
```shell
cd rt-thread
./script/write_spiflash.sh
```
## 清楚SPI-FLASH的SPL
```shell
cd rt-thread
./script/erase_spiflash.sh
```
---
##感谢xboot作者
##感谢rt-thread作者
