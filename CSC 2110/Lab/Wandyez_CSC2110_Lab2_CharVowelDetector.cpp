/******************************************************************************

Write a user-defined value-returning function, isVowel, that returns the value true if a
given character is a vowel and otherwise returns false.

THE PLAN:
input char
determine if char is vowel or not.
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

string isVowel(char a){
        char vowels [] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        string truevowel = "false";
        for (int i=0; i<10; i++){

            if (vowels[i] == a){
                truevowel = "true";
            }
        }
    
        
        return truevowel;
}


int main()
{
    char input;
    cout << "Input character to determine if it is a vowel: " ;
    cin >> input;
    cout << "It is " << isVowel(input) << " '" << input << "'" << " is a vowel" ;

    return 0;
}