# Python program to solve n queens problem
# We can get at max 2 solutions from this code
n = int(input("Enter the value of n : "))
board = []

# Creating board
def getBoard():
    for i in range(n):
        nthList = []
        for j in range(n):
            nthList.append(0)
        board.append(nthList)

# Printing Output
def printBoard():
    a = 0
    for i in range(n):
        for j in range(n):
            if board[i][j] == 1:
                a = 1
            print(board[i][j], end = " ")
        print("") 
    if a==1:
        print("")    
        print("And 2nd solution")
        print("")
        for i in range(n):
            for j in range(n):
                print(board[j][i], end = " ")
            print("")
    else:
        print("")
        print("No solution exist")

# Cheking safety of queen at a particular position
def isSafe(row, col):
    for i in range(n):
        if board[row][i] == 1:
            return False
    for j in range(n):
        if board[j][col] == 1:
            return False
    
    i = row-1
    j = col-1
    while(i>=0 and j>=0):
        if board[i][j] == 1:
            return False
        i = i-1
        j = j-1

    i = row-1
    j = col+1
    while(i>=0 and j<n):
        if board[i][j] == 1:
            return False
        i = i-1
        j = j+1

    i = row+1
    j = col-1
    while(i<n and j>=0):
        if board[i][j] == 1:
            return False
        i = i+1
        j = j-1

    i = row+1
    j = col+1
    while(i<n and j<n):
        if board[i][j] == 1:
            return False
        i = i+1
        j = j+1
    return True

# Base Call
def Put(n, count):
    if count == n:
        return True
    for i in range(n):
        for j in range(n):
            if isSafe(i, j):
                board[i][j] = 1
                count = count+1
                if Put(n, count) == True:
                    return True
                board[i][j] = 0
                count = count-1
    return False

getBoard()
Put(n, 0)
printBoard()
