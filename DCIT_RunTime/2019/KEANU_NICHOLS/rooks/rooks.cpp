#include <iostream>
#include <fstream>
//Keanu Nichols 816004003 Advanced
using namespace std;

int main(){
    ifstream fin;
    fin.open("input.txt");
    fout.open("output.txt");
    int size;
    fin >> size;
    int arr[size][size];
    int sum = 0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            fin >> arr[i][j];
        }
    }

    for(int i=0;i<size;i++){
        for()
    }
    fin.close();
    fin.close();
}