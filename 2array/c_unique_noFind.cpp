 #include<iostream>
 using namespace std ;
int findUniqueNumber(int array[] , int n){
    int ans = 0;
    // to find the final answer we need to XOR the numbers in the array 
    for (int index=0; index<n ;index++){
        ans = ans ^ array[index] ;
    }
return ans;
}

 int main (){
     
     int arr[] = {2,2,1,4,1};
     int size = 5 ;

    int ans = findUniqueNumber(arr,size);
    cout<< "the unique no. in arr array is: " << ans << endl ;

    return 0;
 }

  


