n = int(input())
 
nums = list(map(int, input().split()))
 
xor = 0
 
for i in range(len(nums)):
    xor ^= nums[i]
    xor ^= i + 1
 
xor ^= len(nums) + 1
 
