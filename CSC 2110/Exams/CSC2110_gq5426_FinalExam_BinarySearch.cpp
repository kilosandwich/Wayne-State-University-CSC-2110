/*
=-=-=-=-=-=-=-=-=-=
CSC 2110 Final Exam
Write a C++ program to search for element
10 in {10, 2, 40, 4, 3} array. Use Binary
Search algorithm.

=-=-=-=-=-=-=-=-=-=
*/
#include <iostream>

using namespace std;



//usually the binary search requires the data to be organized
//however, organizing this data would return the wrong index for that value of the initial array


int binary_search(int arr[], int target,int start, int end){
    int mid = (start+end)/2;
    //cout << " " << mid;
    if(target == arr[start]){
        return start;
    }else if(target == arr[end]){
        return end;
    }else if(target == arr[mid]){
        return mid;
    }else if ((start != end) and (start != mid) and (end != mid)){
        int left = binary_search(arr, target, start, mid);
        int right = binary_search(arr, target, mid, end);
        
        //check for the error code -1
        if (left > right){
            return left;
        }else{
            return right;
        }
    }else{
        //have to return something or the recusion won't work
        return -1;//this will be an error code
    }

}

void display(int arr[], int n){
    for (int i =0; i <n; i++){
        cout << " " << arr[i];
    }
    
}

//lazy bubble sort
void sorter(int arr[], int n){
    for (int i =0; i <n; i++){
        for (int j=0; j<(n-i); j++){
            if(arr[j+1] > arr[j]){
                swap(arr[j+1], arr[j]);
            }

        }
    }
    cout << endl;
    //display(arr, n);
}

//binary search 
int binary_searcher(int arr[], int targetin,int startin, int endin){
    int start = startin;
    int end = endin;
    int target = targetin;
    sorter(arr, end);
    int mid = (start + end) /2;
    while((arr[start] != target) and (arr[end] != target) and (arr[mid] != target)){
        int mid = (start + end) /2;
        if (arr[mid] > target){
            start = mid;
        }else{
            end = mid;
        }
    }
    
    if(target == arr[start]){
        return start;
    }else if(target == arr[end]){
        return end;
    }else if(target == arr[mid]){
        return mid;
    }
}

int main()
{
    int a[] = {10, 2, 40, 4, 3};
    int t = 10;
    cout << endl << "Remember, Array indexes start at 0";
    cout << endl << "The target " << t << " is located at index: " << binary_search(a,t,0,5);
    cout << endl << "array used:";
    display(a,5);
    
    cout << endl << "The target  " << t << "is located at index: " << binary_searcher(a,t,0,5);
    cout << endl << "Array used:";
    
    display(a,5);

    return 0;
}