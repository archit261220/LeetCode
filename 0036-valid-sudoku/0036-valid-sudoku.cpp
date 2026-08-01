class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
          set<char>s1;
          set<char>s2;
            for(int j=0; j<9; j++){ 
             auto it1 = s1.find(board[i][j]);
             auto it2 = s2.find(board[j][i]);
             if(board[i][j]!='.'){
              if(it1!=s1.end())return false;s1.insert(board[i][j]);}
                if(board[j][i]!='.'){
              if(it2!=s2.end())return false;s2.insert(board[j][i]);}
        }
        }
       for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j += 3){
                
                set<char> s3;

                for(int k = 0; k < 9; k++){
                    int row = i + k / 3;
                    int col = j + k % 3;

                    if(board[row][col] != '.'){
                        if(s3.find(board[row][col]) != s3.end()) return false;
                        s3.insert(board[row][col]);
                    }
                }
            }
        }





        return true; 
    }
};