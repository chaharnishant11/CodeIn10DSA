### Sudoku Solver

**Background Knowledge :**

- Sudoku is made up of three 3x3 matrix which are placed such that they create a bigger 9x9 matrix.

- Sudoku consists of numbers 1 to 9.

- There is no same/repeated number in a row

- There is no same/repeated number in a column

- There is no same/repeated number in a 3x3 matrix

**Approach :** 

We will try 1-9 possible values for each position and move forward with each correct value, in case we are able to get an answer we move forward, otherwise we backtrack. And to ensure backtracking we create 3 checks that there is no same number in a row, no same number in a column and no same number in a 3x3 matrix

One important thing is that to find the starting index of any box we can make use of %3

This execution will end/return back when row=9 or when we reach the end of the 9x9 matrix