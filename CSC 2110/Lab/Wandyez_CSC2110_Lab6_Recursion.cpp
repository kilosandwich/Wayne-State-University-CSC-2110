/******************************************************************************

Write a C++ program to Find the maximum element in an
array using recursion.
- The base case for the problem should be if there is
only one element in the array return it.
*******************************************************************************/
#include <iostream>

using namespace std;
//the plan, the function will compare both ends
//If this doesn't work, just have a length input, a current max input
//and create a new max? Pretty sure that's just a for loop. 

double maxArray(double arrayinput[], int start, int end){

    //mission acomplished, there are no more halfs to half because there
    //is only one input in the array. Return this value so that
    //it can be compared against the other halves. 
    if (start == end){
        return arrayinput[start];
    }
    
    //the plan, split up the array infinitely into smaller arrays
    //until the arrays return two values, then compare those values,
    //and return them
    //because the halfs are infinitely called until they return a value
    //then the values will keep comparing against each other until they
    //reach the final comparison of each half. 
    
    //middle value will increasingly shrink as the halves get closer
    int mid = (start + end)/2;
    
    int leftmax = maxArray(arrayinput, start, mid);
    //Change the mid value so it is recursive. 
    int rightmax = maxArray(arrayinput,mid +1, end);
    
    //the array has been subdivided into two arrays
    //each has a returned value, return the max. 
    if (leftmax > rightmax){
        return leftmax;
    }else{
        return rightmax;
    }
}

int main()
{
    double array[] = {200,1,99,2,3,4,5,300,6,7,98,9,10,101};
    int size = sizeof(array) / sizeof(array[0]);
    cout << maxArray(array, 0, size -1);

    return 0;
}