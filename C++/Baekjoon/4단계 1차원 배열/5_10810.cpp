#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int M;
    cin >> M;
    int i, j, k;
    int ba[101]={0};
    while (M--) {
        cin >> i >> j >> k;
        for(int a=i; a<=j; a++){
            ba[a-1] = k;
        }
    }
    for(int a=0; a<5; a++){
        cout << ba[a] << " ";
    }
   
    
}