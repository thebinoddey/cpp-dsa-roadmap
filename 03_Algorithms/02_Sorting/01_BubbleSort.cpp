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

void BubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[i], arr[j]);
            }  
        }
    }
}

void BubbleSortOptimized(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        int swaps=0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaps++;
            }
        }
        if(swaps==0) break;
    }
}


int main(){
    vector<int> arr = {1,5,7,4,2,8};
    BubbleSort(arr);
    print(arr);
    BubbleSortOptimized(arr);
    print(arr);

}