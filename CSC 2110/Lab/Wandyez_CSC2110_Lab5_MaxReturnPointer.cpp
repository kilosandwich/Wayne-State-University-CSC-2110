/******************************************************************************

Write a program in C++ to show the maximum between two user inputs, using a
user-defined function. Demonstrate clearly how a function can be returning a
pointer, to find the maximum value. Print the maximum value on the console.
The user inputs should be of the type double.

THE FUNCTION MUST RETURN A POINT

*******************************************************************************/
#include <iostream>

using namespace std;

double* maxxer(double* one, double* two){
    
    if( *one > *two){
        return one;
    }else{
        return two;
    }
    

}

int main()
{
    double inputone, inputtwo;
    cout << endl << "Enter input 1: ";
    cin >> inputone;
    cout << endl <<"The memory address of input 1 is:" << &inputone;
    cout << endl << "Enter input 2: ";
    cin >> inputtwo;
    cout << endl <<"The memory address of input 2 is:" << &inputtwo;
    cout << endl << "The memory address of the maximum is:";
    cout << endl << maxxer(&inputone,&inputtwo);
    return 0;
}
