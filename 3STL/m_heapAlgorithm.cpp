#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int main (){

    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);
    
make_heap(arr.begin(), arr.end());

for (int a: arr ){
    cout << a << " ";
}
cout << endl ;//77 66 55 22 11 
// o(n) time kha gya 

//insertion after making heap
arr.push_back(99);
push_heap(arr.begin(), arr.end());

for (int b: arr ){
    cout << b << " ";//99 66 77 22 11 55
}
cout<< endl ;

sort_heap(arr.begin(), arr.end());
for (int b: arr ){
    cout << b << " ";//11 22 55 66 77 99
}
cout<< endl ;

pop_heap(arr.begin(), arr.end());
arr.pop_back();
for (int c: arr ){
    cout << c << " ";//99 22 55 66 77
}
cout << endl;


    return 0 ;
}