#include <iostream>
#include <string>
using namespace std;

int main() {
    string b;
    int sum = 0; 
    cin >> b;
    for (char i : b) {
        sum = sum * 2 + (i - '0');
    }
    
    cout <<sum<< endl;

    return 0;
}
