#include<iostream>
using namespace std;

int gcd(int a , int b){
    if (a==0)return b;
    if (b==0)return a;
    while (a>0 && b>0){
        if(a>b){
            a=a-b;
        }
        else {
            b=b-a;
        }
    }
    return a==0?b:a ;
}
int main(){
    int num1 , num2 ;
     cout << "Enter first number " << endl;
    cin >> num1; 
     cout << "Enter second number " << endl;
    cin >> num2; 
    cout<<"the first number is "<< num1 << endl ;
    cout<<"the second number is "<< num2 << endl ;
  int result = gcd(num1, num2);

    cout << "GCD is: " << result << endl;

    return 0;
}