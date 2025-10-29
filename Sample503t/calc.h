#pragma once
#include<string>
using namespace std;
class Calc {
private:
	int m_a, m_b;
public:
	Calc();								//引数なしのコンストラクタ
	Calc(int a, int b);		//引数ありのコンストラクタ
	int add();						//引数なしのadd関数
	//引数２つが同じ型のテンプレート
	template <typename T>
	T add(T a, T b) {
		return a + b;
	}
	//引数２つが異なる型のテンプレート
	template <typename T,typename U>
	auto add(T a, U b) {
		return a + b;
	}
	//引数の個数が可変長のテンプレート
	template <typename...Args>
	auto add(Args... args) {
		return (args + ...);
	}
	//int add(int a, int b, int c);//引数あり(int)のadd関数
	//int add(int a, int b);//引数あり(int)のadd関数
	//double add(double a, double b);//引数あり(double)のadd関数
	//string add(string a, string b);
	void setValue(int a, int b);//セッター
	int getA();						//ゲッター
	int getB();						//　〃
};