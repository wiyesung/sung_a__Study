#include <iostream>
#include <iostream>
using namespace std;

int main() {
    int T=0;
    cin >> T;
    int R=0;
    string S;
    for(int i=0; i<T; i++){
        cin >> R >> S;
        for(int j=0; j<S.length(); j++){
            string ex;
            ex = S[j];
            for(int k=0; k<R; k++){
                cout << ex;
            }
        }
        cout << endl;
    }

}