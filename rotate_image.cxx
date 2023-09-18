class Solution {
public:
    
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int j=0;j<n/2;++j) {
            int loops = n - 1 - 2*j;
            for(int i=0;i<loops;++i) {
                int temp = matrix[i+j][n-1-j];
                matrix[i+j][n-1-j] = matrix[j][i+j];
                matrix[j][i+j] = matrix[n-1-i-j][j];
                matrix[n-1-i-j][j] = matrix[n-1-j][n-1-i-j];
                matrix[n-1-j][n-1-i-j] = temp;
            }
        }
    }
    
    /*void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;++i)
            for(int j=0;j<i;++j)
                std::swap(matrix[i][j],matrix[j][i]);
        for(int i=0;i<n;++i)
            std::reverse(matrix[i].begin(),matrix[i].end());
    }*/    
    
};
 
/*
    n=3
    1(0,0)   0,n-1 -> n-1,n-1 -> n-1,0 -> 0,0
    2(0,1)   1,n-1 -> n-1,n-2 -> n-2,0 -> 0,1
    
    n=4
    5(0,0)   0,n-1 -> n-1,n-1 -> n-1,0 -> 0,0
    1(0,1)   1,n-1 -> n-1,n-2 -> n-2,0 -> 0,1
    9(0,2)   2,n-1 -> n-1,n-3 -> n-3,0 -> 0,2
    4(1,1)   1,n-2 -> n-2,n-2 -> n-2,1 -> 1,1       
*/
