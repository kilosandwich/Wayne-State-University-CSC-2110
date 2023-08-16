/******************************************************************************

Write a program in C++ to sort the array using quick sort technique and print
out the sorted result:
Array = 45, 78, 12, 11 , 33, 7, 19, 2, 13


*******************************************************************************/
#include <iostream>

using namespace std;

//this is a recursive function, it works on progressively smaller arrays,
//as a result the array operates between the 'high ' and 'low inputs' on the inputted array 'arr'
int partition(int arr[], int low, int high){
    int pivot = arr[high]; //the pivot is at the very end of the array
    
    int i = (low-1); //we are starting to count 
    
    //high needs to be -1 because arrays start at 0
    for (int j=low; j< high -1; j++){
        
        //if the value of the array in question is less than the pivot, it needs to be swapped with the pivot
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}

//this function recursively divides the array over and over. 
void quickSort(int arr[], int low, int high){
    
    //the function will NOT work if low and high are in the wrong place. 
    if(low<high){
        //pick your pivot. 
        int pi = partition(arr,low, high);
        
        //sort elements before partition and after partiion
        //this is recursive on either side of the array
        quickSort(arr,low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

void display(int arr[], int n){
    cout << endl << "{ ";
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
    
    cout << "}";
}
int main()
{
    int A[] = {45, 78, 12, 11 , 33, 7, 19, 2, 13};
    quickSort(A,0,9);
    display(A,9);


    return 0;
}