n = int(input())
poly = {'Tetrahedron':4,'Cube':6,'Octahedron':8,'Dodecahedron':12,'Icosahedron':20}
Sides = 0
while n:
    s = input()
    Sides = Sides + poly[s]
    n -= 1
print(Sides)