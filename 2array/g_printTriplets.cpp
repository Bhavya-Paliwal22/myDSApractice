#include <iostream>
using namespace std;
void printAllPairs(int array[] , int n){
    for (int index=0 ; index<n ; index++){
        for (int j=0; j<n ; j++){
            for ( int k = 0; k<n ; k++){
            cout << array[index] << "," << array[j] <<"," << array[k ]<< "   "  ;
        }
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