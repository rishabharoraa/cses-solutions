t = int(input())

for _ in range(t):
    a, b = list(map(int, input().split()))
    if ((2*a - b) % 3 == 0 or (2*b - a) % 3 == 0) and (not a > 2*b and not b > 2*a):
        print("YES")
    else:
        print("NO")