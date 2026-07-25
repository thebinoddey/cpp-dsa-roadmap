#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;

    //Whenever ptr is ptr++ or ptr--, it increases/decreases as per dtype
    cout << ptr << endl; //0x61ff08
    ptr++;
    cout << ptr << endl; //0x61ff0c (8+4 = c)
}