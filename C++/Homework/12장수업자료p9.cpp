#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin1("a1.txt");
    if(!fin1){ cout << "a1읽기용 파일 열기 오류"; return 0; }
    ifstream fin2("a2.txt");
    if(!fin2){ cout << "a2읽기용 파일 열기 오류"; return 0; }
    ifstream fin3("a3.txt");
    if(!fin3){ cout << "a3읽기용 파일 열기 오류"; return 0; }

    ofstream fout("b.txt", ios::app);
    if(!fout){ cout << "추가쓰기용 파일 열기 오류"; return 0; }

    int c=0;
    while((c=fin1.get()) !=EOF){
        fout << (char)c;
    }
    fout << endl;
    while((c=fin2.get()) !=EOF){
        fout << (char)c;
    }
    fout << endl;
    while((c=fin3.get()) !=EOF){
        fout << (char)c;
    }
    cout << "파일 추가쓰기 완료" << endl;
    fin1.close();
    fin2.close();
    fin3.close();
    fout.close();
}