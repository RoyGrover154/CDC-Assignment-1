#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
       set<int> s1;  /// it remove duplicate values from nums ans store into set;

        for(int i=0; i<nums.size(); i++){
            s1.insert(nums[i]);
        }

        nums.assign(s1.begin(), s1.end());  /// it clear all element from nums and overwrite wiht new element;

        return nums.size();
    }
};