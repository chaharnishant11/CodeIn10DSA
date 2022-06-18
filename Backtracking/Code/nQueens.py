ans = []


def isSafe(board, i, j, n):
    for u in range(n):
        if board[u][j] == 1:
            return False

    for q, w in zip(range(i-1, -1, -1), range(j-1, -1, -1)):
        if board[q][w] == 1:
            return False
    for q, w in zip(range(i-1, -1, -1), range(j+1, n, 1)):
        if board[q][w] == 1:
            return False
    return True


def helper(board, n, r):
    if r == n:
        temp = []
        for k in range(n):
            for l in range(n):
                if board[k][l] == 1:
                    temp.append(l+1)
        ans.append(temp.copy())
        return

    for p in range(n):
        if (isSafe(board, r, p, n)):
            board[r][p] = 1
            helper(board, n, r+1)
            board[r][p] = 0


def nQueen(n):

    board = []
    for _ in range(n):
        my_list = []
        for j in range(n):
            my_list.append(0)
        board.append(my_list)
    # print(board)
    helper(board, n, 0)
    print(ans)


    # helper(n)
nQueen(3)
