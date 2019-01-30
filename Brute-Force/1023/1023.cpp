#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float n=0,temp;
	for(int i=0;i<12;i++){
		cin >> temp;
		n+=temp;
	}
	cout << "$" << n/12;
	return 0;
}
