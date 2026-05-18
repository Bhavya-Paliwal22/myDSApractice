#include <iostream>
using namespace std ; 

int main (){
  
// creation 
// string str ;

// //input
// cout << "Enter your string: " ;
// cin >> str ;

// //output
// cout<< "Str: " << str << endl ;

// //insertion
// str.push_back('l');
// str.push_back('o');
// str.push_back('v');
// cout<< "Str: " << str << endl ;

// string str1 ;
// cout << "Enter your string2: " ;

//ye waala kaam ni aayega 
//str1.getLine();

// getline(cin , str1, 'A');
// cout<< str1 << endl ;

string name = "Maharana Pratap";
cout << name[0] <<endl ;
cout << name.at(0) <<endl ;

cout << name.front() << endl;
cout << name.back()<< endl;

cout<< name.length() << endl ;

auto it = name.begin();
while (it != name.end()){
    cout <<*it << " ";
    it++;
}
cout << endl ;

string str1 = "Bhavya";
string str2 = " Paliwal";
string str3 = str1+str2;
cout << str3 << endl ;
cout << str3.substr(2,7) << endl ;


    return 0 ;
     
}