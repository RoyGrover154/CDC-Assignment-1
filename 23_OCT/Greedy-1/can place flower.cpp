#include <iostream>
#include <vector>

using namespace std;


class solution{
   public:

   bool canPlaceFlower(vector<int> flowerbed, int n){

        int m = flowerbed.size();

        int i =0;

        while(i<m && n > 0){
            if(flowerbed[i] == 1){
                i += 2;
            }
            else if(i == m-1 || flowerbed[i+1] == 0){
                n--;
                i= i+2;
            }
            else{
                i = i+3;
            }
        }
        return n==0;
   }
};


int main(){
    int n;

    cin >> n;

    vector<int>flowerbed;

    int flowerpot;

    cin >> flowerpot;

    for(int i=0; i<n; i++){
        cin >> flowerbed[i];
    }

    solution obj;

    bool result = obj.canPlaceFlower(flowerbed, flowerpot);

    cout << result;

    return 0;
}

