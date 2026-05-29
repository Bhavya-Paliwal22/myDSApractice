#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std ;


int main (){

vector<int> arr(5) ;
arr[0] = 10 ;
arr[1] = 20 ;
arr[2] = 30 ;
arr[3] = 40 ;
arr[4] = 50 ;

int totalSum = accumulate(arr.begin(), arr.end() , 0);// ek defalut value deni chahiye jese 0 se plus kia 

 cout << "Total Sum: " << totalSum << endl ;//Total Sum: 150

 vector<int> first;
 first.push_back(1);
 first.push_back(2);
 first.push_back(3);

 vector<int> second ;
 second.push_back(3);
 second.push_back(4);
 second.push_back(5);

 int innerProduct = inner_product(first.begin() , first.end() , second.begin(), 0); // initial value 0
// second ka ending point bejhne ki jarurat nhi kyui jitne first mai hai usse kr legga 
 cout <<"Inner product of First and Second vector is: " << innerProduct << endl ; // 26

 vector<int> third ;
 third.push_back(1);
 third.push_back(2);
 third.push_back(3);
 third.push_back(4);
   
 vector <int> result(third.size());

partial_sum(third.begin() , third.end() , result.begin() );
 
 cout << "Partial Sum of Third vector is: " ;
 for (int a: result){
    cout << a << " ";
 }
 cout << endl ;


vector<int> fourth(5);
iota(fourth.begin(),fourth.end() , 250);

for (int i: fourth){
    cout << i << " ";//250 251 252 253 254
}
cout<< endl ;
    
    return 0 ;
}