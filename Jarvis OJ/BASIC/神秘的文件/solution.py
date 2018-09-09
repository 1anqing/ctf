#!/usr/bin/env python3
root = '/mnt/test/'
result = ''
for i in range(254):
    filename = root + str(i)
    with open(filename, 'r') as fp:
        result += fp.read().strip()
print(result)
