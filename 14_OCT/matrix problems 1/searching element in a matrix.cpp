#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
            
        }
       return false;
    }
};

int main(){

int m ,n ;

cin >> m, n;

vector<vector<int>>matrix;

for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin >> matrix[i][j];
    }
}

int target;

cin >> target;


Solution obj;

bool result = obj.searchMatrix(matrix, target);

cout << result;

return 0;
}