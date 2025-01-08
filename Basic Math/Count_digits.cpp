//  Count the number of digits divisible evenly

#include <bits/stdc++.h>
using namespace std;

int evendigits(int n){
    int cnt = 0;
    int N = n;
    while(n>0){
        int ld = n % 10;
        n = n / 10;
        if( ld != 0 && N % ld == 0){
                    cnt = cnt++ ;
        }
    }
    return cnt;
}

int main(){
    cout << " Enter a number ";
    int number ;
    cin >> number ;

    cout << " Number of digits divisible evenly by " << number << " is " << evendigits(number);
}

//  2nd approach 
// By Log formula
int num;
int cnt = (int)(log10(num) +1);
return num;