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

void InsertionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=1; i<n; i++){
        
        int j = i;
        
        while(j > 0 && arr[j] < arr[j-1]) {
            swap(arr[j-1], arr[j]);
            j--;
        }  
    }
}

int main(){
    vector<int> arr = {1,5,7,4,2,8};
    InsertionSort(arr);
    print(arr);

}