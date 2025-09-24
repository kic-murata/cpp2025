#include"rat.h"
#include<iostream>
using namespace std;
//ネズミの数の初期値を0に設定しておく
int Rat::s_count = 0;
//コンストラクタ
Rat::Rat() : m_id(0) {	//初期化子リストでm_idに0代入
	s_count++;			//ネズミの数を１つ増やす
	m_id = s_count;	//現在のネズミの数をID番号にする
}
//デストラクタ
Rat::~Rat() {
	cout << "ネズミ:" << m_id << "消去" << endl;
	s_count--;			//ネズミの数を１つ減らす
}
//ネズミの数の出力
void Rat::showNum() {
	cout << "現在のネズミの数：" << s_count << "匹" << endl;
}
//ネズミが鳴く
void Rat::squeak() {
	cout << m_id << ":チューチュー" << endl;
}