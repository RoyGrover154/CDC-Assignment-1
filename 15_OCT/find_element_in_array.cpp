#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR
// codechef

class solution{
  public:
  
    bool find_element(int N, int X, int A[]){
        
        for(int i=0; i<N; i++){
            
            if(A[i] == X){
                return true;
            }
            
        }
        return false;
    }
};


int main() {
	
	////size of array
	
	int N;
	
	///Element to find
	int X;
	
	cin >> N;
	cin >> X;
	
	int A[N];
	
	for(int i=0; i<N; i++){
	    cin >> A[i]; 
	}
	
	solution obj; 
     bool result =  obj.find_element(N,X,A);
     
     if(result){
         cout << "YES";
     }
     else{
         cout << "NO";
     }
     
     
return 0;
    
}
