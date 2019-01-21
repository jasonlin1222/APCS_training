#include <iostream>

using namespace std;
int price = 0, total = 1000;
int main(){
	cin >> price;
	do{
		total -= price;
		if (total <= 0){
			cout << "total = 0"; return 0;
		
		else {
			cout << total << endl;
			
		}
	}while(cin >> price);
}