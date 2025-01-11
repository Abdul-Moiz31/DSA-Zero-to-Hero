//  Check if the number is odd

#include <bits/stdc++.h>
using namespace std;


//   Using the Modulo Operator

bool odd(int n){
    return n % 2==1;  
}

//  And Operator 

bool odd(int n ){
   return (n & 1) != 0 ; 
}

//  Using Integer Division

bool odd(int n){
    return n / 2 * 2 != n; // If n is even, this will be tru
}

// Recursive 

bool odd(int n){
    if( n == 0) return false;
    if( n == 1) return true;
    return odd(n-1);
}