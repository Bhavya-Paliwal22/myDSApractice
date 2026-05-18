#include <iostream>
#include <vector>
using namespace std ;

bool search2Darray(vector<vector<int>>arr , int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0 ; i<rowSize ; i++){
    for (int j = 0 ; j<colSize ; j++){
    if (arr[i][j]==target){
            return true ;
    }
    }
}
return false ;
}

int findMinValue2Darray(vector<vector<int>>arr){
     int rowSize = arr.size();
    int colSize = arr[0].size();

int minValue= INT16_MAX;
for (int i = 0 ; i<rowSize ; i++){
    for (int j = 0 ; j<colSize ; j++){
    minValue= min(arr[i][j] , minValue) ;
    } 
    }
    return minValue;
}

void rowSum2Darray(vector<vector<int>>arr){
     int rowSize = arr.size();
    int colSize = arr[0].size();
    for (int i = 0 ; i<rowSize ; i++){
        int sum =0 ;
    for (int j = 0 ; j<colSize ; j++){
    sum = sum + arr[i][j] ;
    } 
    // ek row comple toh print sum
    cout << "sum of row " << i << " is: " << sum << endl ;
    }
}

void colSum2Darray(vector<vector<int>>arr){
     int rowSize = arr.size();
    int colSize = arr[0].size();
    for (int j = 0 ; j<colSize ; j++){
        int sum =0 ;
        for (int i = 0 ; i<rowSize ; i++){
    sum = sum + arr[i][j] ;
    } 
    // ek row comple toh print sum
    cout << "sum of cols " << j << " is: " << sum << endl ;
    }
}

void diagonalSum2Darray(vector<vector<int>>arr){
     int rowSize = arr.size();
    int colSize = arr[0].size();
    int sum =0 ;
    for (int i = 0 ; i<rowSize ; i++){
        
        for (int j = 0 ; j<colSize ; j++){
            if (i==j){
                sum = sum + arr[i][j] ;
            }
        } 
    }
    cout << "sum of diagonal is: " << sum << endl ;
}

void transposeOfMatix(vector<vector<int>>arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();
 vector<vector<int>>ans(3,vector<int>(3,0)); 

 //original array ko print krva rhe 
 cout << "the original array is: " <<endl ;
 for (int i=0 ; i<rowSize ; i++){
     for (int j=0 ; j<colSize ; j++){
         cout << arr[i][j] << " " ;
        } 
        cout << endl ;
    }

    // dusre array mai value daal di
    for (int i=0 ; i<rowSize ; i++){
        for (int j=0 ; j<colSize ; j++){
            ans[i][j] = arr[j][i] ;
        }
    }
    
    // ab jo dusra array hai usse print krva denge 
    cout << "the taversed array is: " <<endl ;
 for (int i=0 ; i<rowSize ; i++){
    for (int j=0 ; j<colSize ; j++){
   cout << ans[i][j] << " " ;
    } 
    cout << endl ;
}
}

int main (){

 vector<vector<int>>arr(3,vector<int>(3,0));
 int rowSize = arr.size();
 int colSize = arr[0].size();
cout << " enter the value in array: " << endl ;
 for (int i = 0 ; i<rowSize ; i++){
 for (int j = 0 ; j<colSize ; j++){
 cin>> arr[i][j] ;
 }
 }

 int target  = 40 ;

 bool ans = search2Darray(arr,target);
 cout << "element found: " << ans <<endl ;

 int answer = findMinValue2Darray(arr);
 cout << " minimum value in array is : " << answer << endl ;

 rowSum2Darray (arr);

 colSum2Darray (arr);
 
 diagonalSum2Darray (arr);

 transposeOfMatix (arr);

    return 0;
}