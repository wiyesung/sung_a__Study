#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    double arr[31];
    ifstream fin("sort_before.txt");
    ofstream fout("sort_before.txt");

    for(int i=0; i<31; i++){
        fin >> arr[i];
    }
    sort(arr, arr+31, greater<double>() ); //기본은 오름차순. 내림차순 하려면 세번째 추가. 배열변경
    for(int i=0; i<31; i++){
        fout << arr[i] << endl;
    }
    fin.close();
}