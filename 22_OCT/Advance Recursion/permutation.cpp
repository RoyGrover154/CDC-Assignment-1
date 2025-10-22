#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;


class Solution {
public:

    void check(vector<int>& nums, vector<vector<int>>& result, size_t idx){ // idx -> size_t

        if(idx == nums.size()){
            result.push_back(nums);
            return;
        }
        
        for(size_t i = idx; i < nums.size(); ++i){ // i -> size_t
         swap(nums[idx], nums[i]);
         check(nums, result, idx + 1);
         swap(nums[idx], nums[i]);
        }
    }

    
    
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> result;
       check(nums, result, 0);

       return result;
    }
};

int main(){
    int n;

    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    Solution object;

    auto res = object.permute(nums);

    for(const auto& newPermut : res){
        cout << "[";
        for(size_t i = 0; i < newPermut.size(); ++i){ // i -> size_t
            if (i) cout << ", ";
            cout << newPermut[i];
        }
        cout << "]\n"; 
    }

    return 0; 
}