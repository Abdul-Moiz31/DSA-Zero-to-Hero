//  Important points to remember while solving Patterns
//  Patterns -> consist of Nested Loops 

// * * * *  
// * * * *
// * * * *
// * * * *
/*1- for the outer loop , count the number of lines ( number of rows)
2- for the inner loop , count the number of columns ( number of stars in each row ) & connect then with rows 
3 - Whatever you're printing , Print them inside the inner for loop. 
4- Observe symmetry (optional)
 */ 

// Basic algo for printing patterns in c++

//  Print stars in a row

#include <iostream>
using namespace std;
// int main() {
//     cout << " Write the number for Pattern printing : "; 
//     int n ; // Take the number from user 
//     cin >> n ; 
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << "* "; // print a star in each column
//             }
//             cout << endl; // print a new line after each row
//             }
//             return 0;
// }

// You can od it by seperating the function

// Pattern 1


// void pattern1(int n){
//     for(int i = 0 ; i< n ;i++){
//         for(int j = 0 ; j<n ;j++){
//             cout << " * " ;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     cout << " Please Enter the number ";
//     int n ;
//     cin >> n;
//     pattern1(n);
// }


// Now for Example you Got multiple test cases 

// Pattern 1

// void pattern1(int n){
//     for(int i = 0 ; i< n ;i++){
//         for(int j = 0 ; j<n ;j++){
//             cout << " * " ;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int t;
//     cin >> t ;
//     for(int i = 0 ; i< t; i++){
//     cout << " Please Enter the number ";
//     int n ;
//     cin >> n;
//     pattern1(n);
//     }
// }


// Pattern 2
// Lets Print this out 



// *
// * *
// * * *
// * * * *
// * * * * * 


// void pattern2(int n){
//     for(int i = 0 ; i< n ;i++){
//         for(int j = 0 ; j<=i ;j++){
//             cout << " * " ;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     cout << " -----For how many Test cases you cant to run it ? ----- "  << endl  <<  " Input a Number :  ";
//     int t;
//     cin >> t ;
//     for(int i = 0 ; i< t; i++){
//     cout << " Please Enter the number ";
//     int n ;
//     cin >> n;
//     pattern2(n);
//     }
// }


 
// Pattern 3


// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5 

// void pattern3(int n){
//     for(int i = 1 ; i<=n ;i++){
//         for(int j = 1 ; j<=i ;j++){
//             cout << j << " " ;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     cout << " -----For how many Test cases you cant to run it ? ----- "  << endl  <<  " Input a Number :  ";
//     int t;
//     cin >> t ;
//     for(int i = 0 ; i< t; i++){
//     cout << " Please Enter the number ";
//     int n ;
//     cin >> n;
//     pattern3(n);
//     }
// }


// Pattern 4


// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5 

// void pattern4(int n){
//     for(int i = 1 ; i<=n ;i++){
//         for(int j = 1 ; j<=i ;j++){
//             cout << i << " " ;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     cout << " -----For how many Test cases you cant to run it ? ----- "  << endl  <<  " Input a Number :  ";
//     int t;
//     cin >> t ;
//     for(int i = 0 ; i< t; i++){
//     cout << " Please Enter the number ";
//     int n ;
//     cin >> n;
//     pattern4(n);
//     }
// }


// Pattern 5

// * * * * * 
// * * * *
// * * *
// * *
// *

// void pattern5(int n){
//     for(int i = 1 ; i<=n ;i++){
//         for(int j = 0 ; j<n-i+1  ;j++){
//             cout << " * " ;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     cout << " -----For how many Test cases you cant to run it ? ----- "  << endl  <<  " Input a Number :  ";
//     int t;
//     cin >> t ;
//     for(int i = 0 ; i< t; i++){
//     cout << " Please Enter the number ";
//     int n ;
//     cin >> n;
//     pattern5(n);
//     }
// }


// Pattern 6

// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// void pattern6(int n){
//     for(int i = 1 ; i<=n ;i++){
//         for(int j = 1 ; j <= n-i+1  ;j++){
//             cout << j  << " " ;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     cout << " -----For how many Test cases you cant to run it ? ----- "  << endl  <<  " Input a Number :  ";
//     int t;
//     cin >> t ;
//     for(int i = 0 ; i< t; i++){
//     cout << " Please Enter the number ";
//     int n ;
//     cin >> n;
//     pattern6(n);
//     }
// }


// Pattern 6

//        * 
//      * * *
//    * * * * *
//  * * * * * * *
// * * * * * * * * *

void pattern7(int n){
    for(int i = 0 ; i<n ;i++){

        //print space
        for(int j = 0 ; j < n - i - 1 ;j++){
             cout << " " ;
            }
                //print Star
            for(int j = 0 ; j< 2*i+1 ;j++){
                 cout << "*" ;
            }
                //print space
            for(int j = 0 ; j < n - i - 1 ;j++){ 
            cout << " " ;
        }
        cout << endl;
    }
}
// int main(){
//     cout << " -----For how many Test cases you cant to run it ? ----- "  << endl  <<  " Input a Number :  ";
//     int t;
//     cin >> t ;
//     for(int i = 0 ; i< t; i++){
//     cout << " Please Enter the number ";
//     int n ;
//     cin >> n;
//     pattern7(n);
//     }
// }

// Pattern 8


// * * * * * * * * *
//  * * * * * * *
//    * * * * *
//      * * *
//        * 

void pattern8(int n){
    for(int i = 0 ; i<n ;i++){

        //print star
        for(int j = 0 ;j<i ;j++){
                 cout << " " ;
            }
        for(int j = 0 ; j < 2*n - (2*i + 1) ;j++){
            cout << "*" ;
            }
         for(int j = 0 ; j<i ;j++){
                 
                 cout << " " ;
            }
        cout << endl;
    }
}
// int main(){
//     cout << " -----For how many Test cases you cant to run it ? ----- "  << endl  <<  " Input a Number :  ";
//     int t;
//     cin >> t ;
//     for(int i = 0 ; i< t; i++){
//     cout << " Please Enter the number ";
//     int n ;
//     cin >> n;
//     pattern8(n);
//     }
// }

// Pattern 9

// Combining both codes of pattern 8 and pattern to generate one 

//        * 
//      * * *
//    * * * * *
//  * * * * * * *
// * * * * * * * * 
//  * * * * * * *
//    * * * * *
//      * * *
//        * 


int main(){
    cout << " -----For how many Test cases you cant to run it ? ----- "  << endl  <<  " Input a Number :  ";
    int t;
    cin >> t ;
    for(int i = 0 ; i< t; i++){
    cout << " Please Enter the number ";
    int n ;
    cin >> n;
    pattern7(n);
    pattern8(n);
    }
}

