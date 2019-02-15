#include <iostream>
//NOT ACCEPTED
//g++ 1848.cpp -std=c++11
using namespace std;


void fibo(int T){
    int n;
    long long int arr[10001];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    for(int i=3; i<10001; i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 10000;
    }
    for(int i=0; i<T; i++){
        cin >> n;
        cout << arr[n-2] << " " << arr[n-1] << " " << arr[n] << "\n";
    }
}
int main(int argc, char** argv){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    fibo(T);
    return 0;
}