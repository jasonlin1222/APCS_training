#include<iostream>

using namespace std;

int main(){
	int n, m, grade[100], num[100];
	cin >> n >> m;
	for(int i = 0; i < n; i ++){
		cin >> grade[i];
	}
	for(int i = 0; i < m; i ++){
		cin >> num[i];
	}
	for(int i = 0; i < m; i ++){
		cout << grade[i] << endl;
	}
}
