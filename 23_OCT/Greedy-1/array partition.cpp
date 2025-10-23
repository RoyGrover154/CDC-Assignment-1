#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class solution{
    public:

    int ArrayPairSum(vector<int>&nums){


        sort(nums.begin(), nums.end());

        int sum = 0;

        for(int i=0; i<nums.size(); i = i+2){
            sum = sum + nums[i];
        }
        return sum;
    }
};


int main(){
    int n;
    cin >> n;

    vector<int>nums;

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    solution obj;

    int result = obj.ArrayPairSum(nums);

    cout << result;

    return 0;
}