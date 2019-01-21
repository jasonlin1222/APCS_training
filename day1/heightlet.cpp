#include<iostream>

using namespace std;

int main(){
	int height;
	char let;
	while(cin >> height >> let){
		cout << "\"-" << 185-height <<"cm\" " << (char)(let+32) << endl;
	}
}