/******************************************************************************

. Write a program that prompts the user to input an integer and then outputs both
the individual digits of the number and the sum of the digits.
For example:
It should output the individual digits of 3456 as 3 4 5 6 and sum=18,
output the individual digits of 8030 as 8 0 3 0 and sum=11,
output the individual digits of 4000 as 4 0 0 0 and sum=4,



*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

//the solution: take input, find the number of digits, use modulus to get last digits
//put the last digit in an array, read the array backwards. 
int main()
{
    int masterinput;
    int masterinputcopy;
    int sum = 0 ;
    
    bool loop = true;
    cout<<"Input integer: ";
    cin >> masterinput;
    masterinputcopy = masterinput;
    int size = trunc(log10(masterinput)) + 1;
    // log10 gives digits -1, trunc simplifies

    int array[size];
    for(int i = 0; i < size; i++ ){
        sum += masterinputcopy % 10;
        array[i] = masterinputcopy %10;
        masterinputcopy = masterinputcopy / 10; 
    }
    
    for (int i = 1; i < size + 1; i++){
        cout << array[size - i] << " ";
    }
    cout << " sum = " << sum;
    
    return 0;
}