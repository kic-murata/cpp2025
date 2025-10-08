#include"calc.h"
//引数なしのコンストラクタ
Calc::Calc() :m_a(0), m_b(0) {}
//引数ありのコンストラクタ
Calc::Calc(int a, int b) :m_a(a), m_b(b) {}
//引数なしのadd関数
int Calc::add() {
	return m_a + m_b;	//メンバ変数同士の足し算
}
//引数ありのadd関数
int Calc::add(int a, int b) {
	return a + b;			//引数同士の足し算
}
//引数ありのadd関数
int Calc::add(int a, int b, int c) {
	return a + b + c;			//引数同士の足し算
}
//引数ありのadd関数
double Calc::add(double a, double b) {
	return a + b;			//引数同士の足し算
}
//セッター
void Calc::setValue(int a, int b) {
	m_a = a;
	m_b = b;
}
//ゲッター
int Calc::getA() {
	return m_a;
}
int Calc::getB() {
	return m_b;
}