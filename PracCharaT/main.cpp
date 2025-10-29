#include"chara.h"
#include"player.h"
#include<iostream>
#include<vector>
using namespace std;
int main() {									//Hp Atk Def Sp
	//Player* pPlayer = new Player(100,50,20,30);

	//要素数0のPlayerクラスのポインタ配列pPlayerを宣言
	vector<Player<double>*> pPlayer{};
	pPlayer.push_back(new Player<double>(100, 50.2, 20.5, 30));
	pPlayer.push_back(new Player<double>(300, 70.3, 40.6, 50));
	
	for (int i = 0; i < pPlayer.size(); i++) {
		cout << "Playerの状態" << endl
			<< "HP: " << pPlayer[i]->getHp() << endl
			<< "SP: " << pPlayer[i]->getSp() << endl
			<< "Atk:" << pPlayer[i]->getAtk() << endl
			<< "Def:" << pPlayer[i]->getDef() << endl;
	}
	//pPlayer配列の先頭の位置情報をイテレータitrに格納
	auto itr = pPlayer.begin();
	//イテレータitrが配列末尾に来るまでループ
	while (itr != pPlayer.end()) {
		//イテレータitrが指す場所の中身（アドレス）を指定してdelete
		delete *itr;
		//イテレータitrが指す場所の配列要素を削除してitrを更新
		itr = pPlayer.erase(itr);
	}
	return 0;
}