#include"car.h"
#include<iostream>
#include<vector>
using namespace std;

int main() {
	//Carクラスのポインタをvectorの配列として宣言
	vector<Car*> vkuruma;	//この時点では要素数は０
		//new演算子を使ってインスタンスを生成する
		//生成したインスタンスのアドレスはpush_backを使って配列末尾に追加
		//vkuruma.push_back(new Car());
		//vkuruma.push_back(new Car());
	//resize:配列要素数を変更する関数
	vkuruma.resize(2);	//要素数は2となるが、各要素内の値は不定
	//範囲forを使って要素数ぶんのインスタンスを生成して、そのアドレスを格納
	for (auto &p : vkuruma) {
		p = new Car();	//new演算子の戻り値はアドレス
	}
	//各要素（インスタンスのアドレス値）からメンバ関数を呼び出す（アロー演算子）
	vkuruma[0]->setSpeed(40);
	vkuruma[0]->drive(1.5);
	vkuruma[1]->setSpeed(60);
	vkuruma[1]->drive(2.0);
		//newして使ったインスタンスはdeleteでメモリ解放
		//delete vkuruma[0];
		//delete vkuruma[1];
	//範囲forを使って各インスタンスのメモリを解放
	for (auto& p : vkuruma) {
		delete p;		//delete演算子の引数は各インスタンスの先頭アドレス
	}
	//配列要素をすべて削除して、各要素内のインスタンスアドレスを無効にする
	vkuruma.clear();
	cout << "vkurumaの要素：" << vkuruma.size() << endl;
	return 0;
}