#include <iostream>
using namespace std;

int main() {
    //2D Array
    int A[2][3] = {{1,2,3},{4,5,6}}; //represented in 2D but memory allocation is done in 1D

    //-----------------------------------------------------------------
    //Second Method -> in heap
    int* B[3];
    B[0] = new int[3]; //creates array of size 3 in heap memory and B[0] points to the first element of that array
    B[1] = new int[3]; //creates array of size 3 in heap memory and B[1] points to the first element of that array

    //-----------------------------------------------------------------
    //Third Method
    int** C; //C is in stack
    C = new int*[3]; //creates array of size 3 in heap memory and C points to the first element of that array
    C[0] = new int[3]; //creates array of size 3 in heap memory and C[0] points to the first element of that array
    C[1] = new int[3]; //creates array of size 3 in heap memory and C[1] points to the first element of that array
}


//----------------------------------------------------------------

/*

*/