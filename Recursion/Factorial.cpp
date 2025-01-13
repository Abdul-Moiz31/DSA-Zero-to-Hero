// Factorial is simply the mulitiplication of the number
// for example . fact(3) = 1 *2 * 3 = 6 
// for example . fact(4) = 1 *2 * 3 * 4 = 24 

#include  <bits/stdc++.h>
using namespace std;


// Find  Factorial of n ( any number)

int fact(int n){
    if(n==0) 
    return 1;

    return n * fact(n-1);
}

int main(){
    cout << " Input hte number you want factorial of :";
    int n; 
    cin >> n;
    cout << " The factorial of the " << n << " is " << fact(n) <<endl; 
}

