#include <iostream>
using namespace std;

void Reverse(int arr[], int length){
    int arr2[10];
    for(int i=length-1, j=0; i>=0; i--,j++) {
        arr2[j] = arr[i];
    }
    for(int i=0; i<length; i++) {
        arr[i] = arr2[i];
    }
}

void ReverseUsingSwap(int arr[], int length){
    for(int i=0, j=length-1; i<j; i++, j--){
        swap(arr[i], arr[j]);
    }
}

void leftShift(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[length - 1] = 0;
}

void leftRotate(int arr[], int length) {
    int temp = arr[0];

    for (int i = 0; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[length - 1] = temp;
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1,2,3,4,5,6};
    int arr2[10] = {7,8,9,10,11,12};
    int length = 10;

    //Reversing Array
    Reverse(arr, 10);
    printArray(arr,10);

    //=====================================================================
    //Left Shift and Rotate
    /*
    arr = [1,2,3,4]
    arr = [2,3,4,0] - left shift
    arr = [2,3,4,1] - left rotate
    */
    leftShift(arr, 10);
    printArray(arr,10);

    leftRotate(arr2, 10);
    printArray(arr2,10);
}

