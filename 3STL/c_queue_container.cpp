#include<iostream>
#include<queue>
using namespace std ;

int main (){
//creation
queue<int>myQueue1 ;

//insertion
myQueue1.push(10);
myQueue1.push(20);
myQueue1.push(30);
myQueue1.push(40);
myQueue1.push(50);
myQueue1.push(60);

//removal
myQueue1.pop();// aage se hatega mtlb 10 gya

cout<< "front: " << myQueue1.front() << endl ;//20
cout << "back: "<< myQueue1.back() << endl ;//60

cout << myQueue1.size() << endl ; //5

cout << myQueue1.empty() << endl ;//0

//SWAP 
queue<int>myQueue2 ;
myQueue2.push(98);
myQueue2.push(93);

myQueue1.swap(myQueue2) ;

cout << "queue 1 ka front and back 98 and 93 ho jana chahiye dekhte  !!" << endl ;
cout << "front: " << myQueue1.front() <<endl ;
cout << "back: " << myQueue1.back() << endl ;






    


return 0 ;
}