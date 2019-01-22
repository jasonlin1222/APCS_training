#include<iostream>

using namespace std;

int main(){
	int h, m;
	cin >> h >> m;
	if(h < 17){
		if(h == 7 && m >= 30){
			cout << "at school" << endl;
		}else if(h > 7){
			cout << "at school" << endl;
		}else cout << "not at school";
	}else cout << "not at school" << endl;
}
