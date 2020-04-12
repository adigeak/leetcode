import re
def bracket(sub,str):
    if int(sub) == 0:
        return str
    if int(sub) == 1:
        return '({})'.format(str)
    if int(sub) == 2:
        return '(({}))'.format(str)
    if int(sub) == 3:
        return '((({})))'.format(str)
    if int(sub) == 4:
        return '(((({}))))'.format(str)
    if int(sub) == 5:
        return '((((({})))))'.format(str)
    if int(sub) == 6:
        return '(((((({}))))))'.format(str)
    if int(sub) == 7:
        return '((((((({})))))))'.format(str)
    if int(sub) == 8:
        return '(((((((({}))))))))'.format(str)
    if int(sub) == 9:
        return '((((((((({})))))))))'.format(str)
def curate(s):
    return re.sub(r"\)\(",'',s)

def compute(S):
    s = ''
    i = 0
    while i < len(S):
        l = i
        r = i
        for j in range(i+1,len(S)):
            if S[i] == S[j]:
                r = j
            else:
                break

        if l == r:
            s += bracket(S[l:r+1],S[l:r+1])
        else:
            s += bracket(S[l],S[l:r+1])
        i = r+1
    return curate(s)
    # return s

T = int(input())
for i in range(1,T+1):
    S = input().strip()
    s = compute(S)
    print("Case #{}: {}".format(i,s.strip()))