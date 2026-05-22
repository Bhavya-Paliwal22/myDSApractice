#include<iostream>
#include<list>
using namespace std ;

int main (){
list<int>list1 ;
list1.push_back(1);
list1.push_back(2);
list1.push_back(3);
list1.push_back(4);
list1.push_back(5);

list<int>list2;
list2.push_back(10);
list2.push_back(20);
list2.push_back(30);
list2.push_back(40);
list2.push_back(50);


//insert at location 
list1.insert(list1.begin() , 100);

//SWAP
list1.swap(list2) ;

//list1 after swapping 
cout << "list1 was 100,1,2,3,4,5 but now : " ;
list<int>::iterator i = list1.begin();
while (i != list1.end()){
    cout << *i << " ";// 10 20 30 40 50 
    i++;
}
cout << endl ;


//list2 after swapping
cout << "list2 was 10,20,30,40,50 but now: " ;
list<int>::iterator j = list2.begin();
while (j != list2.end()){
    cout << *j << " "; //100 1 2 3 4 5 
    j++;
}
cout << endl ;

list2.erase(list2.begin(), list2.end());

cout <<"size of list 2 is : " << list2.size() << endl ;//0


    return 0 ;
}