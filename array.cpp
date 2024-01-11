#include<iostream>
using namespace std;

int main (){
   int arr[4] = {1,2,3} ; 
   int i ; 
    for(int i =0  ; i<= 2 ; i++ ){
        cout<< arr[i] << endl ; 
    }
    cout << arr[4] ;    // gives a garbage value of unspecified index value
} 