def moveZero(nums):
    x = 0
    i = 0
    while i < (len(nums) - x):
        if not nums[i] is 0:
            i += 1
            continue
        del nums[i]
        nums.append(0)
        x += 1

x = [int(i) for i in input().split(" ")]
moveZero(x)
print(x)