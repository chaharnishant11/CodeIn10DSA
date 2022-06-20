# What is Backtracking ?
* Backtracking is an algorithmic technique that traverses and finds every possible combination for a computational problem. 
* Backtracking is implemented using recursion, it helps in better optimization.
* It uses recursive calling to find the solution by building a solution step by step increasing values with time.
* If a solution is not suitable, that particular solution is eliminated and then we backtrack to try other possible combinations.

# The main algorithm is as follows :-

- Step 1: Return success if the current point is a viable solution.
- Step 2: Otherwise, if all paths have been exhausted (i.e., the current point is an endpoint), return failure because there is no feasible solution.
- Step 3: If the current point is not an endpoint, backtrack and explore other points, then repeat the preceding steps.
    
# Important questions to understand backtracking:

1. Combination Sum : We get a particular input like list of integers and a target integer, we have to return a list of all unique combinations under given constraints.

2. Rat in the Maze : A rat is at a particular position in a square matrix of order N * N & It has to reach a certain destination. We have to find all possible paths that the rat can take to reach from source to destination under given constraints like movement, direction of rat & blockages in paths.

3. N Queens problem : Arrange N queens on a chess board of N X N dimension such that no queen cancels any other queen's path.

4. Sudoku Solver : We have to write a code to solve sudoku by filling empty cells under the constraints.
