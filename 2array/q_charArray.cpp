#include<iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int getLength(char array[] , int size ){
    int count = 0 ;
    int i = 0 ;
    while (array[i] !='\0'){
   count ++ ;
   i++ ;
    }
    return count ;
}

void charReplace(char original , char neww , char array[] ,int size ){
    for (int i = 0 ; i <size ; i++){
        if (array[i]== original){
            array[i]= neww ;
        }
    }
}

void convertIntoUppercase(char array[] , int size){
    int n = getLength(array , size );
    for (int i = 0 ; i<n ; i++ ){
        char ch = array[i];
        if (ch>='a'&& ch<='z'){
        ch = ch -'a'+'A' ;
        array[i] = ch ;
        }
    }
}

void convertIntoLowercase(char array[] , int size){
    int n = getLength(array , size );
    for (int i = 0 ; i<n ; i++ ){
       char ch = array[i];
        if (ch>='A'&& ch<='Z'){
        ch = ch -'A'+'a' ;
        array[i] = ch ;
        }
    }
}

void reverseArray(char array[], int size){
    int n = getLength(array , size );
    for (int i = n-1 ; i >=0 ; i--){
        cout << array[i] ;
    }
}

bool isPalindrome(char array[], int size){
      int n = getLength(array , size );
      int i = 0 ;
      int j = n-1 ;
      while (i<=j){
         if(array[i]==array[j]){
            i++ ;
            j-- ;
         }
         else{  
            return false ;
         }
      }
      return true;
}

int main (){
    
//     vector<int>arr = {1,2,3,4,5,6,7,8};
// for  (int i = 0 ; i< arr.size() ; i++ ){
//     cout << "enter " << i+1 << " element : " ;
//     cin >> arr[i] ;
//     cout << endl ;
// }
// for (int i = 0 ; i <arr.size() ; i++){
//      cout << arr[i] << "," ;
// }



// creation
   char arr[100] ;

//    cout << "Enter your name: " ;
// //input
// cin >> arr;
    
//output
// cout<< "Your name is: " << arr << endl ;
// cout << arr[0] << " ASCII value is: " << (int)arr[0] << endl ;
// cout << arr[1] << " ASCII value is: " << (int)arr[1] << endl ;
// cout << arr[2] << " ASCII value is: " << (int)arr[2] << endl ;
// cout << arr[3] << " ASCII value is: " << (int)arr[3] << endl ;
// cout << arr[4] << " ASCII value is: " << (int)arr[4] << endl ;


// cout << "Enter your name: " ;
// cin.getline(arr,100);
// cout<< "Your name is: " << arr << endl ;

// char brr[100];
// cout << "Enter input: " ;
// cin.getline(brr , 60 , 'z' );
// cout << "so the output will be: " << brr << endl ;

char crr[100];
cout << "Enter input: " ;
cin.getline(crr , 60  );
int length = getLength(crr , 100);
// cout << "length: " << length << endl ;
charReplace('&', ' ' , crr , 100);
//  cout << crr << endl ;
convertIntoUppercase(crr , 100 ); 
//cout << crr << endl ;
convertIntoLowercase(crr , 100 );
//cout << crr << endl ;

//reverseArray(crr,10);

cout << "crr is palindrome or not: "<< isPalindrome (crr,100)<<endl;


    return 0 ;
}