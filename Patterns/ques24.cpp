// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=5;
    
    for(int i =0;i<n;i++) {
        for(int j=1;j<n-i;j++) {
            cout<<"   ";
        }
        for(int j=0;j<=i;j++){
            cout<<i+1<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<i+1<<"  ";
        }
        cout<<endl;
    }

    return 0;
}