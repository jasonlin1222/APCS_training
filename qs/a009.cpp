#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char in[10000];
	while(cin >> in){
		char ou[10000] = {0};
		for(int i = 0; i < strlen(in); i++){
			ou[i] = (char)(in[i]-7);
		}	
		for(int i = 0; i < strlen(ou); i++){
			cout << ou[i];
		}
		cout << endl;
	}
}
