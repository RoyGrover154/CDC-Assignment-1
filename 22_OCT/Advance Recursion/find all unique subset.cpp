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

      check(nums,result,temp,idx+1);
      temp.push_back(nums[idx]);
      check(nums,result, temp, idx+1);
      temp.pop_back();
  }


  vector<vector<int>> subsets(vector<int>&nums){

    vector<vector<int>>result;

    vector<int>temp;

    check(nums, result, temp,0);

    return result;
  }

};

int main(){
    int n;
    cin >> n;

    vector<int>nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    
    solution object;

    auto res = object.subsets(nums);

    for(const auto &subset : res){
      cout << "[";
      for(int i=0; i<subset.size(); ++i){
        if (i) cout << ", ";
        cout << subset[i];
      }
      cout << "]\n";
    }
    
    return 0;
}