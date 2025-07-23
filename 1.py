inp = int(input())
 
print(int(inp), end=" ")
while inp != 1:
 
    if inp % 2 == 0:
        inp /= 2
    else:
        inp = inp*3 + 1
 
    print(int(inp), end=" ")