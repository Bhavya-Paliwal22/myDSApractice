#include<iostream>
#include<stack>
using namespace std ; 

int main (){
//creation
  stack<int>st ;

//insertion
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);


//removal
st.pop();

cout << st.empty() << endl ; //0 kyuki stack empty nhi hai

cout << st.size() << endl  ; //4

cout <<"top element is: "<< st.top() << endl ; //40



stack<int>st2 ;
st2.push(154);
st2.push(515);
st2.push(516);

//SWAP
st.swap(st2);

cout <<"after swaping top element of st is: "<< st.top() << endl ; //516

cout <<"after swaping top element of st2 is: "<< st2.top() << endl ; //40


    return 0 ;
}
