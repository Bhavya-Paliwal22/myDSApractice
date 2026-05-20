#include<iostream>
#include<list>
using namespace std ;

int main () {

   
//CREATION
list<int>myList ;

//INSERTION
myList.push_back(10);
myList.push_back(30);
myList.push_back(30);
myList.push_back(40);

myList.push_front(5); 
myList.push_front(1);

cout << "my list 1st is : " << myList.front() << endl ;//1
cout << "my list last is : " << myList.back() << endl ;//40

//iterator ka use kia pura print krne ke liye
list<int>::iterator it = myList.begin();
while (it != myList.end()){
    cout << *it << " ";//1 5 10 30 30 40
    it++;
}
cout << endl ;



//REMOVAL
myList.pop_back();
myList.pop_front();

cout << "now my list 1st is : " << myList.front() << endl ;//5
cout << "now my list last is : " << myList.back() << endl ;//30


cout << myList.size() << endl ;//4
// myList.clear();
// cout << myList.size() << endl ;//0
// cout<< myList.empty() <<endl ;// 1 means true
 
//before removing traversal
cout << "before removing traversal: " ;
list<int>::iterator i = myList.begin();
while (i != myList.end()){
    cout << *i << " ";//5 10 30 30 
    i++;
}
cout << endl ;


myList.remove(30);// isse se saare 30 haat jayenge


//after removing traversal
cout << "after removing traversal: " ;
list<int>::iterator j = myList.begin();
while (j != myList.end()){
    cout << *j << " ";//5 10  
    j++;
}
cout << endl ;

    return 0 ;
}