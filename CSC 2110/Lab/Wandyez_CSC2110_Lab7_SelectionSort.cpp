/******************************************************************************

Sort the array using selection sort technique : 67, 23, 12, 45, 6, 13


*******************************************************************************/
#include <iostream>

using namespace std;
void display(int arr[], int n){
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
}


void selection_sort(int arr[], int n){
    for(int i=0; i<n;i++){
        int temp = i;
        //find the minimum of the remaining list
        for(int j=i; j<n; j++){
            if(arr[j] < arr[temp]){
                temp = j;
            }
        }
        //place the new minimum in position
        swap(arr[i], arr[temp]);
    }
    
    display(arr, n);
}

int main()
{
    int arr1[] = {67, 23, 12, 45, 6, 13};
    selection_sort(arr1, 6);

    return 0;
}