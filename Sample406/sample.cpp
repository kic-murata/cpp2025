#include"sample.h"
#include<iostream>
using namespace std;
int Sample::s_b = 0;
//インスタンスメンバ関数func1
void Sample::func1() {
	cout << "==func1==" << endl;
	m_a = 1;	//インスタンスメンバ変数への代入
	s_b = 2;	//静的メンバ変数への代入
	cout << "a=" << m_a << endl;
	cout << "b=" << s_b << endl;
}
//静的メンバ関数func2
void Sample::func2() {
	cout << "==func2==" << endl;
	//m_a = 3;	//インスタンスメンバ変数への代入(実行不可)
	s_b = 4;	//静的メンバ変数への代入
	//cout << "a=" << m_a << endl; //(実行不可)
	cout << "b=" << s_b << endl;
}