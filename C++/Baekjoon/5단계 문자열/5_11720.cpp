#include <iostream>
#include <string>
using namespace std;

int main() {
    int N=0;
    string s;
    cin >> N;
    cin >> s;
    int sum = 0;
    for(int i=0; i<N; i++){
        sum = sum + s[i] - '0'; 
    }
    cout << sum;
}