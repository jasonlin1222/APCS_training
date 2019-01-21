#include<iostream>

using namespace std;

int cac(int x){
	int tmp = x * (100 -x) * (3*x+5);
	cout << tmp << endl;
}

int main(){
	int x;
	cac(10);
	cac(30);
	cac(100);
}