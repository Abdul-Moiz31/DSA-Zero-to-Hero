//  Recursion => When a function calls itself indefinitely until a specified condition is fulfilled.

// Base Condition
/* It is the condition that is written in a recursive function in order for it to get completed and not to run infinitely. 
After encountering the base condition, the function terminates and returns back to its parent function simultaneously. 

Example =
> Pseudocode 

Let’s say we have to print integers starting from 0 till 2 only, this will be how the pseudocode for it will look like */

/* int count = 0;
void func(){

   if(count == 3 ) return;
   print(count);
   count++;
   func();

}

main()
{

  print();

} */

// Example
//  Recursive code for printing numbers from 0 to 5 : 

#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void print(){
   
   // Base Condition.
   if(cnt == 5)  return;
   cout<<cnt<<endl;

   // Count Incremented
   cnt++;
   print();

}

int main(){
    print(); // This is function where it will be called
  return 0; // Output => 0 , 1 , 2 ,3 , 4
}


// Example
//  Recursion Stack => Where the value stored when they are keep on calling 

// Recursion Stack Overflow

// We know that we can only any code by base condition, but if the code does'nt stop it keeps on running which will cause the stack overflow 

//Example 

// void f(){
//     print(1);
//     f();
// }
// int main(){
//     f();
// }


// You can use Base condition to stop the code , it is also called stop cond
// Example
int cnt=0;
void f(){
    if(cnt==5) return;
    cnt++;
    cout << cnt; // this is the Base condition and the code will work till the cnt==5   
    f();
}
int main(){
    f();
}

//  Recursion Tree 

//  To make the iteration simple recursion tree is here to sort this out ;
/* It is the condition that is written in a recursive function in order for it to get completed and not to run infinitely. 
After encountering the base condition, the function terminates and returns back to its parent function simultaneously. */
/*
f()
| |
f()
| |
f()
| |
f()
| |
f()
| |
f() */



