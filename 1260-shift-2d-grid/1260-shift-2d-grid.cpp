class Solution {
public:
    
       vector<vector<int>>transverse(vector<vector<int>>& grid, int k){
    
        if(k==0)return grid;
         int m = grid.size();
         int n =grid[0].size();
          vector<vector<int>>ans(m,vector<int>(n));
            for(int i=0; i<m;i++){
                for(int j =0; j<n; j++){
                    //step one first to n-2 column shift +1 then j willmove column for each elemnet 
                    //apply every element expect the column should not last means n-1;
                    if(j!=n-1) ans[i][j + 1]=grid[i][j];
                     //step two
                     //ab 0 column row shift hogi but i not to be zero
                    else if(i!=m-1) ans[i + 1][0]=grid[i][n - 1];
                     //step three
                    else ans[0][0]= grid[m - 1][n - 1];
                }
            }
     return transverse(ans,k-1);
      
 }



    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
      return  transverse(grid,k);
    
    }
};