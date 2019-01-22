#include<iostream>
#include<string>

using namespace std;

int main(){
	string ou;
	int a, b;
	cin >> a >> b;
	ou = max(a,b)%min(a,b)==0?"Yes":"No";
	cout << ou << endl;
}
