// 4 Techniques to print all divisors -> i will list out only function you can put in the code snippet by yourself

#include <bits/stdc++.h>
using namespace std;

//  let take 36 -> 1 , 2 , 3 , 4 , 6 , 9 , 12 , 18 , 36

// Brute force appraoch
void printAllDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// Optimized approach ( square root method)

void printAllDivisors(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i;
            if (i != n / i)
            {
                cout << n / i;
            }
        }
    }
}

//  Using a Vector (Sorted Order)

void printAllDivisors(int n){
    vector<int>ls;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0){
        ls.push_back(i);   // Add the smaller divisor here
        if(i != n/1){
            ls.push_back(n/i);// Add the larger divisor if it's distinct
        }
        }
           }
           // Optional: Ensure divisors are in sorted order if needed
           sort(ls.begin() , ls.end()); 
           for(int l :ls){
            cout << l << "" ;
           }
}

//Recursive Function

void printAllDivisorHelper(int n , int i){
    if(i<n) return;
    if(n%i==0)
    cout<<i ;
    printAllDivisorHelper(n , i+1);
    }
    void printAllDivisor(int n){
        printAllDivisorHelper(n , 1);
    
}