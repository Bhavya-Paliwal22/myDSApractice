#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;


void printDouble(int a){

cout << 2*a << " ";  

}

bool checkEven (int a) {
    return a%2 == 0 ;
}

int main (){
    
    vector<int>arr(5);
    arr[0] = 15;
    arr[1] = 10;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    
    // FOR EACH ka use krenge dekhna 
    for_each(arr.begin(), arr.end(), printDouble);// 30 20 60 80 100
    cout << endl ;

   // FIND
   int target = 3 ;   
    // auto i apne aap decice kr leta konsa iterator lagana 
    auto i = find(arr.begin(), arr.end(), target); 
 cout << *i << endl ;// target mila toh target hi print hoga 
 // target ni mila toh garbage value 

 auto it = find_if(arr.begin(), arr.end(), checkEven) ;
cout<< *it << endl ;


sort(arr.begin(), arr.end()) ;
for (int a: arr){
    cout<< a << " " ;//10 15 30 40 50
}
cout << endl ;

reverse(arr.begin(), arr.end());
for (int b: arr){
    cout<< b << " " ;//10 15 30 40 50
}
cout << endl ;

// array mai permanent change aaya hai
for_each(arr.begin(), arr.end(), printDouble);// 100 80 60 30 20
   cout << endl ;


//ROTATE
vector<int>brr(6);
brr[0] = 10  ;
brr[1] = 20  ;
brr[2] = 30  ;
brr[3] = 40  ;
brr[4] = 50  ;
brr[5] = 60  ;

// for_each (brr.begin(), brr.end() , print);
// cout << endl ;//10 20 30 40 50 60 
for (int a: brr){
    cout << a << " ";
}
 cout << endl ;//10 20 30 40 50 60 


rotate(brr.begin() , brr.begin()+3 , brr.end() ) ;

// for_each (brr.begin(), brr.end() , print);
// cout << endl ;//40 50 60 -749664086 47881 9965464 
for (int b: brr){
    cout << b << " ";
}
 cout << endl ;//40 50 60 10 20 30


 vector<int>crr(5);
crr[0] = 11;
crr[1] = 11;
crr[2] = 12;
crr[3] = 114;
crr[4] = 11;


 auto ite = unique(crr.begin() , crr.end());
 //ite iterator ke pehle saare unique element hote hai
 //ite ke baad saare duplicate  element hote hai
 //YAAADDDDD RAKHNAAA!!!!!!!!!!
 // ARRAY SORTED NI HUA TOH KUCH CHANGE NI AAEYGA YE BS SAATH MAI SAME VALUE PADHE HOTE UNHE HI HATTATAAAAA!!!!

 crr.erase(ite, crr.end());

 for (int c: crr){
    cout << c << " ";
}
 cout << endl ;//11 12 114 11 

 //PARTITION 
auto iter = partition(crr.begin(), crr.end(), checkEven);

for (int c: crr){
    cout << c << " ";
}   
 cout << endl ;//114 12 11 11 
 // ek side even the dusri side odd 


    return 0 ;
} 
