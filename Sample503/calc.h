#pragma once
class Calc {
private:
	int m_a, m_b;
public:
	Calc();								//引数なしのコンストラクタ
	Calc(int a, int b);		//引数ありのコンストラクタ
	int add();						//引数なしのadd関数
	int add(int a, int b);//引数あり(int)のadd関数
	int add(int a, int b, int c);//引数あり(int)のadd関数
	double add(double a, double b);//引数あり(double)のadd関数
	void setValue(int a, int b);//セッター
	int getA();						//ゲッター
	int getB();						//　〃
};