#include <iostream>
#include<vector>
using namespace std ;

void printArray(int array[] , int size , int index){
    //Base condition 
    if (index==size){
    return ;
    }
    //Processing
    cout << array[index] << " " ;
    //Recursive call
    printArray(array, size , index+1) ;
}

bool searchArray(int array[] , int size ,int index , int target){
    //Base condition 
    if (index==size){
    return false ;
    }
    if (array[index]==target){
    return true ;
    }
    //Processing
    //Recursive call
    return searchArray(array, size, index+1 , target) ;
}

int maxInArray(int array[],int size , int index , int ans){
    //Base condition
    if (index==size){
    return ans ;
    }
    ans = max(ans,array[index]) ;
    return maxInArray(array, size , index+1 , ans) ;
}

void printOddArray(int array[], int size , int index ){
    //Base condition 
    if (index>=size){
    return ;
    }
    if (array[index]%2==1){
    cout << array[index] << " " ;
    }
    //Recursive call 
    printOddArray(array, size , index+1 ) ;
}

void printEvenArray(int array[], int size , int index , vector<int> &ans ){
    //Base condition 
    if (index>=size){
    return ;
    }
    if (array[index]%2==0){
    ans.push_back(array[index]) ;
    }
    //Recursive call 
    printEvenArray(array, size , index+1 , ans) ;
}

bool checkSortedArray(int arr[], int size, int index ){
    //Base conditon
    if (index>=size-1){
     return true ;
    }
    if(arr[index]> arr[index+1]){
    return false ;
    }
    //Recursive call
    return checkSortedArray(arr ,size ,index+1 ) ;
}


int main (){

    int arr[] = {10,20,31,480,57,60} ;
    int size  = 6 ;
    int index = 0 ;
    printArray(arr, size , index) ;
    cout << endl ;

    int target  =  50 ;
    cout <<target <<" is (1->True & 0->False) : " << searchArray(arr , size,index,target)<< endl;

    int ans = INT_MIN ;
    int maximumElement = maxInArray(arr,size, index,ans) ;
    cout << "The Max Element In Array Is: " << maximumElement << endl ;

    printOddArray(arr, size , index ) ;
    cout << endl ;

    vector<int> evenAns ;
    printEvenArray(arr, size , index  , evenAns ) ;
    for (auto x : evenAns){
    cout << x << " " ;
    }
    cout << endl ;
    
    cout <<"Is the array sorted (1->True & 0->False) : " << checkSortedArray(arr , size,index)<< endl ;

return 0 ;
}