#include <iostream>
using namespace std;

int main() {
    int N, M;
    int i=0, j=0;
    int A[100];
    cin >> N >> M;
    for(int a=1; a<=100; a++) {
        A[a-1] = a;
    }

    for(int a=0; a<M; a++) {
        cin >> i >> j;
        int pp=0;
        pp = A[i-1];
        A[i-1] = A[j-1];
        A[j-1] = pp;
    }
    
    for(int a=0; a<N; a++) {
        cout << A[a] << " ";
    }

    
}