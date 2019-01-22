#include <iostream>

using namespace std;

int main(){
	int gender, age;
	cin >> gender >> age;
	switch (gender){
		case 1:
			if(age >= 18) cout << "You are marriageable";
			else  cout << "You are NOT marriageale";
			break;
		case 2:
			if(age >= 16) cout << "You are marriageable";
			else cout << "You are NOT marriageable";
			break;
	} 
}
