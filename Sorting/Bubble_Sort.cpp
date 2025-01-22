//  What is Bubble Sort 
//  Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list
//  is sorted.
//  Time Complexity: O(n^2) -> worst comp
//  Space Complexity: O(1)
//  Example: [64, 34, 25, 12, 22, 11, 90] -> [11, 12, 22, 25, 34, 64, 90] 
//  How it works:
//  1. Start at the beginning of the list.
//  2. Compare the first two elements. If they are in the correct order, mov eto the next pair of elements. If they are not in the correct order, swap them.
//  3. Repeat step 2 until the end of the list is reached.
//  4. Repeat steps 1-3 until no more swaps are needed, indicating that the list is sorted.
//  Implementation:
//  1. Create a function that takes a list of integers as input.
//  2. Initialize a variable to keep track of the number of swaps made in a pass through the list.
//  3. Loop through the list until no more swaps are needed. In each iteration, loop through the list and compare adjacent elements. If they are in the wrong order
//  , swap them. Increment the swap counter each time a swap is made.
//  4. After the loop, check if any swaps were made. If not, th elist is sorted and the function can return. If swaps were made, repeat the loop.
//  5. Once the list is sorted, return it.

// Code for sorting in thru bubble sort
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[] , int n){
    for(int i = n-1 ; i>=0 ;i--){
        for(int j = 0; j <=i-1 ;j++ ){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    } 

    // Optimized approach O(n);

    void bubbleSort1(int arr[] , int n){
    for(int i = n-1 ; i>=0 ;i--){
        int swapped = 0; // 
        for(int j = 0; j <=i-1 ;j++ ){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapped =1;
            }
        }
        if(swapped == 0){ // if no swaps were made, the list is sorted 
            break;
        }
        cout << "runs/n"; // Check how many times the loop runs
      }
    }

int main(){
    cout << "Enter the length of an array : ";
    int n ; 
    cin >> n;
    cout << "Enter the numbers of array for swapping : ";
    int arr[n];
    for(int i = 0 ; i< n; i++){
        cin >> arr[i];}
        bubbleSort1(arr, n);
        for(int i =0 ;i<n ;i++){
            cout << arr[i] << " ";
        }
        return 0;  
}



