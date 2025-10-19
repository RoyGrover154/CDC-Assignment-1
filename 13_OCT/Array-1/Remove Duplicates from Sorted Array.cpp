//Remove Duplicates from Sorted Array

// brute approach make set(which conatain only unique element and not duplicate)


#include <iostream>
#include<set>
#include<vector>

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



/// optimal approach

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; 

    int i = 0; 
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++; 
            nums[i] = nums[j]; 
        }
    }
    return i + 1; 
    }
};



