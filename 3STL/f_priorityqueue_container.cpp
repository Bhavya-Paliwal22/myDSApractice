#include<iostream>
#include<queue>
using namespace std ;

int main (){

    //creation
    priority_queue<int>pq1 ;
    // max-heap -> maximum value -> highest priority 

    // insertion
pq1.push(10);
pq1.push(66);
pq1.push(333);
pq1.push(17);


    // removal
pq1.pop(); // highest value pop hogi pehle 
// 333 gyooo

cout << pq1.empty() << endl ;//0

cout << pq1.size() << endl ;//4

cout << pq1.top() << endl ;//highest value karega // toh 333 pop ho gya tha toh ab highest // 66


priority_queue<int>pq2;
pq2.push(345);
pq2.push(56);
pq2.push(32);
pq2.push(335);
// iska top 345 hoga 
cout << "top of pq2 before swap: " << pq2.top() << endl ; // 345 // before swap

pq1.swap(pq2);

cout << "top of pq2 after swap: " << pq2.top() << endl ;// 66 // swap ho gya






// min-heap -> minimum value -> highest priority 
    
    //creation 
    priority_queue<int,vector<int>,greater<int>>pq1 ;



return 0 ; 
}