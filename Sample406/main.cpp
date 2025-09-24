#include"sample.h"
#include<iostream>
int main() {
	Sample::func2();
	//Sampleクラスのポインタ変数sを宣言してインスタンスの
	//アドレスを格納
	Sample* s = new Sample();
	s->func1();			//インスタンスメンバ関数の呼出し①
	//Sample::func1();//インスタンスメンバ関数の呼出し②
	s->func2();			//静的メンバ関数の呼出し①(非推奨)
	Sample::func2();//静的メンバ関数の呼出し②
	delete s;
	return 0;
}