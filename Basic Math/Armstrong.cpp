//  Diff apporaches to get Armstrong  of  number 

#include <bits/stdc++.h>
using namespace std;

// Approach 1 

int isArmstrong(int n ){
    int rev_num = 0;
    int N=n;
    while(n>0){
        int last_digit = n %10;
        rev_num = rev_num + (last_digit * last_digit * last_digit);
        n /=10;
    }
    if(N == rev_num){
        return true;
    } else { 
        return false;
        }
}

// Approach 2 

int isArmstrong(int n ){
    int rev_num = 0;
    int N=n;
    while(n>0){
        int last_digit = n %10;
        rev_num = rev_num + (last_digit * last_digit * last_digit);
        n /=10;
    }
    return N == rev_num;
}
// Approach 3 - Recursive 


int sumOfPowers(int n, int digits) {
    if (n == 0) return 0;
    int digit = n % 10;
    return pow(digit, digits) + sumOfPowers(n / 10, digits);
}

bool isArmstrong1(int n) {
    int digits = log10(n) + 1;
    return n == sumOfPowers(n, digits);
}

// Appraoch 4 String Based 

#include <cmath>
#include <string>
bool isArmstrong2(int n) {
    string str = to_string(n);
    int digits = str.size();
    int sum = 0;
    for (char c : str) {
        int digit = c - '0';
        sum += pow(digit, digits);
    }
    return sum == n;
}


//  Approach 5 : Precompute Powers for Digits (Efficient)


#include <cmath>
bool isArmstrong3(int n) {
    int original = n;
    int sum = 0;
    int digits = log10(n) + 1;

    int power[10];
    for (int i = 0; i < 10; i++) {
        power[i] = pow(i, digits);
    }

    while (n > 0) {
        int digit = n % 10;
        sum += power[digit];
        n /= 10;
    }
    return sum == original;
}
