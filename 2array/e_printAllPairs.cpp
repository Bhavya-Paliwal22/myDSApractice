#include <iostream>
using namespace std;
void printAllPairs(int array[] , int n){
    for (int index=0 ; index<n ; index++){
        for (int j=0; j<n ; j++){
            cout << array[index] << "," << array[j] << "   "  ;
        }
        cout << endl;
    }    
    }

int main (){
int arr[]= {10,20,30,40};
int size = 4;

printAllPairs(arr, size);

    return 0 ;
}
