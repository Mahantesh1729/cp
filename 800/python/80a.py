from math import sqrt

x, y = input().split()
x = int(x)
y = int(y)


nums = [i for i in range(0, y + 1, 1)]

for p in range(2, int(sqrt(y)) + 1, 1):
    if nums[p] != 0:
        i = p * p
        while i <= x:
            nums[i] = 0
            i += p

prime = []

for i in range(0, y + 1, 1):
    if nums[i] not in [0, 1]:
        prime.append(nums[i])

n = len(prime) - 2

if prime[n] == x:
    print("YES")
else:
    print("NO")
