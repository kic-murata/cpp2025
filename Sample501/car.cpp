#include"car.h"
#include<iostream>
using namespace std;
//コンストラクタ：メンバ初期化子
Car::Car() : m_speed(0.0), m_migration(0.0) {
	cout << "Carクラスのインスタンス生成" << endl;
}
//デストラクタ
Car::~Car() {
	cout << "Carクラスのインスタンス消去" << endl;
}
//m_speedのセッター
void Car::setSpeed(double speed) {
	m_speed = speed;
}
//m_speedのゲッター
double Car::getSpeed() { 
	return m_speed; 
}
//m_migrationのゲッター
double Car::getMigration() { 
	return m_migration; 
}
void Car::drive(double hour) {
	cout << "時速" << m_speed << "kmで" <<
		hour << "時間走行" << endl;
	cout << m_speed * hour << "km移動しました" << endl;
	//総移動距離の計算
	m_migration += m_speed * hour;
}