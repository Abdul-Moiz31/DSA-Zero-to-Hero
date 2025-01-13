// Print name 5 times :

#include  <bits/stdc++.h>
using namespace std;

void printName(int i ,  int n ){
    if(i>n) return; // Base Condition 
    cout << "Moiz" << endl;
    printName(i+1 , n);
}

int main(){
    cout<< "Input the number of times you want to print : ";
    int n;
    cin>> n;
    
    printName(3 , n);
}