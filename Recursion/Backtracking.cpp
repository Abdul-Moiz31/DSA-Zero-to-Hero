// ------------------------ Backtracking __________________
// Doing the same thing were doing in recursion but the opther way round
// We start with the solution and then we backtrack to find all the solutions



#include  <bits/stdc++.h>
using namespace std;

// Print (1 -> N) numbers 

// void printNum1(int i){
//     if(i<1) return;
//     printNum1(i-1);
//     cout<<i << endl;
// }

// int main(){
//     cout<< "Input the number till you want to print : ";
//     int n;
//     cin >> n;
//     printNum1(n);

// }

// Print (N -> 1) numbers 


void printNum1(int i , int n ){
    if(i>n) return;
    printNum1(i+1 , n);
    cout<<i << endl;
}

int main(){
    cout<< "Input the number  : ";
    int n;
    cin >> n;
    printNum1(1 , n);

}