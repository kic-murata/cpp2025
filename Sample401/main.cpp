#include"car.h"
#include<iostream>
using namespace std;
int main() {
	Car kuruma;					//Carクラスのインスタンス生成
	kuruma.setSpeed(40);//セッターで速度を設定
	kuruma.drive(1.5);	//走行結果の表示
	kuruma.setSpeed(60);//セッターで速度を設定
	kuruma.drive(2.0);	//走行結果の表示
	//総移動距離をゲッターを使って表示
	cout << "総移動距離:" << kuruma.getMigration()
		<< "km" << endl;
	return 0;
}