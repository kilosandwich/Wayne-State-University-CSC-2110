/******************************************************************************


Given the UML diagram of the following classes, implement them using inheritance
and method overriding (the area and print method):
• The print method only prints out the private variables.
• You need to have the individual set and get methods to access the private
variables

LOOK AT THE DIAGRAM, DO THE DIAGRAM. BUT MAKE IT TWO CLASSES EZ.

The print method only prints out the private variables.
• You need to have the individual set and get methods to access the private
variables
In the main function, create two box objects, with different length, width and height and
compute the area and volume. Also print the details using the print method.


*******************************************************************************/

#include <iostream>

using namespace std;
//define classes. Remember, these boxes are super secret. NO ONE MUST KNOW.
//put the things into the private or protected classes later. Just make sure
//it works. 
class Rectangle{
    private:
        double length;
        double width;
    
    public:
        Rectangle(){
            //this just is a default creator
            //makes a nonexistent rectangle (we can assign values later)
            length = 0;
            width = 0;
        }
        
        Rectangle(double l, double w){
            //create a rectangle with assigned inputs. 
            length = l;
            width = w;
        }
        
        double area(){
            double a = length * width;
            return a;
        }
        
        double perimeter(){
            double p = 2*length + 2*width;
            return p;
        }
        
        void print(){
            cout << endl << "The length is: " << length;
            cout << endl << "The width is: " << width;
        }
        
        double getlength(){
            return length;
        }
        
        void setlength(double l){
            length = l;
        }
        
        double getwidth(){
            return width;
        }
        
        void setwidth(double w){
            width = w;
        }
};
//define the inherited classes.

class Box: public Rectangle{
    private:
        double height;
    public:
        Box(){
            height = 0;
        }
        
        Box( double l, double w, double h){
            setlength(l);
            setwidth(w);
            height = h;
        }
        
        double Volume(){
            
            double v = getlength() * getwidth() * height;
            cout << endl << "The volume is: " << v;
            return v;
        }
        
        void print(){
            cout << endl << "The length is: " << getlength();
            cout << endl << "The width is: " << getwidth();
            cout << endl << "The height is: " << height;
        }
        
        double area(){
            double a = 2*(getlength() * getwidth())
            + 2*(getlength()*height) + 2*(height*getwidth());
            cout << endl << "The area is: " << a;
            return a;
        }
        
        double getheight(){
            return height;
        }
        
        void setheight( double h ){
            height = h;
        }
            
};



//In the main function, create two box objects, with different length, width and height and
//compute the area and volume. Also print the details using the print method.


int main()
{
    cout << endl << "BOX1:" ;
    Box box1(1,1,1);
    box1.area();
    box1.Volume();
    box1.print();
    
    cout << endl << "BOX2:";
    Box box2(2,2,2);
    box2.area();
    box2.Volume();
    box2.print();
    return 0;
}