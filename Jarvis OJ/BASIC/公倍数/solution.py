#!/usr/bin/env python3
from decimal import Decimal
a = 1000000000 - 1
count3 = Decimal(int(a / 3))
count5 = Decimal(int(a / 5))
count15 = Decimal(int(a / 15))
sum3 = Decimal(3 + a - a % 3) * count3 / 2
sum5 = Decimal(5 + a - a % 5) * count5 / 2
sum15 = Decimal(15 + a - a % 15) * count15 / 2
result = int(sum3 + sum5 - sum15)
print("PCTF{" + str(result) + "}")
