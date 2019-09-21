# 环境
---
## linux
---
## windows

使用msys2

# 编译器
---
## 百度网盘下载
[百度网盘链接](https://pan.baidu.com/s/16hCiVEnsWqkEROxbpzD-9Q)

.tar.bz2 是64位linux使用的

.7z 是64位windows使用的

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
./script/[linux or windows]/dram_exec.sh
```
## 烧录到SPI-FLASH
```shell
cd rt-thread
./script/[linux or windows]/write_spiflash.sh
```
## 清楚SPI-FLASH的SPL
```shell
cd rt-thread
./script/[linux or windows]/erase_spiflash.sh
```
---

## 感谢xboot作者

## 感谢rt-thread作者
