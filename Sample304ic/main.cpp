#include"sample.h"
#include<iostream>
using namespace std;
int main() {
	//Sampleクラスのインスタンスsを生成
	Sample s;
	//セッターを使ってメンバ変数に5をセット
	s.setNum(5);
	//ゲッターを使ってメンバ変数の値を取得して表示
	cout << s.getNum() << endl;
	return 0;
}