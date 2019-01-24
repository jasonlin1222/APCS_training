#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int whi = -1, bhi = 101, score[20], stun;
	cin >> stun;
	for(int i = 0; i < stun; i ++){
		cin >> score[i];
	}
	sort(score, score + stun);
	for(int i =0; i < stun; i++){
		if(score[i] > whi && score[i] < 60){
			whi = score[i];
		}
		if(score[i] < bhi && score[i] >= 60){
			bhi = score[i];
		}
	}
	for(int i = 0; i < stun -1; i ++){
		cout << score[i] << ' ';
	}
	cout << score[stun -1] << endl;
	if(whi == -1) cout << "best case" << endl;
	else cout << whi << endl;
	if(bhi == 101) cout << "worst case" << endl;
	else cout << bhi << endl;
}
