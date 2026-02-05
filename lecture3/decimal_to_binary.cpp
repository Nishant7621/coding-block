#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cout << "Enter Number: ";
    cin >> a;

    vector<int> l;

    while (a > 0) {
        int rem = a % 2;
        l.push_back(rem);
        a = a / 2;
    }

    for (int i = l.size() - 1; i >= 0; i--) {
        cout << l[i] << " ";
    }

    return 0;
}
