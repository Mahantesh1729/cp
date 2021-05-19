from math import sqrt

x, y = input().split()
x = int(x)
y = int(y)


nums = [i for i in range(0, x + 1, 1)]

for p in range(2, int(sqrt(x)) + 1, 1):
    if nums[p] != 0:
        i = p * p
        while i <= x:
            nums[i] = 0
            i += p

prime = []

for i in range(0, x + 1, 1):
    if nums[i] not in [0, 1]:
        prime.append(nums[i])


flag = 0

for i in range(0, len(prime), 1):
    if y % prime[i] == 0:
        flag = 1

if flag == 1:
    print("NO")
else:
    print("YES")