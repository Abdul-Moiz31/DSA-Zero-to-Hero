// We will cover the Basic of Hashing here 

// what is Hashing 

/* In simple word i wil say that hashing nothing but Pre-Storing and Fetching 
for example : 
consider arr= [1  2 , 3 , 3, 3]
you have to create another array and call it hasharray 
so what we will do in that array we will try to store the value and increase the count of that value whenever we find another one 

Make sense ?

Lets code it up for better understanding */

#include <bits/stdc++.h>
using namespace std;



// int main(){
//     int n ;  
//     cin >> n ;  
//     int arr[n]; 
//     for(int i = 0 ; i<n ;i++){
//         cin >> arr[i];
//     }

//     // Precompute
//     int hash[13] ={0}; // we are assuming that the maximum value of the array is 12 but you can change depending upon the question
//     for(int i = 0 ; i< n ;i++){ 
//         hash[arr[i]] += 1; 
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         cout << "Please enter the value to find the frequency of that value in the array :" ;
//         int number;
//         cin >> number;
//         cout << hash[number] << endl ; 
//     }
//     return 0;
// }

// How much maximum power you can have 


// for main function it 1e6 ;
// Globally it is 1e8 


// Character Hashing Problem 

 /* For this code we need to understand ASCII value 
 ASCII stands for the "American Standard Code for Information Interchange".
 characters are a-z = 26
Values of Characters
A ----> 65 , Z ---> 90
a ----> 97 , z ---> 122

if you perform any operation . what we see is  A-Z or a-z . 
but if we are doing any operation it take the ASCII value of the character . so we need to take care of that .

arr[256];
so we can have 256 different character in the array .
*/


int main(){
   string s;
   cin >> s;

   int hash[26] = {0};
   for(int i = 0 ; i<s.size();i++){
    hash[s[i] - 'a'] += 1; // main logic to convert the values into ASCII . you can use "- A" for capital alphabets
   }
   int q;
   cin >> q;
   while(q--){
    char c;
    cin >> c;
   }
}

