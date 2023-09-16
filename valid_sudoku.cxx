class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_set<char> row[9],col[9],sub[3][3];        
        for(int i=0;i<9;++i) {
            for(int j=0;j<9;++j) {
                char c0=board[i][j];
                if(c0!='.') {
                    if(row[i].count(c0) || col[j].count(c0) || sub[i/3][j/3].count(c0)) {
                        return false;
                    }
                    row[i].insert(c0);
                    col[j].insert(c0);
                    sub[i/3][j/3].insert(c0);  
                }
            }
        }
    return true;    
    }
};

//0,0 0,1 0,2   0,3 0,4 0,5
//1,0 1,1 1,2   1,3 1,4 1,5
//2,0 2,1 2,2   2,3 2,4 2,5
// 0,0          0,1

