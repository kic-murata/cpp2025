#include"car.h"
#include"ambulance.h"
#include<iostream>
using namespace std;
int main() {
	cout << "--Carクラスの処理" << endl;
	Car* pkuruma = new Car();	//Carクラスのインスタンス生成
	pkuruma->setSpeed(40);	//セッターで速度を設定
	pkuruma->drive(1.5);		//走行結果の表示
	//総移動距離をゲッターを使って表示
	cout << "総移動距離:" << pkuruma->getMigration()
		<< "km" << endl;
	delete pkuruma;						//インスタンス消去
	cout << "--Ambulanceクラスの処理" << endl;
	Ambulance* pAmb = new Ambulance();	//Ambulanceクラスのインスタンス生成
	pAmb->setSpeed(60);			//親クラスの関数を実行
	pAmb->drive(2.0);				//親クラスの関数を実行
	//cout << "総移動距離:" << pAmb->getMigration()
	//	<< "km" << endl;
	pAmb->savePeople();			//子クラスで追加した関数の実行
	delete pAmb;						//インスタンス消去
	return 0;
}