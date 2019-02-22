//#include <iostream>
#include <bits/stdc++.h> 


using namespace std;


void amount(long long num){
    long long int count = 0;
    if( ( (num*1.0)-2)/3 == int( (num-2)/3 ) )
        count+=1;
    
    cout << count + ( int(num/3)*2 ) << endl; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;
    amount(N);
    return 0;
}
