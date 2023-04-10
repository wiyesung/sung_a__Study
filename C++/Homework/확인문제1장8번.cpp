#include <iostream>
using namespace std;

int main() {
    int alpha = 0;
    int bravo = 0;
    for(int i=0; i<=100; i++){
        alpha = alpha + i;
        if(i%3==0){
            bravo = bravo + i;
        }
    }
        cout << "1~100 사이의 정수합은" << alpha << "이고" << endl;
            cout << "3의 배수의 합은" << bravo << "입니다." << endl; 
    
    return 0;
}