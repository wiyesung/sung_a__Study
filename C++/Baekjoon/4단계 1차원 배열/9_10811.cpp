#include <iostream>
using namespace std;

int main() {
    int N =0, M=0;
    int i=0, j=0;

    cin >> N >> M;
    
    //int aa[100];
    int* aa = new int[N];
    
    //int bb[100];
    int* bb = new int[N];

    for(int a=0; a<N; a++){
        aa[a]= a+1;
        bb[a]= a+1;
    }
 
    for(int a=0; a<M; a++){
        cin >> i >> j;
        int k=i;
        for(int b=j; b>=i; b--){
            aa[k-1] = bb[b-1];
            k++;
        }

        copy(aa, aa+N, bb);
    }
    for(int a=0; a<N; a++) {
        cout << aa[a] << " ";
    }

}