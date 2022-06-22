def check(grid, row, col, i):
    for _ in range(9):
        if grid[row][_] == i:
            return False

    for _ in range(9):
        if grid[_][col] == i:
            return False
    ini_row = row - row % 3
    ini_col = col - col % 3
    for _ in range(3):
        for k in range(3):
            if grid[ini_row+_][ini_col+k] == i:
                return False
    return True


def helper(grid, row, col):
    if row == 9:
        return True
    if col == 9:
        return helper(grid, row+1, 0)
    if grid[row][col] != 0:
        return helper(grid, row, col+1)

    for _ in range(1, 10):
        if check(grid, row, col, _):
            grid[row][col] = _
            if helper(grid, row, col+1):
                return True
        grid[row][col] = 0
    return False


def SolveSudoku(grid):
    return helper(grid, 0, 0)


def printGrid(grid):
    SolveSudoku(grid)
    for i in range(9):
        for j in range(9):
            print(grid[i][j], end=" ")


grid = [[3, 0, 6, 5, 0, 8, 4, 0, 0],
        [5, 2, 0, 0, 0, 0, 0, 0, 0],
        [0, 8, 7, 0, 0, 0, 0, 3, 1],
        [0, 0, 3, 0, 1, 0, 0, 8, 0],
        [9, 0, 0, 8, 6, 3, 0, 0, 5],
        [0, 5, 0, 0, 9, 0, 6, 0, 0],
        [1, 3, 0, 0, 0, 0, 2, 5, 0],
        [0, 0, 0, 0, 0, 0, 0, 7, 4],
        [0, 0, 5, 2, 0, 6, 3, 0, 0]]
printGrid(grid)
