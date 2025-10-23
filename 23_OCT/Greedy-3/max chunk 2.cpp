#include<iostream>
#include<vector>
#include<algorithm>



class solution{
  public:

  int maxchunk(vector<int>arr){
        int n = arr.size();

        vector<int>prefixMax(n);
        vector<int>suffixMin(n);

        prefixMax[0] = arr[0];
        suffixMin[n-1] = arr[n-1];

        for(int i=1; i<n; i++){
            prefixMax[i] = max(prefixMax[i-1], arr[i]); 
        }

        for(int i=n-2; i>=0; i--){
            suffixMin[i] = min(suffixMin[i+1],arr[i]);
        }

        int count = 0;

        for(int i=0; i<n-1; i++){
            if(prefixMax[i] <= suffixMin[i+1]){
                count++;
            }
        }
        return count;
  }
};

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int>arr;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    solution obj;

    int result = obj.maxchunk(arr);

    cout << result;

    return 0;
}