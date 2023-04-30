#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int M;
    cin >> M;
    int i=0, j=0, k=0;
    int ba[]={0, 0, 0, 0, 0};
    for(int a=1; a<=M; a++){
        cin >> i >> j >> k;
        for(int b=i; b<=j; b++){
            ba[b-1]=k;
        }
    }
    for(int a=0; a<5; a++){
        cout << ba[a] << " ";
    }
   
    
}