#Forming the Puzzle Grid
def form(string_input):
    global grid
    print('The Sudoku Problem')
    for i in range(0, len(string_input), 9):
        row = string_input[i:i+9]
        temp = []
        for block in row:
            temp.append(int(block))
        grid.append(temp)    
    printGrid()

#Function to print the grid
def printGrid():
    global grid
    for row in grid:
        print(row)

#Function to check if a digit can be placed in the given block
def possible(row,col,digit):
    global grid
    for i in range(0,9):
        if grid[row][i] == digit:
            return False
    for i in range(0,9):
        if grid[i][col] == digit:
            return False
    square_row = (row//3)*3
    square_col = (col//3)*3
    for i in range(0,3):
        for j in range(0,3):
            if grid[square_row+i][square_col+j] == digit:
                return False    
    return True

def solution():
    global grid
    for row in range(9):
        for col in range(9):
            if grid[row][col] == 0:
                for digit in range(1,10):
                    if possible(row,col,digit):
                        grid[row][col] = digit
                        solution()
                        grid[row][col] = 0  #Backtrack step
                return
    print('\nThe Solution')
    printGrid()

string_input = "306508400520000000087000031003010080900863005050090600130000250000000074005206300"
grid = []
form(string_input)
solution()