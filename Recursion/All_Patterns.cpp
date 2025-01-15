//-------------------------------- Note ------------------------------

// you can run These by commenting others and you have to put the input manually

//  There is a little changing in every code try to understand everycode and practice it you will understand 
//  We will be using it in Dynamic programming so be prepared

/********************* Print Subsequence whose sum is k explanation Recursion ***************************/

// 1. Start from the first element of the array
// 2. Check if the current element is less than or equal to k
// 3. If it is, then add it to the subsequence and recursively call the function with the remaining elements and k minus the current element
// 4. If it's not less than or equal to k, then skip the current element
// 5. If the current element is the last element in the array, then return the sub sequence if its sum is equal to k, otherwise return an empty subsequence
// Example

// Input: arr = [1, 2, 3, 4, 5],
// k = 5
// Output: [5]
// Explanation: The subsequence [5] has a sum of 5, which is equal to k.
// Input: arr = [1, 2, 3, 4, 5],
// k = 10
// Output: []
// Explanation: There is no subsequence in the array that sums up to 10.

#include <bits/stdc++.h>
using namespace std;

void printSubsequence(int ind, vector<int> &a, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : a)
                cout << it << " " << endl;
        }
        return;
    }
    a.push_back(arr[ind]);
    s += arr[ind];
    printSubsequence(ind + 1, a, s, sum, arr, n);
    a.pop_back();
    s -= arr[ind];
    printSubsequence(ind + 1, a, s, sum, arr, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 6;
    int sum = 5;
    vector<int> a;
    printSubsequence(0, a, 0, sum, arr, n);
    return 0;
}

// Print any one  Subsequence  but this method using global variable is not preferable

bool flag = false; // Global variable to check if a subsequence is found or not 
void printSubsequence(int ind, vector<int> &a, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum && flag == false)  
        {
            flag = true; // set flag to true
            for (auto it : a)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    a.push_back(arr[ind]);
    s += arr[ind];
    printSubsequence(ind + 1, a, s, sum, arr, n);
    a.pop_back();
    s -= arr[ind];
    printSubsequence(ind + 1, a, s, sum, arr, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 3;
    int sum = 2;
    vector<int> a;
    printSubsequence(0, a, 0, sum, arr, n);
    return 0;
}

// Print any one  Subsequence using functional calls

bool printSubsequence1(int ind, vector<int> &a, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        // if condition satisfied
        if (s == sum)
        {
            for (auto it : a) // print the subsequence
                cout << it << " " << endl;
            return true; // return true if subsequence found
        }
        // if not satisfied
        else
            return false; // return false if subsequence not found
    }
    a.push_back(arr[ind]); // add element to subsequence
    s += arr[ind];         // add element to sum
    // if picked
    if (printSubsequence1(ind + 1, a, s, sum, arr, n) == true) // call function recursively 
        return true;
    return true;
    a.pop_back();  // remove element from subsequence
    s -= arr[ind]; // remove element from sum
                   // if not picked
    if (printSubsequence1(ind + 1, a, s, sum, arr, n) == true)
        return true;
    return false; // return false if subsequence not found
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 6;
    int sum = 5;
    vector<int> a;
    printSubsequence1(0, a, 0, sum, arr, n);
    return 0;
}

// Count the  Subsequence

bool printSubsequence2(int ind, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            return 1; // condition satisfied
        }
        return 0; // condition not satisfied
    }

    s += arr[ind]; // add element to sum

    int l = printSubsequence2(ind + 1, s, sum, arr, n); // call function recursively
    s -= arr[ind]; // remove element from sum 

    int r = printSubsequence2(ind + 1, s, sum, arr, n); // call function recursively

    return l + r; // return total count of subsequence
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 6;
    int sum = 5;
    cout <<  printSubsequence2(0, 0, sum, arr, n); // print count of subsequence
    return 0;
}