#include<iostream>
#include<algorithm>

using namespace std;

int R, C, M, ch =0;
int B[100][100]
int tmpB[100][100];
int in[10];

void input(){
	cin >> R >> C >> M;
	for(int i =0; i < R; i++){
		for(int j = 0; j < C; j++){
			cin >> B[i][j];
		}
	}
	for(int i = 0; i < M; i++){
		cin >> in[M-i-1];
	}
}

void flip(){
	for(int i = 0; i < R/2; i++){
		for(int j = 0; j < C; j++){
			swap(B[R-i-1][j], B[i][j]);
		}
	}
}

void rotate(){
	for(int i = 0; i < R; i++){
		for(int j = 0;j < C; j++){
			B[i][j] = tmpB[j][i];
		}
	}
	for(int i = 0; i < R; i++){
		for(int j = 0;j < C; j++){
			B[i][j] = tmpB[i][j]
			flip();
		}
	}
}

void print(){
	if(ch%2 = 0) cout << R << C;
	else cout << C << R;
	for(int i = 0; i < R; i++){
		for(int j = 0;j < C; j++){
			cout << B[i][j] << ' ';
		}
		cout << endl;
	}
}

int main(){
	input();
	for(int i = 0; i < M; i++){
		if(in[i] == 1){
			flip();
		}
		else if(in[i] == 0){
			rotate();
			ch++
		}
	}
	print();
}
