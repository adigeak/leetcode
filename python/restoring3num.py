num = list(map(lambda x: int(x),input().split()))
num.sort()
m = num[-1]
for n in num[:-1]:
    print(str(m- n)+" ",end='')
# print(num)