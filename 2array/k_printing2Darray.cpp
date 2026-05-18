# include<iostream>
using namespace std ;

//row wise
//ek value denaa isiliye jaroori hai cols wali!! kyuki 2Dto1D conversion ka formula c*(i+j) hota 
void print2Darray1(int rows , int cols , int array[][3]) {
    cout << "row wise:" << endl;
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j< cols; j++){
            cout << array[i][j] << " " ;
        }
        cout << endl;
    } 
}


//column wise 
void print2Darray2(int rows , int cols , int array[][3]) {
    cout << "column wise:" << endl;
    for (int j=0 ; j<cols ; j++){
        for (int i=0 ; i< rows; i++){
            cout << array[i][j] << " " ;
        }
        cout << endl;
    } 
}

//only diagonal
// isko single loop se bhi kr sakte 
void print2Darray3(int rows , int cols , int array[][3]) {
    cout << "only diagonal:" << endl;
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j< cols; j++){
            if(i==j){
                cout << array[i][j] << " " ;
            }
            else{
                cout << "   " ;
            }
        }
        cout << endl;
    } 
}

int main (){ 
    // declare and initialize
    int arr[3][3]  = {{10,20,30},{40,50,60},{70,80,90}} ;
    // int arr[3][3]  = {10,20,30,40,50,60,70,80,90} ;
    // ese bhi kr sakte but avoid and element ek hi daloge toh baki 0 hona hai
     cout << " printing arr array: " << endl ;
     print2Darray1 (3,3, arr) ;
     cout << endl ;
     print2Darray2 (3,3, arr) ;
     cout << endl ;
     print2Darray3 (3,3, arr) ;
     cout << endl ;
   

    int brr [3][3] ;
    int rows , cols ;
    cout << " enter rows: ";
    cin>> rows;
    cout << " enter cols: ";
    cin >> cols ;
    cout << " enter elements in brr array: " << endl ;
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j< cols; j++){
            cout << "enter the value at array " << "["<<i<<"]"<<" "<<"["<<j<<"]"<< ": ";
            cin >> brr[i][j]  ;
        }
     } 

cout << " printing brr array: " << endl ;
print2Darray1 (3,3, brr) ;
cout << endl ;
print2Darray2 (3,3, brr) ;
cout << endl ;
print2Darray3 (3,3, brr) ;




    return 0;
}  