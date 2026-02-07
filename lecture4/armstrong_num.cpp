#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N1;
    int N2;
    cin>>N1>>N2;
    

    for (int num = N1; num <= N2; num++) {
        int temp = num;
        int digits = 0;
        
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = num;
        int sum = 0;

        while (temp > 0) {
            int d = temp % 10;
            sum += pow(d, digits);
            temp /= 10;
        }

        if (sum == num) {
            cout << num << endl;
        }
    }

    return 0;
}
