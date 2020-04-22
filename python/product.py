nums = [4, 5, 1, 8, 2]
lef = [1]
rig = [1]
for i in range(len(nums)-1):
    lef.append(lef[i]*nums[i])
    rig.append(rig[i]*nums[len(nums)-i-1])
print(lef, rig)
print([i*j for i, j in zip(lef, rig[::-1])])
