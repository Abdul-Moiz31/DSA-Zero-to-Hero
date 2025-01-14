//  Checking if the string is Palindrome => on reverse the ans wi be the same 
// Example 
// MAM == MAM , 11211 == 11211 , MADAM == MADAM
// It is almost same as the reverse as we have covered in the previous question
// 1. Take the input string from the user
// 2. Reverse the string
// 3. Compare the original string with the reversed string
// 4. If both are same then it is a palindrome else not
// 5. Print the result


// 1- Functional Recursion
#include  <bits/stdc++.h>
using namespace std; 

bool isPalindrome(int i , string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return isPalindrome(i+1 , s);
}


int main(){
    cout << " Enter the String : ";
    string s;
    cin>>s;
    if(isPalindrome(0 , s)) cout << "The String is Palindrome";
    else cout << "The String is not Palindrome";
    return 0;
}





