### Rat in a Maze Problem

**Question :** There is a rat at one corner of a matrix (2D-Array), and it needs to go to the opposite corner. But it can only go via the spots that have 1 stored in them, the spots that have 0 are like walls where the rat can not move. We need to find all the possible paths that he can take.

**Note :** 
- The mouse can move in 4 directions up, down, right and left but not diagonal
- In questions where we have to find all possibilities we use recursion or backtracking
- If source cell(0,0) is filled with 0, then the rat can not enter the maze hence no possibilities
- Rat can visit one cell only once, o you can not enter a cell twice (To ensure this condition we will make another visited matrix)

**Requirements :**
- Original matrix
- Visited matrix
- Checking the current position
- Follow Lexicographic order (Dictionary order DLRU "Down-Left-Right-Up")
- variable x & y

**Approach :** We start from source (0,0) And check if we can move down if so, we go down increase x by 1 and mark 1 in corresponding location in visited matrix and put D in path, and we do this again, in case we get stuck we try other 3 possibilities in lexicographical order and correspondingly change values of x and y and add the movement to path and mark 1 in visited spot and we do this for all spots on by one as we move. Finally we reach the matrix-end and get one possible desired path or else we reach a dead-end. And then we backtrack and again start to try out other paths in lexicographic way from the start and so on.

This is also known as DFS (Depth First Search in Graphs)

**Conditions that we are checking :**
1. x=<n
2. x>0
3. y=<n
4. y>0
5. visited[x][y]=0
6. m[x][y]=0

If all these conditions are true then we are safe and we continue