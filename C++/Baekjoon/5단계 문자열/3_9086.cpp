#include <iostream>
#include <iostream>
using namespace std;

int main() {
    int T = 0;
    cin >> T;
    for(int i=0; i<T; i++){
        string a;
        cin >> a;
        cout << a[0] << a[a.length()-1] << endl;
    }
}