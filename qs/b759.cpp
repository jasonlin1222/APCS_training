#include<iostream>
#include<queue>
#include<string.h>
#include<cmath>
using namespace std;

int main(){
	char in[100000];
	queue<char*> ou;
	cin >> in;
	for(int i = 0; i < strlen(in); i ++){
		for(int j = 0; j < strlen(in); i++){
			ou.push(in[abs(j-i)]);
		}
		for(int k = 0; k < strlen(in); k++){
			ou.push(in[k])
			cout << ou.front();
			ou.pop();
		}
	}
}
