// There are two thing used 



// ->Map define 
// ->Map function 
  
// -> unordered_map

// There are two things to remember in the map

// map <key , value>
// Key = number , value = frequency (how many times the number exist )
// Example 

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n;
     int arr[n];
     map<int , int>mpp;
     for(int i = 0 ; i<n ;i++){
        cin>> arr[i];
        mpp[arr[i]]++;
     }
     // Iterate in the map
     for(auto it :mpp){
        cout << it.first << "->" << it.second << endl;
     }
     int q ;
     cin >> q;
     while(q--){
        int number ;
        cin >> number;
        cout << mpp[number] <<endl;
     }
     return 0;

}


// What is differnce bw unordered_map and map
// Map is sorted and unordered_map is not sorted 
// Map is used when we need to search the element in the map and unordered_map is used when we need to insert the element in the map.





