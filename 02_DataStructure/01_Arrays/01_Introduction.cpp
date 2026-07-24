#include <iostream>
using namespace std;

int main() {
    int arr[5]; //declaration of array -> Garbage values
    int brr[5] = {1, 2, 3, 4, 5}; //declare + initialise values
    int crr[5] = {1, 2}; //declare + initialise values -> rest of the values will be 0
    int drr[] = {1, 2, 3, 4, 5}; //declare + initialise values -> size of array will be automatically calculated

    //Accessing
    cout << brr[1] << endl; //prints element at index 1 = 2
    cout << 1[brr] <<endl; //prints element at index 1 = 2
    cout << *(brr + 2) << endl; //prints element at index 2 = 3
}


//----------------------------------------------------------------

/*
What is an array?
An array is a collection of elements of the same data type that are stored in contiguous memory locations. It allows you to store multiple values in a single variable, and you can access each element using an index.
In C++, arrays are declared by specifying the data type, followed by the array name and the size of the array in square brackets. For example, int arr[5]; declares an array of integers with a size of 5.
*/