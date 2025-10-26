#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class solution{
public:
vector<int> rowAndMaximumOnes(vector<vector<int>>&mat){
    int n = mat.size();
    int m = mat[0].size();

    vector<int>ans(2,0);

    int count = 0, curr;

    for(int i=0; i<n; i++){
        curr = 0;
        for(int j=0; j<m; j++){
            if(mat[i][j]) curr++;
        }
        if(curr > count){
            count = curr;
            ans = {i,count};
        }
    }
      return ans;
}
};

int main(){
int n, m;

cin >> n >> m;

vector<vector<int>>mat(n, vector<int>(m));

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin >> mat[i][j];
    }
}


solution obj;

    vector<int> result = obj.rowAndMaximumOnes(mat);

    for(size_t i =0; i<result.size(); i++){
        cout << result[i];
    }
return 0;
}