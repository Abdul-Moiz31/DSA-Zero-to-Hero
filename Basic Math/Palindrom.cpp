//  Diff apporaches to get Pallindrom of  number 

#include <bits/stdc++.h>
using namespace std;
// Simple Approach:

bool Palindrom(int n){
    int rev_num = 0 ;
    int N = n;
    while(n>0){
        int last_digit = n % 10;
        n =n/10;
        rev_num = rev_num * 10 + last_digit;
    }
    if(N == rev_num){
        return true;
    } else{
        return false; 
    }
}

// Approach 2 to return the equality;

bool Palindrom(int n){
    int rev_num = 0 ;
    int N = n;
    while(n>0){
        int last_digit = n % 10;
        n =n/10;
        rev_num = rev_num * 10 + last_digit;
    }
    return N == rev_num;
}


// Approach 3 Convert to string ;

bool plaindrom(int n){
    string s = to_string(n);
    int start = 0 ; 
    int end = s.size()-1;
    while(start <end){
        if(s[start++] != s[end--]) return false;
    }
    return true;
}

// Recursive Reverse 

bool isPalindrome1(int n , int &temp){
    if(n == 0)
    return true;
    if(!isPalindrome1(n/10 , temp)) return false;
     
  temp /= 10;
    return true;
}

bool isPalindrome(int n) {
    if (n < 0) return false;
    int temp = n;
    return isPalindrome1(n, temp);
}


// Two Pointers  ;

bool plaindrom(int n){
    string s = to_string(n);
    int i = 0 ; 
    int j = s.size()-1;
    while(i <j){
        if(s[i++] != s[j--]) return false;
        i++;
        j--;
    }
    return true;
}


//  Diff apporaches to get Palindrome of  an array;

// Approach 1 two pointers
bool isPalindrome(const vector<int>& arr){
    int left =0 ;
    int right =arr.size()-1;
    while(left < right){
        if(arr[left] != arr[right])
        return false;
        left++;
        right--;
    }
    return true;

}

//  Reverse the array and check thru buit in funtion

bool isPalindrome(const vector<int>& arr){
   vector<int> reversedArr = arr;
   reverse(reversedArr.begin(), reversedArr.end());
   return arr == reversedArr;
}

//  Recursive Check 

bool isPalindrome(const vector<int>&arr , int l , int r ){
    if(l >= r) return true;
    if(arr[l] != arr[r]) return false ;
    return isPalindrome( arr , l+1 , r-1);
}
bool isPalindrome2(const vector<int>& arr){
    return isPalindrome(arr , 0 , arr.size()-1);
}

// Compare Half of the Array

bool isPalindrome(const vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n/2 ;i++){
        if(arr[i] != arr[n-1-i])
        return false;
    }
    return true;
}