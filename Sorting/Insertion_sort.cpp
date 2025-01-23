//  What is Insertion Sort ?
// It takes and element and place it in its correct position in the sorted array.
// How does it work ?
// 1. Start from the first element of the array. 
// 2. Compare the current element with the previous elements.
// 3. If the current element is smaller than the previous element, then shift the previous element to the right.
// 4. Repeat the above steps until the current element is placed in its correct position.
//  Example: [5, 2, 8, 3, 1, 6, 4]
// 1. Start from the first element 5. Compare it with the previous elements. Sinc 5 is greater than 2, shift 2 to the right.
// 2. Now the array is [2, 5, 8, 3, 1, 6, 4]. Compare 5 with the previous elements. Since 5 is greater than 2, shift 2 to the right.
// 3. Now the array is [2, 5, 8, 3, 1, 6, 4]. and so on till the ar is sorted 

#include <iostream>
using namespace std;

void insertionSort(int arr[] , int n){
    for(int i = 0 ; i<=n-1 ;i++){
        int j =i;
        while(j > 0  && arr[j-1] > arr[j]){ // if the current element is smaller than the previous element, shift the previous element to the right 
            int temp = arr[j-1]; // store the previous element in a temporary variable
            arr[j-1] = arr[j]; // 
            arr[j]= temp; // 
            j--; // move to the previous element
        }
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
        insertionSort(arr, n);
        for(int i =0 ;i<n ;i++){
            cout << arr[i] << " ";
        }
        return 0;  
}

