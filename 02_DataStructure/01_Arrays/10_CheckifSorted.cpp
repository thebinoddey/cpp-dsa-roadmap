#include <iostream>
using namespace std;

bool isSorted(int arr[], int length){
    for(int i=0; i<length-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

//=======================================


int main() {
    int arr[6] = {1,2,3,4,5,6};
    int arr2[6] = {7,8,1,10,4,6};
    int brr[10] = {1, 2, 3, 4, 5, 16, 17, 18, 19};
    cout << isSorted(arr, 6) << endl;
    cout << isSorted(arr2, 6) << endl;

    // cout << Insert(brr, 10, 15) << endl;

}

