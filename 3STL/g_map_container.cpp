#include<iostream>
#include<map>
#include<unordered_map>
using namespace std ;

int main (){

    //creation
    unordered_map<string, string>map1 ;

    //insertion

    map1 ["IN"] = "India" ;
          //OR
    map1.insert(make_pair("EN" , "England"));
          //OR
    pair<string, string>p ;
    p.first = "BR";
    p.second = "Brazil";
    map1.insert(p);


    cout << map1.size() <<endl ;//3

    cout << map1.empty() << endl ; //0

    cout << map1.at("IN")<< endl ; //India
    
    //modifying
    map1.at("IN") = "Bharat" ;
    cout << map1.at("IN")<< endl ; //Bharat
    //OR
    map1["IN"] = "Hindustan" ;
    cout << map1["IN"] << endl ; //Hindustan

    //iterator create krte hai chlo
    unordered_map<string, string>::iterator it = map1.begin();

    while (it!=map1.end())
    {
        pair<string, string>p = *it ;
        cout << p.first <<"  "<< p.second << endl ; 
                  //BR  Brazil
                  // EN  England
                  // IN  Hindustan
                // random order  
        it++;
    }
    

    // find
    if (map1.find("uN") != map1.end()){
        cout << "key found" << endl ;
    }
    else{
        cout << "key not found" << endl ;
}



//count
if (map1.count("IN")==0)
{
    cout<<"key not found"<< endl ;
}
else{
    cout << "key found" << endl ;
}




 cout << map1.size() << endl ; //3
 map1.erase(map1.begin(), map1.end());
 cout << map1.size() << endl ; //0

    return 0 ;
}