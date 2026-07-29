#include<iostream>
using namespace std ;

int main (){

int arr[] = {10,20,30,40};
int*ptr = arr;
cout <<"Base Addr. of arr : " <<arr << endl ;
cout <<"ptr pointing addr. : " << ptr  << endl ;
cout <<"2nd Addr. of arr : " <<arr+1 << endl ;
cout <<"ptr pointing addr. : " << ptr+1  << endl ;

char brr[100] = "loveBabbar";
char* cptr = brr ;
cout <<"Base Addr. of brr : " <<brr << endl ;
cout <<"cptr pointing addr. : " << cptr  << endl ;
cout << "cptr: " << *cptr << endl  ;


char ch = 'a' ;
char*cptr2 = &ch ;
cout << "cptr2: " << cptr2 << endl;
    return 0 ;
}