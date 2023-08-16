/******************************************************************************

CSC 2110 Midterm Exam:

Goal:
Make a program with a library class with a library name, and int for books
have a constructors and methods I guess.
There's some more requirements but typing them out is annoying, so I listed
them instead as REQUIRMENTS in all caps.
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Library{
  public:
    //REQUIREMENT: Public fields for the lirbary name and the total number of books
    string libraryName;
    int booknumber;
    
    //REQUIREMENT: Constructors to intitialize the lirbary name and the total number of books;
    //we only need one contructor, use default parameters
    Library(string librarynameinput = "Default Library", int booknumberinput = 0){
        libraryName = librarynameinput;
        booknumber = booknumberinput;
    }
    
    //REQUIREMENT: Methods to access the library name and total number of books without modifying the data. 
    int getBook(){
        return booknumber;
    }
    
    string getName(){
        return libraryName;
    }
    //A display function is neat for displaying
    void display(){
        cout << endl << "The library " << libraryName << " currently contains " << booknumber << " books";
    }
    
    //REQUIREMENT: Method to add a book
    //This library will only ever grow. Ignore removing books I guess?
    void addBook(){
        booknumber ++; //yup, that number goes up by one
    }
    
};



int main()
{
    //REQUIREMENT: Create and object of the library class called myLibrary and then 
    //assign a name and total number of books for the myLibrary object.
    Library myLibrary("The Greatest Library Ever", 67);
    //REQUIREMENT: Print the library's name and the total number of books
    myLibrary.display();
    //REQUIREMENT: Add some books to the library using the addBook method
    myLibrary.addBook();
    myLibrary.display();
    //proof that these functions work
    cout << endl;
    cout << myLibrary.getName();
    cout << myLibrary.getBook();
    
    return 0;
}