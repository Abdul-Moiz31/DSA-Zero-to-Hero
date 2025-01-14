// Reverse an array


// 1 - Using two pointer in Recursion



#include  <bits/stdc++.h>
using namespace std; 
void reverse1(int arr[] , int l , int r ){
    if(l>=r) return;
    swap(arr[l] , arr[r]);
    reverse1(arr , l+1 , r-1);
}

int main(){
    cout<< " Input the number :";
    int n ;
    cin >> n;
    cout << " Enter the numbers for array : ";
    vector<int>arr(n);
    for(int i =0; i<n ;i++) cin >> arr[i];
    reverse1(arr.data() , 0 , n-1);
    for(int i =0 ;i<n ;i++) 
    cout<< arr[i] << " " ;
    return 0;
}


// - Method 2

void reverse(int i , int arr[] , int n){
    if(i>=n/2) return ;
    swap(arr[i] , arr[n-i-1]);
    reverse(i+1 , arr , n);
}


int main(){
    cout << " Please Input a Number : " ;
    int n ;
    cin >> n;
    cout << " Input the numbers of the array : ";
    int arr[n];
    for(int i = 0 ; i<n ;i++) cin>> arr[i];
    reverse(0 , arr , n);
    for(int i =0 ; i<n ; i++)
    cout << arr[i] << " ";
    return 0 ;

}