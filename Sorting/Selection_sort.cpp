
 /*                                              Selection sort
Selection sort is a simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted part  of the list and putting it at the beginning. The algorithm maintains two subarrays in a given array
- The subarray which is already sorted.
- Remaining subarray which is unsorted.
In every iteration of selection sort, the minimum element from the unsorted subarray is picked and moved to the sorted subarray.
 Time Complexity: O(n^2)
 Space Complexity: O(1) as it only uses a constant amount of space for the min_index and temp variables.

                                              ### How Selection Sort Works
1. Start at the beginning of the array.
2. Find the smallest element in the array.
3. Swap the smallest element with the first element of the array.
4. Repeat steps 2 and 3 for the rest of the array.

                                              ### Example of Selection Sort
Let's consider an array of integers: `[64, 25, 12, 22, 11]`. We will apply the selection sort algorithm to sort this array in ascending order.
1. Start at the beginning of the array: `[64, 25, 12, 22, 11]`.
2. Find the smallest element in the array: `11`. Swap `11` with `64`: `[11, 25, 12, 22, 64]`.
3. Repeat step 2 for the rest of the array: Find the smallest element in the array (excluding the first element): `12`. Swap `12` with `25`: `[11, 12, 25, 22, 64]`.
4. Repeat step 2 for the rest of the array: Find the smallest element in the array
(excluding the first two elements): `22`. Swap `22` with `25`: `[11 , 12, 22, 25, 64]`.
5. Repeat step 2 for the rest of the array: Find the smallest element in the array (excluding the first three elements): `25`. Swap `25` with `64`: `[11 , 12, 22, 25, 64]` is not the correct swap,
the correct swap is `[11, 12, 22, 25, 64] */

#include <iostream>
using namespace std;

// Pseudo Code 
void Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
                }
        }
        swap(arr[i], arr[minIndex]);
        }
        }



// Sort the array

void selectionSort(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int mini = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
                }
        }
        int temp =arr[mini];
        arr[mini] = arr[i];
        arr[i]=temp;
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
        selectionSort(arr, n);
        for(int i =0 ;i<n ;i++){
            cout << arr[i] << " ";
        }
        return 0;  
}


