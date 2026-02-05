#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a,b;
    cin>>a>>b;
    while(b!=0){
        int temp= b;
        b=a%b;
        a=temp;
        
    }
    cout<<a;
    return 0;
}