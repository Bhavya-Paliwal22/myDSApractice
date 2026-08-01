#include <iostream>
using namespace std ; 

int getFactorial(int n){
    //Base case 
    if (n==0 || n==1){
    return 1 ;
    }
    //Recursive call 
    return  n * getFactorial(n-1) ;
    //Processing
}

int getPower(int n){
    //Base case 
    if (n==0){
    return 1 ;
    }
    //Recursive call 
    return  2 * getPower(n-1) ;
    //Processing
}

void printReverseCounting(int n){
    //Base case 
    if (n==0){
    return ;
    }
    //Processing
    cout << n << " " ;
    //Recursive call(TAIL RECURSION)
    printReverseCounting(n-1) ;
}

int fib(int n){
    //Base case 
    // if (n==0){
    // return 0 ;
    // }
    // if (n==1){
    // return 1 ;
    // } GENERALIZE KRO BHAI CODING KE BAACHE HO
    if (n==0 || n==1){
    return n ;
    }
    //Recursive call 
    //fib(n) = fib(n-1) + fib (n-2)
   return fib(n-1) + fib (n-2) ;
    //Processing
}
        
int SumN(int n){
    //Base case 
    if (n==0)
    return 0 ;
    //Recursive call 
    return SumN(n-1) + n ;
    //Processing 
}

void printCounting(int n){
    //Base case
    if(n==0){
    return ;
    }
    //Recursive call(HEAD RECURSION) 
    printCounting(n-1) ;
    //Processing
    cout << n << " " ;
} 


int main (){

    int n ;
    cout << "n: " ;
    cin >> n ; 
  
    int ans = getFactorial(n) ;
    cout << "Factorial of " << n << " is: " << ans  << endl ;

    printReverseCounting(n) ;
    cout << endl ;
    printCounting(n) ;
    cout << endl ;
    int ans2 = getPower(n);
    cout << "2 to the power " << n << " is: " << ans2  << endl ;

    int ans3= fib(n) ;
    cout << "the fibonachi series number at index " << n << " is: " << ans3 << endl ;

    int ans4= SumN(n) ;
    cout << "the fsum of  " << n << " numbers is: " << ans4 << endl ;

return 0 ;
} 
