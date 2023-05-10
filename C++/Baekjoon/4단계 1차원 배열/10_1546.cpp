#include <iostream>
using namespace std;

int main() {
    int N=0;
    cin >> N;
    int score [1000] = {0};
    int max = 0;
    double b=0;
    double a = 0;
    for(int i=0; i<N; i++){
        cin >> score [i];
    }
    max = score[0];
    for(int i=1; i<N; i++){
        if(max<score[i]){
            max = score[i];
        }
    }
    for(int i=0; i<N; i++){
        a = (double)score[i]/max*100;
        b = b + a;
    }
    cout << (double)b/N << endl; 
    
    
    
}