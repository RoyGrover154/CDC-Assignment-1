#include <iostream>
#include <vector>
using namespace std;

class solution{
    public:
   int  find_pivot(vector<int>array){

    for(int i=0; i<array.size(); ++i){

            ///left sum
            int leftsum = 0;
        for(int j=0; j<i; j++){
            leftsum += array[j];
        }
            //rightsum
        int rightsum = 0;
        for(int j=i+1; j<array.size(); j++){
            rightsum += array[j];
        }
         
        // If leftsum and rightsum are same, then 
        // index i is an equilibrium index
        
        if(leftsum == rightsum)
            return i;
        
       }
       return -1;
    }
};


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n); // create vector of size n

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // input each element
    }

    solution obj;

    int result = obj.find_pivot(nums);

        cout << result;

    return 0;
}