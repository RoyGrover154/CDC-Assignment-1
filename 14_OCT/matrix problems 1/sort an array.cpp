#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        priority_queue<int, vector<int>,greater<int>> pq;

  
        //// push into heap 
        for(int i=0; i<n; i++){
            pq.push(nums[i]);
        }

        ////pop into array
            vector<int>sorted;

            while(!pq.empty()){
                sorted.push_back(pq.top());
                pq.pop();
            }


        return sorted;
    }
};


int main(){

int n;

cin >> n;

vector<int>array(n);

for(int i=0; i<n; i++){
    cin >> array[i];
}

Solution obj;

vector<int> result = obj.sortArray(array);

// print the sorted result
for(size_t i = 0; i < result.size(); ++i){
    if(i) cout << ' ';
    cout << result[i];
}
cout << '\n';

return 0;

}