// Basic Maths approaches
// -------------------- Extracting a Digit from a Number -----------------------------

// Example : Extract the last digit of a number.
// Input : 1234

#include <bits/stdc++.h>
using namespace std ;

int digit(int n){
   int cnt = 0 ;
    while(n>0){
       int ld = n % 10;
        cnt++;
        n = n/10;
    }
    return cnt;
}

int main(){
    cout << " Write a digit to extract : ";
    int Digit;
    cin >> Digit;

    cout << digit(Digit);
}
