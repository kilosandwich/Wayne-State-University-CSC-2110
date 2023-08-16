/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float input1, input2;
    cout << "Input two numbers to check if they are equal:" << endl;
    cout << "Enter the first number: ";
    cin >> input1;
    cout << endl << "Enter the second number: " ;
    cin >> input2;
    
    
    if ( input1 == input2){
        cout << endl << "The two numbers are equal. How could you type in the same thing without knowing that";
        
    }else{
        cout << endl << "The two numbers are not equal.";
    }
    

    return 0;
}
