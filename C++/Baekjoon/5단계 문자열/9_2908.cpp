#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string Q;

    for(int i=2; i>=0; i--) {
        if(a[i]>b[i]){
            Q=a; break;
        }
        else if(a[i]<b[i]){
            Q=b; break;
        }
    }
    cout << Q[2] << Q[1] << Q[0];
}