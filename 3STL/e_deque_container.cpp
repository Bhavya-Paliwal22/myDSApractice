#include<iostream>
#include<deque>
using namespace std ;

int main(){
//creation
deque<int>myDeque1 ;

//insertion
myDeque1.push_back(40);
myDeque1.push_back(50);
myDeque1.push_back(60);

myDeque1.push_front(30);
myDeque1.push_front(20);
myDeque1.push_front(10);
myDeque1.push_front(0);
//deque will be 0 10 20 30 40 50 60

//removal
myDeque1.pop_back();
myDeque1.pop_front();
//now the deque will 10 20 30 40 50 

cout << myDeque1.size() << endl;//5

cout<< "front: " << myDeque1.front() <<endl ;//10
cout<< "back: " << myDeque1.back() <<endl ;//50

cout << myDeque1.empty() << endl ; //0 

//iterator kaam krta hai ky??
deque<int>::iterator i = myDeque1.begin() ;

while (i!=myDeque1.end())
{
    /* code */
    cout << *i << " " ;// 10 20 30 40 50 
    i++;
}
cout << endl ;

//indexing humesha 0 se hoti hai!! 
cout << myDeque1[2] << endl ; //30

myDeque1.clear() ;
cout << myDeque1.size() << endl;//0

myDeque1.insert(myDeque1.begin() , 100);
cout << myDeque1.size() << endl;//1
cout << myDeque1[0] << endl;//100




    return 0 ;
}