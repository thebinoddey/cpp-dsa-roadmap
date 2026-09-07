#include <iostream>
#include <vector>
using namespace std;

void sortInWave(vector<int>& arr) {
        // code here
        int odd = 0; int even = 1;
        int n = arr.size();
        for(int odd = 0, even = odd+1; even<n; odd = odd+2, even = even+2){
            swap(arr[odd], arr[even]);
        }
    }
int main(){
    vector<int> arr = {1,3,4,5,6,7};
    sortInWave(arr);
    for(int ele : arr){
        cout << ele << " ";
    }
}