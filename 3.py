seq = input()
 
ans = 1
mx = 1
for i in range(len(seq) - 1):
    if seq[i + 1] == seq[i]:
        ans += 1
    else:
        mx = max(mx, ans)
        ans = 1
 
mx = max(mx, ans)
    
