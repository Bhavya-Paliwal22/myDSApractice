
/*
// sum of array
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter size : " ;
    cin >> n;
    int input[n];
    cout << " give input : " << endl;
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    cout << "sum is: " ;
    int sum = 0 ;
    for(int i=0; i<n; i++)
    {
        sum = sum + input[i];
    }
    cout << sum << endl;
    return 0;
} 
*/


/*
//Debug the code. Linear Search.
#include<iostream>
using namespace std ;
bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

int main () {
    int arr[5] = {1,2,3,4,5} ;
    int target = 40 ;
    int size = 5;

    bool ans = linearSearch(arr , size , target) ;
    cout << "element exist: " << ans <<endl ;
}
*/


