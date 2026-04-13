#include <iostream>
using namespace std;
void threeSum(int array[] , int n,int t){
    // here esi loop lagaye ki koi extra value na aaye seq ki vjh se aur equal value bhi saare hat jaye
    for (int index=0 ; index<n ; index++){
        for (int j=index+1; j<n ; j++){
            for ( int k = j+1; k<n ; k++){
                if(array[index]+array[j]+array[k]==t)
            cout << array[index] << "," << array[j] <<"," << array[k ]<< "   "  ;
        }
    }
        cout << endl;
    }
}
int main (){
int arr[]= {10,20,30,40};
int size = 4;
int target = 70;

threeSum(arr, size , target);

    return 0 ;
}