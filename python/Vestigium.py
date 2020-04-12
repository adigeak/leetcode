import numpy as np

def trace(mat):
    n = mat.shape[0]
    trace = 0
    for i in range(n):
        trace += mat[i][i]
    return trace

def compute(mat):
    mat = np.asarray(mat)
    c = 0
    r = 0
    for i in mat:
        if not (len(i) == len(set(i))):
            r += 1
    trans = mat.transpose()
    for i in trans:
        if not(len(i) == len(set(i))):
            c += 1
    t = trace(mat)
    return (t,r,c)

t = int(input())
# val = []
for i in range(1,t+1):
    num = int(input())
    mat = [[int(i) for i in input().split(' ')] for i in range(0,num)]
    # val.append(compute(mat))
    v = compute(mat)
    print("Case #{}: {} {} {}".format(i, v[0], v[1], v[2]))

#
# for i,v in enumerate(val):
#     print("Case #{}: {} {} {}".format(i+1,v[0],v[1],v[2]))
