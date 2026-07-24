#include <iostream>
using namespace std;

int main() {
    //Static Array -> Size can't be modified
    int arr[5]; //creates array of size 5 in stack memory

    //-----------------------------------------------------------------

    //Dynamic Array -> Size can be modified
    int* p; // p is in stack
    p = new int[5]; //creates array of size 5 in heap memory and p points to the first element of that array

    //in C
    p = (int*)malloc(5 * sizeof(int)); //creates array of size 5 in heap memory and p points to the first element of that array

    //-----------------------------------------------------------------

    // Don't forget to free the dynamically allocated memory. If not released, it causes MEMORY LEAK PROBLEM
    delete[] p; // in C++ - deallocates memory
    // free(p); // in C - deallocates memory
}


//----------------------------------------------------------------

/*
Size of an array is decided at compile time in C and C++. This means we need to specify size.

But in C++ we can create dynamic arrays, means size decided at run time.
For that, we need HEAP memory (need a pointer) using keyword 'new'.

But how to do it in C?
We use malloc() and free() functions to create dynamic arrays in C. But in C++ we use new and delete keywords.
*/