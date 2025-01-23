// Prerequisite of this algo is Recursion 

// What is Merge Sort ?
// Merge sort is a divide-and-conquer algorithm that splits a list of elements into two halves, recursively sorts each half, and then merges the two sorted halves.
// Time Complexity: O(n log n) 
// Space Complexity: O(n)
// Right a pseudo code 
// 1. If the list is empty or contains only one element, return the list (sinc elist of one element is already sorted)
// 2. Find the middle of the list and split it into two halves 
// 3. Recursively sort each half
// 4. Merge the two sorted halves into a single sorted list
// c++ code ?
// 1. Create a function that takes a list of elements as input 

// Example short code ;

// Merge Sort Algorithm 
#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted halves into one sorted array
void merge(int arr[], int low, int high, int mid) {
    vector<int> temp;  // Temporary vector to hold merged elements
    int left = low;    // Left pointer for the first half
    int right = mid + 1;  // Right pointer for the second half

    // Merging the two halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);  // Add smaller element from left half
            left++;
        } else {
            temp.push_back(arr[right]);  // Add smaller element from right half
            right++;
        }
    }

    // If there are remaining elements in the left half, add them
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If there are remaining elements in the right half, add them
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the merged elements back into the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];  
    }
}

// Function to implement merge sort
void mergeSort(int arr[], int low, int high) {
    if (low < high) {  // Only proceed if there are more than one element
        int mid = (low + high) / 2;  // Find the middle index
        mergeSort(arr, low, mid);  // Sort the left half
        mergeSort(arr, mid + 1, high);  // Sort the right half
        merge(arr, low, high, mid);  // Merge the two sorted halves
    }
}

int main() {
    cout << "Enter the length of an array: ";
    int n; 
    cin >> n;

    cout << "Enter the numbers of array for sorting: ";
    int arr[n];  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    mergeSort(arr, 0, n - 1);  // Perform merge sort on the entire array

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  
    }

    return 0;  
}