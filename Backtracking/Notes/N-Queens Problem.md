### N-Queens Problem

**Problem :** Place N Queens in a NxN matrix such that no queen can attack one another

**Background Knowledge :** 
- A Queen in a chess board is a piece that can move in 8 possible directions : front, back, left, right, front-left diagonal, front-right diagonal, back-left diagonal, back-right diagonal.
- A queen in chess can attack the other queen if they are along the same line where their movement is legally allowed according to the rule discussed above

**Approach :** We have to place one queen in each row and each column since the queens in same row and/or column will always attack one another. So we start by placing the 1st queen in the first column of the first row, then we move to the next row and keep trying to place a queen in feasible locations one by one, When we get a feasible location we try placing the next queen in feasible locations. If we are able to find feasible location, we continue or else we backtrack to the previous row, if we are unable to find a feasible location. Then we again try to rearrange the previous row. We continue like this : moving forward on achieving a feasible location and backtracking to the previous rows if we didn't find a feasible location. This process continues until we get a possible solution.
