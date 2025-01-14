// Subsequence  definition and expaanation point 
// Subsequence definition: A subsequence of a sequence is a new sequence that is formed from the original sequence by deleting some (or no) elements without changing the order of the remaining elements .

#include<bits/stdc++.h>
using namespace std;
// Explanation point: The subsequence is not necessarily contiguous. It can be formed by selecting elements from the original sequence at different positions.
// Example 
// Input: [1, 2, 3] and [1, 2, 3] and [1, 2, 3]
// Output: true
// Explanation: The first and second sequences are equal, and the third sequence is a subsequence of the first sequence. 
// Example 2
// Input: [1, 2, 3] and [1, 3, 2] and [1, 2, 3]
// Output: false
// Explanation: The first and second sequences are not equal, and the third sequence is not a sub sequence of the first sequence.
// Example 3
// Input: [1, 2, 3] and [1, 2, 3] and [1, 2, 4]
// Output: false
// Explanation: The first and second sequences are equal, but the third sequence is not a subsequence of the first sequence.
//  Lets code the Problem: 

void subsequence(int index , vector<int> &a  , int arr[], int n ){
    if(index == n){
     for(auto it : a){
        cout <<it << " " ;
     }
     cout<< endl;
    }
    a.push_back(arr[index]);
    subsequence(index+1 , a , arr , n);
    a.pop_back();
    subsequence(index+1 , a , arr ,n);
}

int main(){
    cout << " Enter the Numbers of array for Subsequence :";
    int n ;
     cin >> n;
    int arr[] ={3 , 2 , 1};
    vector<int> a;
     subsequence(0 , a , arr ,n);
}

