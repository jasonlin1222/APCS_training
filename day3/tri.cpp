#include<iostream>

using namespace std;

int main(){
	int la;
	cin >> la;
	for(int i = 0; i < la; i ++){
		for(int j = 0; j < i; j ++){
			cout << ' ';
		}
		for(int j = 0; j < la-i; j++){
			cout << '*';
		}
		cout << endl;
	}
}
