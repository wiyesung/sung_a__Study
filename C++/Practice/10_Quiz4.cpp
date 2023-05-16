#include <iostream>
using namespace std;

template <class T>
T bigger (Tx, Ty) {
    return (x>y) ? x:y;
}

int main() {
    int a, b;
    cout << "두 정수 입력: ";
    cin >> a >> b;
    cout << "큰 정수는 " << bigger(a, b) << endl << endl;
}