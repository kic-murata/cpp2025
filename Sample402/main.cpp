#include"car.h"
#include<iostream>
using namespace std;
int main() {
	Car* pkuruma = nullptr;//Carクラスのポインタを宣言
	pkuruma = new Car();	//インスタンスを生成してアドレスを格納
	pkuruma->setSpeed(40);	//セッターで速度を設定
	pkuruma->drive(1.5);		//走行結果の表示
	pkuruma->setSpeed(60);	//セッターで速度を設定
	pkuruma->drive(2.0);		//走行結果の表示
	//総移動距離をゲッターを使って表示
	cout << "総移動距離:" << pkuruma->getMigration()
		<< "km" << endl;
	delete pkuruma;				//インスタンス消去
	return 0;
}