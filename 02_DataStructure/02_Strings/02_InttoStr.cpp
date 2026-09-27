#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    string s;

    while(n!=0){
        int digit = n%10;
        char ch = digit + '0';
        s = ch + s;
        n/=10;
    }

    //Built-in function
    string str = to_string(n);
    cout << "The string representation of the integer is: " << str << endl;

    //Built in for str -> int
    int n = stoi(str); //string to int
    int x = stoll(str); //string to long long

    return 0;
}