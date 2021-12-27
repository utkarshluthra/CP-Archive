class Solution {
private:
    int row[9][256], col[9][256], cube[3][3][256];
    
private:
    bool check(vector<vector<char>>& grid, int r, int c, char val){
        if(row[r][val] == 1) {
            return false;
        }
        if(col[c][val] == 1) {
            return false;
        }
        if(cube[r/3][c/3][val] == 1) {
            return false;
        }
        return true;
    }
    
    bool solveSudoku(vector<vector<char>> &grid, int i, int j){
        if(i==9) return true;
        if(j==9) return solveSudoku(grid, i+1, 0);
        if(grid[i][j] != '.') return solveSudoku(grid, i, j+1);
    
        for(char d='1'; d<='9'; d++){
            if(check(grid, i, j, d)){
                grid[i][j] = d;
                row[i][d] = 1; col[j][d] = 1; cube[i/3][j/3][d] = 1;
                if(solveSudoku(grid, i, j+1)) return true;
                grid[i][j] = '.';
                row[i][d] = 0; col[j][d] = 0; cube[i/3][j/3][d] = 0;
            }
        }
    
        return false;
    }
public:
    void solveSudoku(vector<vector<char>>& grid) {
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        memset(cube,0,sizeof(col));
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (grid[r][c] != '.') {
                    int d = grid[r][c];
                    row[r][d] = 1; col[c][d] = 1; cube[r/3][c/3][d] = 1;
                }
            }
        }
        solveSudoku(grid, 0, 0);
    }

};