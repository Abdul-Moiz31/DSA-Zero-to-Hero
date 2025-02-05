//  Whats is Binary Search? 
//  Binary search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing in half the portion of the list that could contain the item, until you'v
//  found it. It is called a binary search because it halves the search space with each iteration
//  Binary search is a fast search algorithm that finds the position of a target value within a sorted array. It compares the target value to the middle element of the array and eliminates half of the array
//  with each iteration until the target value is found. It has a time complexity of O(log n), where n is the number of elements in the array.
// It works by keeping the low pointer at 0th index and high and n-1 index 
// Everything b/w low and high is the search space
//  Binary search is a divide and conquer algorithm. It divides the search space in half with each iteration and eliminates half of the search space with each iteration until the target value is found.
// Example 


//  Suppose we have a sorted array of integers: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ].
//  If we want to find the index of the number 7 in this array, we can use binary search. We start by looking at the middle element of the array, which is 5
//  Since 7 is greater than 5, we know that 7 must be in the second half of the array. We eliminate the first half of the array and repeat the process with th
//  e second half of the array. We look at the middle element of the second half, which is 7
//  Since 7 is equal to the middle element, we have found the index of 7 in the array. The index of 7 is 6

// Simple Binary Search Code :

#include <bits/stdc++.h>
using namespace std;

// Iterative Code
// int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int low = 0;
//         int high = n - 1;
//         while (low <= high) {
//             int mid = (low + high) / 2;
//             if (nums[mid] == target)
//                 return mid;
//             else if (nums[mid] < target)
//                 low = mid + 1;
//             else
//                 high = mid - 1;
//         }
//         return -1;
//     }


// Recursive Code: 

int bs(vector<int> &nums , int low , int high , int target ){
       if(low > high) return -1;
        int mid = (low+high)/2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) 
        return bs(nums , mid+1 , high , target );
        return bs(nums , low , high-1 , target );
}
int search (vector<int> &nums , int target){
    return bs(nums , 0 , nums.size()-1 , target );
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int target = 0;
    int n = nums.size();
    int result = bs(nums, 0, nums.size()-1, target);
    cout << "Index of " << target << " is: " << result << endl;
    return 0;
}




