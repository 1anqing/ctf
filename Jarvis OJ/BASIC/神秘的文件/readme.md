# 解题思路
拿到文件，先用file命令查看下文件类型
```
$ file haha.f38a74f55b4e193561d1b707211cf7eb
haha.f38a74f55b4e193561d1b707211cf7eb: Linux rev 1.0 ext2 filesystem data, UUID=8eecd08f-bae8-41ff-8497-8338f58ad15b
```
查阅相关资料，发现是一个磁盘文件，需要挂载
```
mkdir -p /mnt/test
mount haha.f38a74f55b4e193561d1b707211cf7eb /mnt/test
cd /mnt/test
```
在test目录下，发现很多文件，且每个文件都包含少量信息，于是考虑利用python脚本按照顺序读取所有文件内容，具体程序见`solution.py`。
根据读取的内容，即可得到答案。
# FLAG
```
PCTF{P13c3_7oghter_i7}
```
