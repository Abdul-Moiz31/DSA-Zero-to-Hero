// -------------------------------------Quick Sort is a divide and Con algo ---------------------------------------

// Quick sort is a divide-and-conquer algorithm that picks a 'pivot' element from the array and partitions the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then recursively sorted.
// Time Complexity: O(n log n) on average, O(n^2) in the worst case when the pivot is the smallest or the largest element in the array.
// Space Complexity: O(log n) for the recursive call stack in the best case, O(n) in the worst case when the array is already sorted or reverse sorted.
// Stability: Not stable, as it swaps elements while sorting.
// Quick sort is a good choice when the array is large and the elements are uniformly distributed.
// It is also a good choice when the array is partially sorted, as it has a good performance in such cases.

// What is pivot ?
// It could be any element in the data structure . The choice of the pivot is critical to the performance of the quick sort algorithm.
// A good pivot should divide the array into two sub-arrays of roughly equal size.
// If the pivot is too small , the sub-array of elements greater than the pivot will be very large, leading to a poor performance .
// If the pivot is too large , the sub-array of elements less than the pivot will be very large, leading to a poor performance .
// A common choice for the pivot is the middle element of the array, or a random element from the array.
// Another common choice is the median of the first, middle and last elements of the array.
// The choice of the pivot can significantly affect the performance of the quick sort algorithm.
// In the worst case, the quick sort algorithm has a time complexity of O(n^2),
// which is much slower than other sorting algorithms like merge sort or heap sort.
// To avoid the worst case, it is common to use a random pivot, or to use a different sorting algorithm for small sub-arrays.
// In practice, the quick sort algorithm is often used with a hybrid sorting algorithm,
// which uses a different sorting algorithm for small sub-arrays, and the quick sort algorithm for larger sub-arrays.

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1; // start i at low + 1, because low is the pivot
    int j = high;

    while (i <= j)
    {
        while (i <= high && arr[i] <= pivot) // Move i to the right
        {
            i++;
        }
        while (arr[j] > pivot) // Move j to the left
        {
            j--;
        }

        if (i < j) 
        {
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot in correct position
    swap(arr[low], arr[j]);
    return j; // Return the pivot index
}

void quickSort(vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high); // Partitioning index
        quickSort(arr, low, pIndex - 1); // Recursively sort the left subarray
        quickSort(arr, pIndex + 1, high); // Recursively sort the right subarray
    }
}

int main()
{
    cout << "Enter the length of an array: ";
    int n;
    cin >> n;
    cout << "Enter the numbers of array for sorting: ";
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}