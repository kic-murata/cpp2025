#include"sample.h"

int main() {
	//Sampleクラスのインスタンスsを生成
	Sample s;
	//sのメンバ変数aに1を代入
	s.a = 1;
	//sのメンバ変数bに2を代入
	s.b = 2;
	//sのメンバ関数func1を実行
	s.func1();
	//sのメンバ関数func2を実行
	s.func2();
	return 0;
}