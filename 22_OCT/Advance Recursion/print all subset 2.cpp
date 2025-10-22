#include<iostream>
#include<vector>

using namespace std;


class solution{
    public:
        void check(vector<int>&nums, vector<vector<int>>&result, vector<int>temp, int idx){
            if(idx == nums.size()){
                result.push_back(temp);
                return;
            }

            temp.push_back(nums[idx]);

            check(nums, result, temp, idx+1);

            temp.pop_back();

            while( idx +1 < nums.size() && nums[idx] == nums[idx+1]){
                idx++;
            }
            check(nums,result, temp, idx+1);
        }


vector<vector<int>>subsetwithoutDup(vector<int>&nums){
    vector<vector<int>> result;
    vector<int>temp;

    check(nums, result, temp, 0);

    return result;
}
};