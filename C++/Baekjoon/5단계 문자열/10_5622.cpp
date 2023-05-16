#include <iostream>
using namespace std;

int main() {
    string C;
    cin >> C;
    int arr[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    int sum=0;

    for(int i=0; i<C.length(); i++){
        int index = C[i] - 65; //아스키코드 이용
        sum = sum + arr[index];
    }
    cout << sum;
}