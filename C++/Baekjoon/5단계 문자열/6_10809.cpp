#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<alphabet.length(); i++){
        cout << (int)S.find(alphabet[i]) << " ";
    }
}