// What is Dynamic Programming ?
// Dynamic Programming is a method for solving complex problems by breaking them down into simpler subproblems, solving each subproblem only once, and storing the solutions
// to subproblems to avoid redundant computation.
// It is particularly useful for problems that have overlapping subproblems or that can be broken down into smaller subproblems.
// Example
// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 , 144, ...
// The Fibonacci sequence is a series of numbers where a number is the addition of the last two numbers
// with the first two numbers being 0 and 1. The sequence is as follows:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 , ...
// The Fibonacci sequence can be calculated using dynamic programming. The idea is to store the results of expensiv erecursive calls and reuse them when the same inputs occur again.
//
// How to implement Dynamic Programming?
// 1. Define the problem and identify the subproblems.
// 2. Create a table to store the solutions to subproblems.
// 3. Fill the table by solving each subproblem only once and storing the solution in the table.
// 4. Use the table to solve the original problem.
// Example of Dynamic Programming in C++
// Fibonacci Series using Dynamic Programming

#include <bits/stdc++.h>
using namespace std;
// Function to calculate the nth Fibonacci number using dynamic programming -> Memoization

int fib(int n , vector<int> &dp){
    if(n <= 1) return n;

    if(dp[n] != -1 )
    return dp[n];

    return dp[n] = fib(n-1 , dp) + fib(n-2 , dp);
    
}
// Function to calculate the nth Fibonacci number using dynamic programming -> Tabulation 
// Better solution  from the Recursion & Memoization

int  main(){
    int n ; 
    cout << "Enter the value of n: ";
    cin >> n;
   int prev1= 1; // Base case
   int prev2= 0; // Base case
   for(int i = 2 ; i<=n;i++){
    int curi = prev1 +prev2; // Recursive relation 
    prev2 = prev1; // Update prev2
    prev1 = curi;  // Update prev1
   }
    cout << prev1;
    return 0;
}

/*You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 */
#include <bits/stdc++.h>
using namespace std;
// Function to calculate the number of ways to climb n steps using dynamic programming
int climbStairs(int n) {
    if (n == 1) return 1;
    int dp[n + 1];
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
        }


