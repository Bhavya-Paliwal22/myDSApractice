#include <iostream>
using namespace std ;

bool search2Darray(int arr[][4] , int rowSize ,int colSize , int target ){
    for (int i=0 ; i < rowSize ; i++){
        for (int j =0 ; j < colSize ; j++){
            if (arr[i][j]==target){
               return true ;
            }
        }
    }
    return false;
}

int main(){

    int arr [3][4] = {{10,20,30,40},{50,55,57,59},{69,72,79,89}};
    int rows= 3 ;
    int cols= 4 ;
    int target= 44 ;  

    bool ans = search2Darray(arr ,rows ,cols ,target);
 
    cout << "element found: " << ans << endl ;


    return 0;
}  