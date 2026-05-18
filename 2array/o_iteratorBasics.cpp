#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std ;

int main (){
// //FORWARD ITERATOR
// forward_list<int>list;

// list.push_front(10);
// list.push_front(20);
// list.push_front(30);
// list.push_front(40);
// list.push_front(50);

// // traverse
// forward_list<int>::iterator itr = list.begin() ;

// while (itr!=list.end())
// {
//     cout << *itr << " " ;
//     itr ++ ;
// }
// cout << endl;//50 40 30 20 10 

// // reading
// itr = list.begin();
// while (itr!=list.end())
// {
//      (*itr) = (*itr)+5;
//     itr ++ ;
// }

// itr = list.begin();
// while (itr!=list.end())
// {
//     cout << *itr << " " ;
//     itr ++ ;
// }
// cout << endl;//55 45 35 25 15



//BIDIRECTIONAL ITERATORS

list <int> list1;
list1.push_back(10);
list1.push_back(20);
list1.push_back(30);


list<int>::iterator it = list1.begin();

while (it!= list1.end())
{
    (*it)= (*it)+2 ;
    cout << *it << " ";
    it ++;
}
cout<< endl ;// 12 22 32 


    return 0 ;
}