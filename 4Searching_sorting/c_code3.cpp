#include <iostream>
#include <vector>
using namespace std ; 

 int singleNonDuplicate(int nums[] , int n) {
      int s = 0; 
      int e = n-1;

      while (s<=e){
       int mid = s+(e-s)/2;
        if (s==e){
            return nums[s];
        }
        int currentValue = nums[mid];
        int leftValue= -1 ;
        if (mid-1>=0){
            leftValue = nums[mid-1];
        }
        int rightValue = -1 ;
        if (mid+1<n){
            rightValue = nums[mid+1];
        }

 if (currentValue!=leftValue && currentValue!=rightValue){
    return currentValue;
 }

 if (currentValue==leftValue && currentValue!=rightValue){
    int pairStartingIndex = mid-1 ;
    if (pairStartingIndex & 1){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
 }

else if (currentValue!=leftValue && currentValue==rightValue){
     int pairStartingIndex = mid ;
    if (pairStartingIndex & 1){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}

      }
      return -1 ;
    }


int main (){
    int arr[] = {1,1,2,2,3,3,4,4,5,3,3};
    int size = 11;
    int ans = singleNonDuplicate(arr,size);
    cout << "ans: " << ans ;
}