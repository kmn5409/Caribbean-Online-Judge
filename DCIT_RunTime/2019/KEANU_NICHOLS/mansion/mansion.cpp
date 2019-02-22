#include <iostream>
#include <fstream>
Keanu Nichols 816004003 Advanced


using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    int n,w;
    fin.open("input.txt");
    fout.open("output.txt");
    fin >> n >> w;
    int arr[n];
    for(int i=0; i<n; i++){
        fin >> arr[i];
        cout << arr[i] << "\n";
    }
    long long int sum,max,count,pos;
    max = arr[0];
    pos = 1;
    for(int i=0; i<n;i++){
        count = 1;
        sum = arr[i];
        for(int j=i+1; j<n; j++){
            if(count > w-1)
                break;
            sum+=arr[j];
            count++;
        }
        if(sum > max){
            max = sum;
            pos = i;
        }
        //cout << "Count: " << count << " " << w << endl;
        //break;
    }
    cout << "MAX: " << max << "\n";
    //fout >> max;
    string word = "Hello1";
    fout << max << " " << pos+1;
    cout << "Position: " << pos+1 << "\n";
    fin.close();
    fout.close();

    return 0;
}