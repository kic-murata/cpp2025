#include"crow.h"
Crow::~Crow() {
	cout << "Crowクラスのインスタンス消去" << endl;
}
void Crow::color() {
	cout << "カラスは黒い" << endl;
}
void Crow::sing() {
	cout << "カーカー" << endl;
}
void Crow::fly() {
	cout << "カラスが飛びます" << endl;
}