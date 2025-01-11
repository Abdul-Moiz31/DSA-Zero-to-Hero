//  GCD ->  Greatest Common Factor
// HCF -> Highest Common Factor

#include <bits/stdc++.h>
using namespace std;


//  Brute Force 

void gcd(int n1 , int n2){
    int hcf = 1;
    for(int i=1; i<=min(n1 ,n2) ;i++){
        if(n1%i==0 && n2 % i==0){
            hcf =i;
        }
    }
    cout << hcf <<" ";
}

// Euclidean ALgo  = Defination =  2 numbers , 1st number is divided by 2nd number , remainder is taken ,
 
//  gcd(N1 , N2 = gsc(N1-N2 , N2))
//  For example 
//  gcd(20 , 15) = gcd(20-15 , 15) = gcd(5 , 15)  
// gcd(5 , 15) = gcd( 5 , 15-5*3) = gcd(5 , 0) = 5 is GCD

bool gcd1(int a , int b){
    while(a>0 && b>0){
        if(a>b)
            a = a%b;
         else 
            b = b%a;
    }
    if(a==0) cout<< a ;
    else cout << b ;
}
