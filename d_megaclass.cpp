#include<iostream>
# include <algorithm>
using namespace std ;

double divide (int dividend , int divisor){

    double start = 0;
    double end  = dividend ;
    double ans  = 0 ;

    while ((end-start)>0.000000000001){
        double mid=start+(end-start)/2;
         if(mid*divisor<=dividend){
            ans = mid ;
            start = mid ;
         }
         else {
            end = mid ;
         }
    }
    return ans ;
}

int main(){
    int dividend, divisor;
    cout << "Dividend: " ;
    cin >> dividend ;
    
    cout << "Divisor: " ;
    cin >> divisor ;

double quotient = divide(dividend , divisor) ;

    cout << "Quotient: "  ;
    printf ("%.13f",quotient);
}

