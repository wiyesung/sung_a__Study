#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("a.txt");
    if(!fin) {cerr << "파일을 열 수가 없어요"; return 0;}
    string atxt;
    getline(fin, atxt, '&');
    cout << atxt << endl << endl; 
    fin.close();

    string f; 
    int count=0;
    int sindex =0;
    while (true) {
        int findex = atxt.find(f, sindex);
        if(findex == -1) break;
        count ++;
        sindex = findex + f.length();
    }
    cout << count << "개 찾았습니다." << endl;

}