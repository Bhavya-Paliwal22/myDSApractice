#include<iostream>
#include<set>
using namespace std ;

int main(){
//order ke liye order file aur simple set header aur et declare krne se hoga 

// unordered ko krna padega hr jagh un ordered likho toh jese aap likhoge vese print ho jayega

    set<int> mySet1 ;

    mySet1.insert(56);
    mySet1.insert(90);
    mySet1.insert(80);
    mySet1.insert(60);
    mySet1.insert(50);

    cout << mySet1.size() << endl ;//5
    cout << mySet1.empty() << endl ;//0 no
    cout << *mySet1.begin() << endl ;//50 sort hoke aayega  


   
    // traversal
set<int>::iterator i = mySet1.begin();

while (i!=mySet1.end())
{
    cout << *i << " " ;//50 56 60 80 90
    // sort hoke hi print hua 
    // increasing order wohhh 
    i++ ;
}
cout << endl ;


if (mySet1.find(56)!= mySet1.end()){
    cout << "found" << endl  ;
}
else {
    cout << "not found "  << endl;
}







    return 0 ;
}