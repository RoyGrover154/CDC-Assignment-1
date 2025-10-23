#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class solution{
    public:

    int maxchunk(vector<int>array){

        int n = array.size();

        int maxtillnow = -1;

        int count = 0;


        for(int i=0; i<n; i++){
            maxtillnow = max(maxtillnow, array[i]);
            
            if(maxtillnow == i){
                count++;
            }
        }
        return count;
    }
};



int main(){
    int n;
    cin >> n;

    vector<int> array(n);
    
    for(int i=0; i<n; i++){
        cin >> array[i];
    }

    solution obj;

    int result = obj.maxchunk(array);

    cout << result;

    return 0;


}