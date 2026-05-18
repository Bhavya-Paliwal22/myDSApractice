#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std ;

vector<int>findComplement(vector<int>binary){
int n = binary.size();
vector<int>twosComp(n , 0);


//step 1 flip bits 
for (int i = n-1 , k =twosComp.size()-1 ; i>= 0 ; i--, k--)
{twosComp[i] = binary[i] == 0 ? 1 : 0 ;}

// now the bits are flipped

//step 2 add 1
int carry = 1 ;

for (int i = twosComp.size()-1 ; i >=0 ; i--)
{
   int sum = twosComp[i]+ carry ;
   twosComp[i] = sum%2 ;
   carry = sum/2;
}
if (carry)
{
 twosComp[0]= carry ;
}
return twosComp ;

}



int main (){
// unordered_map<int , int>studentInfo ; //roll no. , desk no.

// //insertion
// studentInfo[1] = 53 ;//1 key pr 53 desk no. assign hua
// studentInfo[2] = 54 ;
// studentInfo[3] = 55 ;
// studentInfo[3] = 56 ;//reassign

// //iteration
//  unordered_map<int , int>::iterator it ;
//  for (it = studentInfo.begin() ; it!=studentInfo.end(); it++){
//     int key = (*it).first;
//     int value = (*it).second ;
//     cout << "Key: " << key <<"  " << "Value: " << value << endl ; 
//     // Key: 3  Value: 56
//     // Key: 2  Value: 54
//     // Key: 1  Value: 53
//  }


//  -----------2's complement-----------
vector<int>binary = {0,0,0,0};
vector<int>twosComp = findComplement(binary) ;
for (int i = 0 ; i<twosComp.size(); i++){
    cout << twosComp[i] ;
}
cout << endl ;


    return 0 ;
}