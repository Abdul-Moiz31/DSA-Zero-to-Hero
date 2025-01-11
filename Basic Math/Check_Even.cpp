//  Check if the number is even 


#include <bits/stdc++.h>
using namespace std;

//   Using the Modulo Operator

bool even(int n){
    return n % 2==0; // If remainder is 0, it's even
}

//  And Operator 

bool even(int n ){
   return (n & 1) == 0; // If bit is 0, it's even
}

//  Using Integer Division

bool even(int n){
    return n / 2 * 2 == n; // If n is even, this will be tru
}

// Recursive 

bool even(int n){
    if( n == 0) return true;
    if( n == 1) return false;
    return even(n-2);
}