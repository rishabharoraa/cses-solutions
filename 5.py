import math
 
n = int(input())
 
if n == 3 or n == 2:
    print("NO SOLUTION")
else:
    for i in range(math.floor(n / 2)):
        print(math.floor(i * 2 + 2), end=" ")
    for i in range(math.floor((n + 1) / 2)):
        print(i * 2 + 1, end = " ")
  