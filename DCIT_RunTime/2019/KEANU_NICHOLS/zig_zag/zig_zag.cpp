#include <iostream>
#include <fstream>
//Keanu Nichols 816004003 Advanced

using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");
    int r;
    fin >> r;
    string word;
    fin >> word;
    int size = word.size();
    cout << "\n";
    for(int i=0; i<size; i++)
        cout << word[i] << " " << i << "\n";
    char arr[100][100];
    int end = 3;
    int pos = 0;
    int j=0;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++)
            arr[i][j] = '0';
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<end;j++){
            arr[i][j] = word[pos];
            pos++;
        }
        end+=3;
    }
    cout << "Answer:\n";
    for(int i=0;i<3;i++){
        cout << arr[0][i] << " ";
    }
    cout << "\n";
    for(int i=0;i<5;i++){
        cout << arr[1][i] << " ";
    }
    for(int i=0;i<5;i++){
        cout << arr[1][i] << " ";
    }
    cout << "\n\n";
    fin.close();
    fout.close();

    return 0;
}