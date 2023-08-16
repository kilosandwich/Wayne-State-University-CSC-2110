/******************************************************************************
Given an integer array “nums” and an integer “val”, remove all occurrences of “val”
in nums in-place. The order of the elements may be changed. Then return the
number of elements in “nums” which are not equal to val.
Consider the number of elements in “nums” which are not equal to “val” be k, to get
accepted, you need to do the following things:
Change the array “nums” such that the first k elements of “nums” contain the
elements which are not equal to “val”. The remaining elements of “nums” are not
important as well as the size of “nums”.
Return k.

*******************************************************************************/
#include <iostream>

using namespace std;

void display(int arr[], int n, int val){
    cout << "{ ";
    for(int i =0; i<n;i++){
        if(i != (n-1)){
            //remove all occurences of val
            if(arr[i] != val){
                cout << arr[i] << ", ";
            }else{
                cout << " , ";
            }
        }else{
            if(arr[i] != val){
                cout << arr[i];
            }else{
                cout << "";
            }

        }
        
    }
    cout << " }";
}

int nums_remover(int arr[], int n, int val){
    int temp = 0; //this is known as 'k in the assignment'
    //sort the array
    for (int j=0; j<n;j++){
        for(int i=0; i<(n-1); i++){
            if(arr[i]==val){
     
                swap(arr[i], arr[i+1]);
                    
            }
        }
    }
    //count the number of non val values
     for(int i=0; i<n;i++){
         if(arr[i] != val){
             temp++;
         }
     }
     cout << temp << ", nums - ";
     //print the array except for val
     display(arr,n,val);
     return temp;//return k
}



int main()
{
    int arr1[] = {3,2,2,3};
    int arr2[] = {5,6,5,5,3,2,5};
    int val = 3;
    nums_remover(arr1,4,3);
    nums_remover(arr2,7,5);
    return 0;
}
