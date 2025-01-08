//  Diff apporaches to reverse a number 
#include <bits/stdc++.h>
using namespace std;

//  Using a While Loop:

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

// Using Recursion:

int reverseNumber(int num , int reverse_num =0){
    if(num == 0) return reverse_num;
    return (num/10 , reverse_num * 10 + num % 10);
}


// Using String conversion 

int reverseNum(int num1 ){
    string str = to_string(num1);
    reverse(str.begin() , str.end());
    return stoi(str);
}


// Using Mathematical Manipulation (Alternative Approach):

int reversenumber(int num2){
    int reversed = 0;
    for(num2 !=0 ; num2/10 ;){
        reversed = reversed * 10 + num2 % 10;
    }
    return reversed;
}
