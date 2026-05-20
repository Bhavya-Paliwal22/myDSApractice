#include<iostream>
#include<vector>
using namespace std ;


int main() {

    //creation 
    vector<int>marks = {17,7,8,56} ;
    cout << *(marks.begin()) << endl ;
    cout << *(marks.end()-1) << endl ;
    cout << marks.back() << endl  ;
    cout << (marks.size()) <<endl;
    cout << (marks.max_size()) <<endl ;
     marks.push_back(20);
     cout << *(marks.end()-1) << endl ;
      marks.pop_back();
      marks.pop_back();
      marks.pop_back();
      cout << *(marks.end()-1) << endl ;
      
      cout << marks.front() << endl  ;
      cout << marks.back() << endl  ;
      
      cout << marks.empty() << endl ;
      marks.pop_back();
      marks.pop_back();
      cout << marks.empty() << endl ;

      return 0 ;
}
