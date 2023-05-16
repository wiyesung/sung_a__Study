#include <iostream>
using namespace std;

int main() {
    int N=0, M=0;
    cin >> N >> M;
    int ex[101]={0};
    int A[101];
    for(int a=1; a<101; a++){
        A[a]= a;
    }

    int first=0, end=0, mid=0;
    for(int a=0; a<M; a++){
        cin >> first >> end >> mid;        
        for(int b=mid; b<=end; b++){
            A[first-1] = A[b];
            first++;
        }
        for(int a=0; a<N; a++){
        cout << A[a] << " ";
    } 
    }

      /*for(int a=0; a<N; a++){
        cout << A[a] << " ";
    }*/

}