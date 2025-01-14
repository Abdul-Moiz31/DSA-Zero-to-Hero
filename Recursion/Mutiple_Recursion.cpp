// Mutiple Recursion 
// 1. Definition: A function that calls itself in its own definition.
// 2. Explanation: The function calls itself in its own definition, which means the function is calling itself repeatedly until it reaches a base case that stops the recursion.
// 3. Example: Factorial function, Fibonacci series, Tower of Hanoi problem, etc
// 4. Advantages: 1. It can be used to solve problems that have a recursive structure. 
// 5. Disadvantages: 1. It can be less efficient than other methods becaus it creates a new stack frame for each recursive call.
// 6. Use cases: 1. It can be used to solve problems that have a recursive structure, such as tree or graph traversal, or  problems that can be broken down into smaller sub-problems.
// 7. Best practices: 1. Use recursion when the problem has a recursive structure.
// 8. Common pitfalls: 1. Infinite recursion: This occurs when the base case is not properly defined, causing the function to call itself indefinitely.

#include  <bits/stdc++.h>
using namespace std;

// Fibonacci Number :
// The Fibonacci sequence is a series of numbers where a number is the addition of the last two numbers
// starting with 0 and 1. For example, 0, 1, 1 , 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and so on.

// Lets code this out 
//You can aso fo this bu running a simpl e loop using for loop but we wi do with Recursion 

int fib(int n){
    if(n<=1) return n;
    int last = fib(n-1);
    int slast =fib(n-2);
    return last+slast;
}

int main(){
    cout << " Please Enter the input for Fibonacci : ";
    int n;
    cin>> n;
    cout << fib(n);
}






