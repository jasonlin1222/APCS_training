#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char in[10000];
	int sum =0;
	cin >> in;
	for(int i = 0; i < strlen(in); i++){
		sum += in[i] - '0';
	}
	cout << sum << endl;

}
