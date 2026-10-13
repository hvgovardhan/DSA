class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i=0; i<9; i++){
            unordered_map<char,int> mp;
            for(int j=0; j<9; j++){
                
                if(board[i][j] == '.') continue;
                if(mp.find(board[i][j]) != mp.end()){
                    return false;
                }
                mp[board[i][j]]++;
            }
        }

        for(int i=0; i<9; i++){
            unordered_map<char,int> mp1;
            for(int j=0; j<9; j++){
                if(board[j][i] == '.') continue;
                if(mp1.find(board[j][i]) != mp1.end()){
                    return false;
                }
                mp1[board[j][i]]++;
            }
        }
        
        for (int i=0; i<9; i=i+3){
            for (int j=0; j<9;j=j+3){
                unordered_map<char,int> mp2;
                for (int r=i; r<i+3; r++){
                    for (int c=j; c<j+3; c++){
                        if(board[r][c] == '.') continue;
                        if(mp2.find(board[r][c]) != mp2.end()){
                            return false;
                        }
                        mp2[board[r][c]]++;
                    }
                }
            }
        }
        return true;
    }
};