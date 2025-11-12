#include<vector>
#include<map>
#include<iostream>
using namespace std;
typedef struct {	//構造体Enemy
	string name;
	int hp, atk, def;
} Enemy;
int main() {
	//構造体Enemy型のデータを管理するvector配列を宣言して初期化
	vector<Enemy> vEne{ {"Slime",10,5,8},
		{"Wolf",20,30,1},{"Spider",30,15,5} };
	//キー：文字列 値：Enemy構造体の連想配列mapEneを宣言
	map<string, Enemy> mapEne{};


	return 0;
}