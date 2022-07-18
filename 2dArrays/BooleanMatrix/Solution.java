class Solution
{
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(int matrix[][])
    {
        // code here 
        int r = matrix.length;
        int c = matrix[0].length;
        int rTemp[] = new int[r];
        int cTemp[] = new int[c];
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(matrix[i][j] == 1){
                    rTemp[i] = 1;
                    cTemp[j] = 1;
                }
            }
        }
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(rTemp[i] == 1 || cTemp[j] == 1){
                    matrix[i][j] = 1;
                }
            }
        }
    }
}