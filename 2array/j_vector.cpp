/*#include<iostream>
using namespace std ;

void printArray (int array[] , int n){
    cout << "The array is: ";
    for (int i = 0 ; i<n ; i++){
        cout << array[i] << "," ;
    }
    cout<<endl;
}

int main (){
    
    // dynamic array
    int size ;
    cout<< "enter size : ";
    cin >> size ;

int *arr = new int[size] ;

// size jitne elements ka input lo ni th garbage value save hogi
cout << "enter the elements in array : " << endl ;
 for (int index =0 ;index<size ; index++){
    cin >> arr[index];
    
 }
 printArray (arr , size );

    return 0;
}*/

// ye pura bhi limited ho jayega agar size de di fir toh fix ho gaya na toh iska solution ky hai ??

// STL vector dekho kese!! 

#include <iostream>
// vector ka use aayega 
#include <vector> 
using namespace std ;

// simple printing fxn  
void printArray2(vector<char>v) {
    int size = v.size();
    for (int i = 0 ; i<size ; i++){
        cout << v[i] << "  " ;
    }
    cout << endl ;}

    void printArray(vector<int>v) {
    int size = v.size();
    for (int i = 0 ; i<size ; i++){
        cout << v[i] << "  " ;
    }
    cout << endl ;

}

int main (){
vector<char>drr;
// in vector size mt batao aap toh input do usske according size ho jayegi 
vector<int>v ; // array hi samjhoo
vector<int>arr(5 , -1) ; // array initial size 5 and elements as -1
vector<int>brr = {1,2,3,4,5,6,7,8};
vector<int>crr(brr); // copy array


cout << "arr vector :" <<endl;
printArray(arr);
arr.pop_back();
arr.push_back(70);
printArray(arr);

cout << "brr vector :" <<endl;
printArray(brr);

cout << "crr vector :" <<endl;
printArray(crr);

// insertion  in v 
int n ;
cout << "how many elements : ";
cin >> n ;
cout << endl ;

cout << "enter elements : "<< endl ;
for (int i=0 ; i<n ;i++){
    int d ;
    cin >> d ;
    v.push_back(d);
    
}

//v.push_back(2);
//v.push_back(3);
//v.push_back(4);

cout << "v vector :" <<endl;
printArray(v);

//adding extra elements
for (int i=0 ; i<10 ; i++){
    v.push_back(80);
}
cout << "v vector :" <<endl;
printArray(v);

// delete 
v.pop_back() ;
v.pop_back() ;
cout << "v vector :" <<endl;
printArray(v);

// clearing mai 
v.clear();
cout << "v vector :" <<endl;
printArray(v);

v.push_back(50);
cout << "v vector :" <<endl;
printArray(v);



drr.push_back('a');
drr.push_back('b');
drr.push_back('c');
drr.push_back('d');
cout << "drr vector :" <<endl;
printArray2(drr);
cout << "Front Element: " << drr[0] << "   " ;
cout << "End Element: " << drr[drr.size()-1] << endl;
// same kaam krta but easy haina ye dekhoo
cout << "Front Element: " << drr.front() << "   " ;
cout << "End Element: " << drr.back();



return 0 ;
}