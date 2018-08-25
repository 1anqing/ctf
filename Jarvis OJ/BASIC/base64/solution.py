#!/usr/bin/env python3
import base64
secretStr = "GUYDIMZVGQ2DMN3CGRQTONJXGM3TINLGG42DGMZXGM3TINLGGY4DGNBXGYZTGNLGGY3DGNBWMU3WI==="
result = base64.b32decode(secretStr)
flagList = [int(result[2*i:2*i+2], 16) for i in range(int(len(result)/2))]
flag = ''.join([chr(i) for i in flagList])
print(flag)
