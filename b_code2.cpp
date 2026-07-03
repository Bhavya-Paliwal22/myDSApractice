#include <iostream>
using namespace std ;

int getQuotient (int dividend , int divisor){
    int s = 0 ;
    int e = dividend ;
    int mid = s+ ((e-s)>>1) ;
    int ans = -1 ;

while (s<=e){
    if((divisor * mid)== dividend){
        return mid ;
    }
    if ((divisor*mid)< dividend){
        ans = mid ;
        s=mid+1 ;
    }
    else{
        e = mid -1 ;
    }
      int mid = s+ ((e-s)>>1) ;
}
return ans ;
}

int main (){
    int dividend , divisor ;
    cout << "dividend: " ;
    cin>> dividend ;
    cout << "divisor: " ;
    cin>> divisor ;

    int ans = getQuotient(abs(dividend), abs(divisor)) ;

    if ((dividend <0 && divisor>0) || (divisor <0 && dividend>0)){
        ans = 0-ans ;
    }
    cout << "quotient: " << ans ;


}

