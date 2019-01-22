#include<iostream>

using namespace std;

int main(){
	int m, total = 0;
	while(cin >> m){
		total += m;
		cout << "total: " << total << endl;
		if(total >= 100000){
			cout << "buy";
			break;
		}
	}
}
