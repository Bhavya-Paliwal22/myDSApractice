#include<iostream>
using namespace std;

void sortZeroOne(int array[] ,int size){
    int zeroCount=0 ;
    // count no. of zeros 
    for (int index=0; index<size ; index++){
        if (array[index]==0){
            zeroCount++;
        }
       }
for(int index=0 ; index<zeroCount ; index++){
    array[index]=0;
}
for (int index=zeroCount ; index<size ; index++){
    array[index]=1;
}
}
int main(){
    
 int arr[8] = {1, 0, 1, 0, 1, 0, 0, 1};
 
 sortZeroOne(arr , 8);
 cout<< "sorted array is: " ;
  for (int i=0; i<8 ; i++){
    cout << arr[i] << " ";
  }


   return 0;
}