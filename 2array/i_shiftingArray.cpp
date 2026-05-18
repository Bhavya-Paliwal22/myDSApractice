#include <iostream>
using namespace std ;

void rotateArray(int array[] , int n , int s){
int finalShift = s%n ;
if (finalShift==0){
    return;
}

int temp[1000];
int index =0;
for (int i=n-finalShift ; i<n ; i++){
temp[index] = array[i];
index++ ;
}

for (int i=n-1 ; i>=0 ; i--){
    if (i-n >=0){
      array[i]=array[i-finalShift];
    }
}

for (int i=0 ; i<finalShift; i++){
    array[i] = temp[i] ;
}
}
int main (){
int arr[]= {10,20,30,40,50,60};
int size = 6;
// cylic rotate element in array by 
int shift = 2;

cout << "the original array is : " ;
for (int i =0; i<size ; i++){
    cout << arr[i] << "  ";
}
cout << endl;
rotateArray ( arr , size , shift);

//array ko print kro
cout << "now the new array is  : " ;
for (int i =0; i<size ; i++){
    cout << arr[i] << "  ";
}
cout << endl ;

    return 0 ;
}