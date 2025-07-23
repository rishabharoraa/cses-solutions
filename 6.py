
def solve(y, x):
    mx = max(x, y)
    diagonal_number = (mx * mx) - mx + 1
    if x == mx:
        if x % 2 == 0:
            return diagonal_number + (mx - y)
        else:
            return diagonal_number - (mx - y)
    else:
        if y % 2 == 0:
            return diagonal_number - (mx - x)
        else:
            return diagonal_number + (mx - x)


t = int(input())

for _ in range(t):
    y, x = list(map(int, input().split()))
    print(solve(x, y))