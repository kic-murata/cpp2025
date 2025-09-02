#include<iostream>
using namespace std;
int main() {
	int* p = nullptr;	//int型のポインタ変数を宣言
	p = new int();		//int値を格納する領域を確保
	*p = 123;					//ポインタで示されたアドレスの
										//中身を書き換え
	cout << *p << endl;
	delete p;
	return 0;
}