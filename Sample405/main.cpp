#include"rat.h"
#include<iostream>
#include<vector>
using namespace std;
int main() {
	//Ratクラスのポインタ変数をvector配列にする
	vector<Rat*> vr;	//要素数は0
	//配列要素を3へ変更
	vr.resize(3);			//要素数は3(vr[0],vr[1],vr[2])
	Rat::showNum();
	vr[0] = new Rat();	//１匹目のネズミを生成
	vr[0]->squeak();		//１匹目のネズミが鳴く
	Rat::showNum();	//ネズミの数を表示(静的メンバ関数呼出)
	for (int i = 1; i < vr.size(); i++) {
		vr[i] = new Rat();	//i匹目のネズミを生成
		vr[i]->squeak();		//i匹目のネズミが鳴く
	}
	Rat::showNum();	//ネズミの数を表示(静的メンバ関数呼出)
	delete vr[0];			//１匹目のネズミ消去
	delete vr[1];			//２匹目のネズミ消去
	Rat::showNum();	//ネズミの数を表示(静的メンバ関数呼出)
	delete vr[2];			//３匹目のネズミ消去
	Rat::showNum();	//ネズミの数を表示(静的メンバ関数呼出)
	vr.clear();				//配列の全要素を削除(要素数は0)
	return 0;
}