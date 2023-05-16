#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char source[] = "source.txt";
    ifstream fin(source);
    if(!fin){
        cout << source << " 열기 오류";
        return 0;
    }
    ofstream fout("copy.txt");
    if(!fout){
        cout << "파일열기실패";
        return 0;
    }

    int count = 0;
    int c=0;
    while ((c=fin.get()) !=EOF) {
        cout << (char)c;
        fout << (char)c;
        count++;
    }
    cout << "---------------------------" << endl;
    cout << "읽은 바이트 수는 " << count << endl;
    fin.close();
    fout.close();
}