/******************************************************************************
Write a program that prompts the user to input a string and outputs the string in uppercase
letters. (Use a character array to store the string.)


*******************************************************************************/
#include <iostream>
#include <string>
 //I don't want to use an array, seems annoying
//I bet a transform function will work!
//eh on second thought it's easier for me just to make a loop

using namespace std;

int main()
{
    
    string input;
    string UpperCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string LowerCase = "abcdefghijklmnopqrstuvwxyz";
    cout<<"Input a string to convert to Upper Case: ";
    cin >> input;
    for (int i=0; i< input.length(); i++){
        int lnum = 100; //preposterous number to later check for
        bool upper = false;
        //determine if it needs to be upper or lower case. 
        
        for (int j =0; j<26; j++){
            if (input[i] == UpperCase[j]){
                //character is already uppercase. 
                upper = true;
            }
        }
        
        //if letter is already uppercase, no need to make it upper case.
        if (upper == false){
            //determine what letter of the alphabet to replace it with.
            for (int j=0; j< 26; j++){
                if (LowerCase[j] == input[i]){
                    lnum = j;
                } 
            }
            //replace the lower case character with the upper case character.
            //if the character is not a character, do not replace it.
            if (lnum <100){
                input[i] = UpperCase[lnum];
            }
        }
    }

    cout << endl << input;
    return 0;
}
