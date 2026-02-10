#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double c;
    int minF, maxF, step;
    cin >> minF >> maxF >> step;
    for (int f = minF; f <= maxF; f += step) {
        c = (f - 32) * (5.0 / 9.0);
        cout << f << "\t" << (int)c << endl;
    }
    return 0;
}
