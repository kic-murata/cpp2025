#include<iostream>
using namespace std;
int main() {
	//int型のポインタ変数を宣言して、new演算子で
	//要素10個ぶんのint型配列の先頭アドレスを取得
	int* p = new int[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//int* p = new int[10]();//すべての要素を0
	for (int i = 0; i < 10; i++) {
		//*(p + i) = i;
		cout << p[i] << " ";
	}
	cout << endl;
	//配列が確保していたメモリ領域を解放
	delete[] p;
	return 0;
}