/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
// design a program to check whether a given number is even or odd using user input. 
using namespace std;

int main()
{
    float inputnumber;
    cout << "Input a number to check if it is odd or even: " << endl;
    
    cin >> inputnumber;
    
    
    if ( inputnumber != ceil(inputnumber )){
        cout << "This is a float. How could you do this to me.";
    }else if((remainder(inputnumber,2)) == 0 ){
        cout << "The input is even";
    }else {
        cout << "the output is odd";
    }


    return 0;
}
