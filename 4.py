n = int(input())
nums = list(map(int, input().split()))
 
ans = 0
 
for i in range(len(nums) - 1):
    if(nums[i+1] < nums[i]):
        ans += (nums[i] - nums[i+1])
        nums[i+1] = nums[i]
 
print(ans)