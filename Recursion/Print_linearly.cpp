// Print (1-N) numbers


#include  <bits/stdc++.h>
using namespace std;



void printNum(int i , int n){
    if(i>n) return;
    cout<<i<<endl;
    printNum(i+1 , n);
}
int main(){
     cout<< "Input the number till you want to print : ";
    int n;
    cin>> n;
    printNum(1 , n);
}


// Print (N-> 1) numbers ike opposite to the above one 

void printNum1(int i ){
    if(i<1) return;
    cout<<i << endl;
    printNum1(i-1);
}

int main(){
    cout<< "Input the number till you want to print : ";
    int n;
    cin >> n;
    printNum1(n);

}

