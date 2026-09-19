#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int print(vector<int> &arr){
    for(int x: arr){
        cout << x << " ";
    }
    cout << endl;
}

void SelectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int min = arr[i], minIdx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main(){
    vector<int> arr = {1,5,7,4,2,8};
    SelectionSort(arr);
    print(arr);

}