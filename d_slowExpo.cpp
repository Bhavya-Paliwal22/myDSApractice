#include <iostream>
using namespace std;

int slowExponential(int a, int b) {
    int ans = 1;
    for (int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
}

int fastExponential(int a, int b) {
    int ans = 1;
    while(b>0){
        if(b & 1){
ans = ans *a;
        }
        a= a*a ;
        b>>=1;
    }
    return ans;
}

int main() {
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

cout << "Result 1: " << slowExponential(a, b) << endl;
cout << "Result 2: " << fastExponential(a, b) << endl;
    return 0; 
}
