#include <iostream>
using namespace std;

int main(){
    int x;
    x = 65;

    int* ptr = &x; // pointer variable that stores the address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value stored in ptr: " << *ptr << endl; //dereferencing operator
    cout << "Address stored in ptr: " << ptr << endl;

    //Pointer to pointer
    int** ptr2 = &ptr; //ptr2 stores address of ptr
    cout << &ptr;
    cout << ptr2;

    //Null Pointer
    int* ptr = NULL; //*ptr gives segmentation fault



}