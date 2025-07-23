n = int(input())

if ((n * (n + 1)) / 2) % 2 == 1:
    print("NO")
else:
    print("YES")
    used = []
    sum = (n * (n + 1)) / 4
    for i in range(n, 0, -1):
        if sum - i >= 0:
            used.append(i)  
            if sum - i == 0:
                break
            sum -= i
        else:
            continue
    print(len(used))
    for u in used:
        print(u, end=" ")
    print("")
    print(n - len(used))
    used_set = set(used)  # TLE workaround
    for i in range(1, n + 1):
        if(i not in used_set):
            print(i, end=" ")
    print("")

