#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int times, num[100];
	cin >> times;
	for(int i = 0; i < times; i ++){
		cin >> num[i];
	}
	sort(num,num+times);
	cout << num[0] << num[times];
}
