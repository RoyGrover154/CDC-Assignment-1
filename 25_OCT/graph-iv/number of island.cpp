#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class solution{
    public:

    void dfs(vector<vector<char>>&grid, int m, int n, int i, int j){
        if(i<0 || i>=m ||  j<0 || j>=n || grid[i][j] == '0' || grid[i][j] == '$'){
            return;
        }
        
        grid[i][j] = '$'; //mark visited;

        dfs(grid, m , n, i, j);
        dfs(grid, m ,n ,i ,j);
        dfs(grid,m, n, i, j);
        dfs(grid, m ,n ,i ,j);

    }

    int number_of_island(vector<vector<char>>&grid){
        int m = grid.size();
        int n = grid[0].size();
        int island = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                
                if(grid[i][j] == '1'){
                    dfs(grid,m,n,i,j);
                    island++;
                }
            }
        }
        
     return island;  

    }
};





int main(){
    int m ,n ;

    cout<< "enter row and column";

    cin >> m >> n;

    vector<vector<char>>grid(m,vector<char>(n));

    cout << "enter grid values (0 for water, 1 for land):\n";
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
        
        
        }
    }

    solution obj;

     int result = obj.number_of_island(grid);

     cout << "Number of island: " << result << endl;

     return 0;
}