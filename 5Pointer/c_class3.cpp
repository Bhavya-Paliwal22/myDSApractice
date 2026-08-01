#include<iostream>
using namespace std ;
void solve (int arr[],int size ){
    cout << sizeof(arr) << endl ;//pointer ki size 
}
int main (){

int arr[] = {10,20,30,40};
int size = 4;
solve(arr,size);
cout << sizeof(arr) << endl ;//actual array ki size
}

//sizeof(arr) in main → array ka size
// sizeof(arr) in function → pointer ka size
// Array function me jaate hi pointer ban jata hai
// Isliye size hamesha alag se pass karo
