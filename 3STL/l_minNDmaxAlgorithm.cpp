#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;



int main() {

cout<< "min value: " << min(2,6) << endl ;//2

cout << "max value: " << max(2,6) << endl ;//6

vector<int>arr ;
arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(40);
arr.push_back(50);


auto it = min_element(arr.begin(), arr.end());
cout << *it <<endl ;//10 

auto ite = max_element(arr.begin(), arr.end());
cout << *ite <<endl ;//50

    return 0 ;
}
