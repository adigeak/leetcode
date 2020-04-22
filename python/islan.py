def dfs(grid, i, j, visit):
    neg = [(-1, 0), (0, -1), (0, 1), (1, 0)]
    visit[i][j] = 1
    # print(i, j)
    for x in neg:
        # print(x)
        if i+x[0] >= 0 and j+x[1] >= 0 and i+x[0] < len(grid) and j+x[1] < len(grid[0]) and not visit[i+x[0]][j+x[1]] and grid[i+x[0]][j+x[1]] == '1':
            dfs(grid, i+x[0], j+x[1], visit)


def numIslands(grid):
    nr = len(grid)
    nc = len(grid[0])
    count = 0
    visit = [[0]*nc]*nr
    # print(visit)
    for i in range(nr):
        for j in range(nc):
            if not visit[i][j] and grid[i][j] == '1':
                dfs(grid, i, j, visit)
                count += 1
            # print(visit)
    return count


'''
1 1 0 0 0
1 1 0 0 0
0 0 1 0 0
0 0 0 1 1
'''
# grid = [["1", "1", "0", "0", "0"], ["1", "1", "0", "0", "0"],
#         ["0", "0", "1", "0", "0"], ["0", "0", "0", "1", "1"]]
grid = [["0", "1", "0"], ["1", "0", "1"], ["0", "1", "0"]]
print(numIslands(grid))
