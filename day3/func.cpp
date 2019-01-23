#include<iostream>

using namespace std;

int po(int a, int b){
	if(b == 1) return a;
	else return a*po(a, b-1);
}

int main(){
	int a,b;
	cin >> a >> b;
	cout << po(a,b) << endl;
}
