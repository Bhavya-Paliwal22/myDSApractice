#include<iostream>
using namespace std;

int main(){
   int a = 5;
int* ptr1 = &a ;
// copying pointer into another 
int* q = ptr1 ;

char ch = 'a' ;
char* ptr2 = &ch ;

long l = 1040 ;
long* ptr3 = &l ;



cout<<"Value of a: " << *ptr1  << endl ; // value on that address
cout<<"Address of a: " << ptr1 << endl  ; // address
cout<<"Value of q: " << *q  << endl ; // value on that address
cout<<"Address of q: " << q << endl  ; // address
cout << "Size of ptr1: " << sizeof(ptr1) << endl ;//8
cout << "Size of ptr2: " << sizeof(ptr2) << endl ;//1
cout << "Size of ptr3: " << sizeof(ptr3) << endl ;
}