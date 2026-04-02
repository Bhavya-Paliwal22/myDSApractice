#include<iostream>
using namespace std ;

//fxn define kr rhe frr mai kaam aayega 
void print(int array[], int n){
    for (int index=0; index<5; index++)
{
    cout << array[index] << "  " ;
    
}
cout << endl ;

}

//linear search ke liye fxn 
bool FindTarget(int array[] , int n , int target){
    //traverse the entire array (ulti bhi ho sakti hai) 
    for (int i=0 ; i<n ; i++)
    {
       int currentElement = array[i];
       if (currentElement== target){
         //found
         return true;
       }
    } 
    //agar aap yaha tk pahuch gaye mtlb element hai hi ni jo chahiye 
    //element not found 
return false ;
}

//finding maximum using linear search fxn
int findMax(int array[],int n){
    int maxAns = INT16_MIN;
    for(int i=0; i<n ; i++)
    {
      if (array[i] > maxAns){
        maxAns = array[i];
      } 
    }
return maxAns;
}

// hw que to fine 0's and 1's count 
void counting01(int array[], int n ){
int zeroCount = 0;
int oneCount = 0;
// traverse array ko 
for (int i=0 ; i<n ; i++ ){
int curentElement = array[i];
if (curentElement == 0){
    zeroCount++;
}
else if (curentElement == 1) {
    oneCount++;
}
else {
    cout <<"Given number is not in binary"<< endl ;
}
}
cout << "total 0's are: " << zeroCount << endl;
cout << "total 1's are: " << oneCount << endl ;
}


// extreme print last last bs 
void extremePrint (int array[], int n){
    int left = 0;
    int right = n-1;
    while (right >= left ){
        if (right == left){
            cout << array[left] << " ";
            left++;
        }
        else{
        cout  << array[left]<< " " ;
        left++;
        cout << array[right]<< " " ;
        right--;
        }
    }
}

int main (){
    // creation of array 
    int arr [6] ;

    /* error
    int brr [];  no size declared */

    int brr [] = {10,20,40,78}; 
    int crr [4] = {0} ;

cout << crr [0] << endl ;
cout << crr [2] << endl ;
cout << brr [3] << endl ;
cout << arr [6] << endl ;

/* it can show error as per compiler kyuki size ke bahar likh dia 
 memory iss program ko belong ni krti toh segmentation error*/
cout << arr [11] << endl ; 

cout << endl ;
cout << endl ;

//fill (ek hi value pure array mai!!)
int drr [3] ;
fill (drr , drr+3 , 23) ;
cout << drr [0] << " " << drr [1] << " " << drr [2] << " " << endl ;

fill (drr , drr+3 , 5) ;
cout << drr [0] << " " << drr [1] << " "<< drr [2] << " " << endl ;
cout << endl ;

// userinput lene ka haii !!
int err [4] ;

for(int index=0 ; index<4 ; index++) 
{
    cout << "Enter value at err array index " << index << " :" ;
    cin >> err [index] ;
}
cout << endl ;

// printing that err array 
for (int index=0; index<4; index++)
{
    cout << err[index] << "  " ;
    
}
cout << endl ;

// printing that arr array 
for (int index=0; index<6; index++)
{
    cout << arr[index] << "  " ;
   
} 
cout << endl ;

// function in arrays !!
int frr[] = {10,20,30,40,50};
int size = 5 ;
int target = 50;

print(frr,size);

//linear search 
bool ans = FindTarget(frr,size,target);
cout << "does element exist in frr: " << ans << endl ;

//max no.wala
cout << "max number in err array is: " << findMax(err,4) << endl;

// counting 0 and 1 
counting01 (err , 4);
cout<< endl;
//extreme 2 ponter use krke 
cout << "extreme printing frr" << endl ;
extremePrint (frr,size);
return 0 ;
} 
 