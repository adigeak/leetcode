def square(x):
    return x*x

def map_fuc(fuc, arr):
    a = []
    for i in arr:
        a.append(fuc(i))
    return a

x = [ i for i in range(1,6)]

squares = map_fuc(square,x)

print(squares)