#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){
	char in[1000+10];
	int tmpA = 0, tmpB = 0;
	cin >> in;
	for(int i = 0; i < strlen(in); i += 2){
		tmpA += in[i] - '0';
		tmpB += in[i+1] - '0';
	}
	cout << abs(tmpA - tmpB) << endl;
	
}
