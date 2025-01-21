// Pattern 10 

#include <iostream>
using namespace std;


// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *


void pattern10(int n ){
   for(int i = 1 ; i<=2*n-1 ;i++){
    int stars = i;
    if(i>n)
    stars = 2*n-i;
    for(int j =1 ; j<=stars ;j++){
        cout << "*";
    }
    cout << endl;
   }
}


// Pattern 11
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

void pattern11(int n ){
    int start = 1;
   for(int i = 0 ; i< n;i++){
    if(i % 2 ==0) start = 1;
    else start = 0;
    for(int j = 0 ; j<=i ;j++){
        cout << start ;
        start = 1- start;
    }
    cout << endl;
   }
}



// Pattern 12

// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1


void pattern12(int n ){
    int space = 2* (n-1);
    for(int i=1 ; i<=n ;i++){  
    // numbers
    for(int j = 1 ; j <=i ; j++){
        cout << j ;
    }
    // space 
     for(int j = 1 ; j <= space ; j++){
        cout << " " ;
    }
    // numbers
     for(int j = i ; j>=1; j--){
        cout << j ;
    }
    cout << endl;
    space -= 2;

    }
}


// Pattern 13
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15 
void pattern13(int n ){
    int num = 1;
   for(int i = 1 ; i<=n;i++){
    for(int j = 1 ; j<=i ;j++){
       cout << num << " " ;
       num = num + 1;
    }
    cout << endl;
   }
}

// Pattern 13
// A
// A B
// A B C
// A B C D
// A B C D E  
void pattern14(int n ){
   for(int i = 0 ; i<=n;i++){
    for(char ch='A' ; ch<= 'A' + i ;ch++){
       cout << ch << " " ;
    }
    cout << endl;
   }
}


// Pattern 15
// A B C D E  
// A B C D
// A B C
// A B
// a
void pattern15(int n ){
   for(int i = 0 ; i<=n;i++){
    for(char ch='A' ; ch<= 'A' + (n-i-1) ;ch++){
       cout << ch << " " ;
    }
    cout << endl;
   }
}


// Pattern 16
// A 
// B B
// C C C
// D D D D 
// E E E E E
void pattern16(int n ){
   for(int i = 0 ; i<n;i++){
    for(char j=0 ; j<= i ;j++){
       cout << (char)('A' + i) ;
    }
    cout << endl;
   }
}

int main(){
    cout << " -----For how many Test cases you cant to run it ? ----- "  << endl  <<  " Input a Number :  ";
    int t;
    cin >> t ;
    for(int i = 0 ; i< t; i++){
    cout << " Please Enter the number ";
    int n ;
    cin >> n;
    pattern16(n);
    }
}




