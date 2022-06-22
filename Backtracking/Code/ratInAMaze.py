my_array = []


def isSafe(input, visited, S_x, S_y, n):
    if S_x >= 0 and S_y >= 0 and S_x < n and S_y < n and input[S_x][S_y] == 1 and visited[S_x][S_y] == 0:
        return True
    return False


def helper(input, visited, n, S_x, S_y, temp):
    if S_x == n-1 and S_y == n-1:
        print(temp)
        my_array.append(temp)
        return
    visited[S_x][S_y] = 1
    if(isSafe(input, visited, S_x+1, S_y, n)):
        helper(input, visited, n, S_x+1, S_y, temp + "D")
    if(isSafe(input, visited, S_x, S_y-1, n)):
        helper(input, visited, n, S_x, S_y-1, temp + "L")
    if(isSafe(input, visited, S_x, S_y+1, n)):
        helper(input, visited, n, S_x, S_y+1, temp + "R")
    if(isSafe(input, visited, S_x-1, S_y, n)):
        helper(input, visited, n, S_x-1, S_y, temp + "U")

    visited[S_x][S_y] = 0
    return


def rat_in_a_maze(input, n):
    visited = []
    for _ in range(n):
        my_list = []
        for j in range(n):
            my_list.append(0)
        visited.append(my_list)
    print(visited)
    if input[0][0] == 0:
        return
    else:
        helper(input, visited, n, 0, 0, "")


input = [[1, 0, 0, 0], [1, 1, 0, 1], [1, 1, 0, 0], [0, 1, 1, 1]]

rat_in_a_maze(input, len(input))
print(my_array)
