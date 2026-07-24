#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6};

    //Display
    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    
    //-----------------------------------------------------------------
    //Insert(x, index) -> Insert x at index
    int index = 5;
    int x = 10;
    for(int i=9; i>index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index] = x;
    //Time Complexity: O(n) -> because we need to shift elements to the right

    
    //-----------------------------------------------------------------
    //Delete(index) -> Delete element at index
    index = 5;
    for(int i=index; i<9; i++) {
        arr[i] = arr[i+1];
    }
    //Time Complexity: O(n) -> because we need to shift elements to the left


    //-----------------------------------------------------------------
    //Max or Min
    int max = arr[0] ;
    int min = arr[0];
    for(int i=0; i<9; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    //Time Complexity: O(n) -> because we have a loop that traverses
}

