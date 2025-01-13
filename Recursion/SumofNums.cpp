//  Sum of N numbers 


#include  <bits/stdc++.h>
using namespace std;

// 1- Parameterised  function

// void sumofN(int i , int sum){
//     if(i<1){
//         cout<<sum;
//         return; //Output = 6
//     }
//     sumofN(i-1 , sum+i);
// }
// int main(){
//     cout<< "Input the number : ";
//     int n;
//     cin >> n;
//     sumofN(n , 0);
// }



// 2- Functional Recursion > when you ask the function to return the ans instead of depending upon the parameters to return the ans

int sumofN2(int n){
    if(n==0){
     return 0;
    }
    return n + sumofN2(n-1);
}
int main(){
    cout << " Input the number :" ;
    int n; 
    cin >> n ;
    cout << sumofN2(n); //Output = 6
}


