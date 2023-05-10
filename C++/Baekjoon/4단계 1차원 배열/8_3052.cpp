#include <iostream>
using namespace std;

int main() {
    int remainders[42]={0};
    int input, count=0;

    for(int i=0; i<10; i++){
        cin >> input;
        remainders[input%42]++;
    }
    for(int i=0; i<42; i++){
        if(remainders[i]!=0)  count++;
        
    }
    cout << count << endl;
}
