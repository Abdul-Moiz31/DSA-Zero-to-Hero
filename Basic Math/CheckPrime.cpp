// Check if the number is Prime of not 
/*  By Defintion , a prime number is a natural number greater than 1 that has no positive divisors other than
Or in other words , a prime number is a number that is divisible by 1 and itself only .
Or The number that has only 2 factors , 1 and itself . 
Example 
2-> 1 , 2
3 -> 1 , 3 
5 -> 1 , 5 
7 -> 1 , 7 etc
*/

#include <bits/stdc++.h>
using namespace std;


// Brute Force 
bool isPrimeBruteForce(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Optimized Solution
bool isPrimeOptimized(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}


//  Recursive Approach 
bool isPrimeRecursive(int n, int i ) {
  if(i*i > n) return true;
  if(n%i==0) return false;
  return isPrimeRecursive(n,i+1);
}
bool isPrimeRecursive(int n){
    if(n <= 1) return false;
    return isPrimeRecursive(n , 2);
}