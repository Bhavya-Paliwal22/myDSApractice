# include <iostream>
using namespace std ;
void twoSum(int array[] , int n , int t){
    for (int i=0 ; i<n ; i++){
        for (int j=i+1; j<n ; j++){
            if (array[i]+array[j]== t ){
            cout << array[i] << "," << array[j] << "   " ;
            }
            }
        cout << endl;
    }
}
int main (){
int arr[]= {10,5,20,15,20,30};
int size = 6;
int target = 40;

twoSum(arr, size , target);
    return 0;
}
