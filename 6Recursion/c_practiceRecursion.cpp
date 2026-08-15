# include <iostream>
#include <vector>
using namespace std ;

void lastOccur(string &s , int i , char ch , int &ans){
    //Base conditon 
    if (i < 0){
    return ;
    }
    if (s[i] == ch){
    ans = i ;
    cout << ans << endl ;
    return ;
    }
    //RC
    lastOccur(s,i-1,ch,ans) ;
}

void reverseString(string &s , int i , vector<char>&ans){
    //Base 
    if (i<0){
    return ;
    }

    ans.push_back(s[i]) ;
    reverseString( s , i-1 , ans) ;
}

bool checkPalindrome(string &s, vector<char> &revString){
    if (s.size() != revString.size()){
    return false ;
    }

    for (int i = 0; i < s.size(); i++){
    if (s[i] != revString[i]){
    return false ;
        }
    }
    return true ;
}


int main (){
    string s;
    cout << "Enter the string : " ;
    cin>> s ;
    char ch ;
    cout << "Enter character whose last occurence to be found : " ;
    cin>> ch ;
    cout << endl ; 

    int ans=-1 ;
    lastOccur(s,s.size()-1,ch,ans) ;

    vector<char>revString ;
    int index = s.size()-1 ;
    reverseString(s , index , revString) ;
    for (auto x : revString){
        cout << x << " " ;
    } 
    cout << endl ;
    cout <<"Is palindrome (1->True & 0->False) : " << checkPalindrome(s , revString) << endl ;

return 0 ;
}