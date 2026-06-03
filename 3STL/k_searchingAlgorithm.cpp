#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;



int main() {
vector<int>arr ;
arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(40);
arr.push_back(50);

int target = 40;

auto it = binary_search(arr.begin(),arr.end() , target) ;
if (it==1){ 
    cout << "Found" << endl;// 1 found

}
else{
    cout<< "Not Found"<< endl ;
}

auto ite = lower_bound(arr.begin() , arr.end(),35);
cout << *ite <<endl ;//40

auto iter = upper_bound(arr.begin() , arr.end(),40);
cout << *iter <<endl ;//50
 

    return 0;
}