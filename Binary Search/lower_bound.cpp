
// Lower Bound 
// It is the smallest index such that arr[index] >= n 
// It is the first index where the element is greater than or equal to n 
#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> &arr , int n , int x) {
    int low = 0;
    int high =  n-1;
    int ans =n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            ans = mid;
            high = mid-1;
        } else{
            low = mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}


// An stl code 

// lb = lower_bound(arr.begin() , arr.end() , n) - arr.begin();