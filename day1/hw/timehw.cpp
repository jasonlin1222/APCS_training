#include<iostream>

using namespace std;

int main(){
	int in, h, m, s;
	cin >> in;
	h=in/3600;
	m=(in-h*3600)/60;
	s=in-h*3600-m*60;
	cout << h << "hrs" << m << "min" << s << "sec" << endl;
}
