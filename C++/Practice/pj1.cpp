#include <iostream>
#include <string>
using namespace std;
int main() {
    string song("Falling in love with you");
    string answer("Elvis presley");
    string singer;
    cout << song + "를 부른 가수는 (힌트 : 첫 글자는" << answer[0] << ")?";
    getline(cin, singer);
    if(answer == singer){
        cout << "맞았습니다";
    }
    else
        cout << "틀렸습니다" << answer << "입니다.";
}