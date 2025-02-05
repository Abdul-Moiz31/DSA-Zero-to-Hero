// Upper Bound 
// The upper bound of a range is the maximum value in the range. It is used to determine the
// end of the range. The upper bound is inclusive, meaning it is included in the range.
// smallest indx such that arr[ind]>n;


// Its Similar to Lower Bound 


#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &arr , int n , int x) {
    int low = 0;
    int high =  n-1;
    int ans =n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] > x){
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
    int n = 5, x = 5;
    int ind = upperBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}
