/******************************************************************************

Create a base class called Shape. The class should have the following public
variables:
- x-coordinate, y-coordinate
The class should contain a constructor that initializes these variables.
The class should also contain the following methods:
- a display function to print the output (x and y coordinates) to the console
- a function move that takes the new x and y coordinates as its arguments
- a function draw. It can have empty parameter as arguments
Next, create two derived classes called Square and Triangle, that inherits from the
base class Shape.
The derived classes should have a private variable called color, that is initialized
using the constructor.
Implement the functions in the derived class.
Create one square and one triangle object in the main, assign them x, y-coordinate
and colors, based on user input.
Then prompt the user to enter new coordinates to move the shapes, and use the
draw function to print the shape on console, and display function to show the
updated x and y coordinates.
[[ Use simple cout statements for printing the shapes. ]]

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Shape{
  public:
    double x,y;
    double xadjust, yadjust;
    Shape(double xinput, double yinput, double xadjustinput, double yadjustinput){
        x = xinput;
        y = yinput;
        xadjust = xadjustinput;
        yadjust = yadjustinput;
    }
    
    void display(){
        cout << endl << "The X coordinate is: " << x;
        cout << endl << "The Y coordinate is: " << y;
    }
    
    void input(double xinput, double yinput, double xadjustinput, double yadjustinput){
        x = xinput;
        y = yinput;
        xadjust = xadjustinput; //I did not realize you wanted to just move a shape, so I did both moving the shape and making one. 
        yadjust = yadjustinput;
    }
    
    void draw(){
        cout << endl << "This is where the Draw function goes for the class Shape";
    }
    
    void moveShape(){
        cout << endl << "Enter new coordinates for your silly little shape: ";
        cout << endl << "Enter your new x coordinate adjustment: ";
        cin >> xadjust;
        cout << endl << "Enter your new y coordinate adjustment: ";
        cin >> yadjust;
        
        

    }
    
};

class Triangle: public Shape{
    private:
        string color;
    public:
        Triangle(double inputx, double inputy, double xadjustinput, double yadjustinput, string colorinput): 
        Shape(inputx, inputy, xadjustinput, yadjustinput), color(colorinput){
           // x = inputx;
            //y = inputy;
            //color = colorinput;
        }
        
        void draw(){
            for(int i=0; i<yadjust; i++){
                cout << endl;
            }
            
            for(int i =0; i<y; i++){
                cout << endl;
                for (int j = 0; j<xadjust; j++){
                    cout << " ";
                }

                cout << "|"; //left side of triangle;
                for (int j = 0; j<i; j ++){
                    if(i == (y-1)){
                        cout << "_";
                    }else{
                        cout <<" ";
                    }
                }
                cout << "\\";
                
            }
        }
};

class Square: public Shape{
    private:
        string color;
    public:
        Square(double inputx, double inputy, double xadjustinput, double yadjustinput, string colorinput): 
        Shape(inputx, inputy, xadjustinput, yadjustinput), color(colorinput){
           // x = inputx;
            //y = inputy;
            //color = colorinput;
        }
        
        void draw(){
            for(int i=0; i<yadjust; i++){
                cout << endl;
            }
            
            for(int i =0; i<y; i++){
                cout << endl;
                for (int j = 0; j<xadjust; j++){
                    cout << " ";
                }

                cout << "|"; //left side of triangle;
                for (int j = 0; j<x; j ++){
                    if((i == (y-1)) or (i==0)){
                        cout << "_";
                    }else{
                        cout <<" ";
                    }
                }
                cout << "|";
                
            }
        }
};




int main()
{
    cout<<"Hello World";
    Triangle myTriangle(5,5, 2, 1, "Metaphorically Blue");
    myTriangle.draw();
    Square mySquare(5,5,2,1, "The color that fish are");
    mySquare.draw();
    myTriangle.moveShape();
    myTriangle.draw();
    mySquare.moveShape();
    mySquare.draw();


    return 0;
}
