#include <iostream>
#include <vector>
#include <set>
#include<algorithm>

using namespace std;

//// Brute approach

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int i = 0;

        for(int j=1; j<n; j++){
            if(nums[i] != nums[j]){
                i++;

            }
            else{
                return nums[i];
            }
        }
        return 1;
    }
};


/////Optimal approach

/// Floyd’s Cycle Detection (Tortoise and Hare)

    int findDuplicate(vector<int>&nums){
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while (slow != fast);

        // Phase 2: Find entry point (duplicate)
        fast = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }



int main(){
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i=0; i<n ;i++){
        cin >> arr[i];
    }
    
    Solution obj;
    cout << obj.findDuplicate(arr);

    return 0;

}




