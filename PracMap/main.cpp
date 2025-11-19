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
	for (auto d : vEne) {
		mapEne.emplace(d.name, d);
	}
	cout << "エネミーリスト" << endl;
	for (auto d : mapEne) {
		//d: pair型の変数（firstメンバがキー）
		cout << d.first << endl;
	}
	cout << "エネミー名を入力＞";
	string in;
	cin >> in;
	if (mapEne.count(in)) {
		//添え字を使った要素の参照
		cout << "Name:" << mapEne[in].name << endl
			<< "HP:" << mapEne[in].hp << endl
			<< "Atk:" << mapEne[in].atk << endl
			<< "Def:" << mapEne[in].def << endl;
		auto itr = mapEne.find(in);
		//イテレータを使った要素の参照
		cout << "Name:" << itr->second.name << endl
			<< "HP:" << itr->second.hp << endl
			<< "Atk:" << itr->second.atk << endl
			<< "Def:" << itr->second.def << endl;
	}
	else {
		cout << "そのエネミーは存在しません" << endl;
	}
	return 0;
}