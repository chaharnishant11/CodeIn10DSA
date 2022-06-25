def valid_path(maze, i, j, m, n):
    if i == m or j == n:
        return False
    if maze[i][j] == 1:
        return False
    return True

def rat_maze(maze, i, j, m, n, arr):
    if arr[-1][-1] == 1:
        return True
    if valid_path(maze, i, j, m, n):
        arr[i][j] = 1
        if rat_maze(maze, i + 1, j, m, n, arr):
            return True
        if rat_maze(maze, i, j + 1, m, n, arr):
            return True
        arr[i][j] = 0
    return False
rows = int(input("Enter number of rows in maze:" ))
columns = int(input("Enter number of columns in maze:" ))
maze = []
for i in range(0,rows):
    print('Please enter elements of row',i+1)
    lst = []
    for j in range(0,columns):
        Element =  int(input("Enter element in maze (0/1):" ))
        lst.append(Element)
    maze.append(lst)

arr = [[0 for i in range(len(maze[0]))] for j in range(len(maze))]
rat_maze(maze, 0, 0, len(maze), len(maze[0]), arr)
a = " "
for i in arr:
    for j in i:
        if j==0:
            a = "Nothing"
        elif j==1:
            a = "Filled"
            break
if a == "Nothing":
    print("No solution")
else:
    for i in arr:
        print(i)