#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

bool isPossibleSolution(vector<int>ranks ,int parathe ,int mid ){
    int currentParatha = 0 ;
    for(int i = 0 ; i<ranks.size();i++){
     int r = ranks[i] , j =1 ;
     int timeTaken = 0 ;

while(true){
    if(timeTaken + j*r <=mid){
        currentParatha++;
        timeTaken += j*r ;
        j++;
    
    if (currentParatha>=parathe){
          return true ;
    }}
    else{
        break;
    }
}

}

    return false;
}
    

int minTimeToCompleteOrder(vector<int>ranks , int parathe){
    int s = 0 ;
    int highestRank = *max_element(ranks.begin(),ranks.end());
    int e = highestRank *(parathe*(parathe+1)/2);
    int ans = -1 ;

while (s<=e){
   int mid = s+(e-s)/2;
   if(isPossibleSolution(ranks,parathe, mid)){
    ans = mid ;
    e = mid - 1 ;
   } 
   else {
    s= mid+1;
   }
}
return ans ;
}


int main (){
    
  int parathe  , cooks ;
  cout <<"parathe: " ;
  cin>> parathe;
  cout <<"cooks: " ;
   cin >> cooks ;
   cout<< "enter ranks of cooks: " ;
   vector<int>ranks;
   while(cooks--){
    int r ; cin>>r ;
    ranks.push_back(r);
   }

   cout <<"minimun time taken: "<< minTimeToCompleteOrder(ranks,parathe)<<endl;

    return 0;
}