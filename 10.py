n = int(input())

x = 5
npf = 0 # number of powers of five
while(n >= x):
    npf += int(n / x)
    x *= 5

print(npf)