#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	// int型の動的配列v1を宣言
	// 配列要素を10,9,8の３つの要素で初期化
	// vector<int> v1{ 10,9,8 };
	// 配列要素を4つ確保して0で初期化　()内は個数
	//vector<int> v1(4);
	// 配列要素を4つ確保して1で初期化　()内は個数と初期化値
	vector<int> v1(4, 1);
	// string型の動的配列v2を宣言
	vector<string> v2(3,"XYZ");
	cout << "v1の要素数：" << v1.size() << endl;
	cout << "v2の要素数：" << v2.size() << endl;
	v1.push_back(1);	//v1の末尾に1を追加
	v1.push_back(2);	//v1の末尾に2を追加
	v1.push_back(3);	//v1の末尾に3を追加
	v1.pop_back();		//v1の末尾の値を消去
	v2.push_back("ABC");//v2の末尾に"ABC"を追加
	v2.push_back("DEF");//v2の末尾に"CDE"を追加

	//イテレータitrに配列v1の先頭の場所を格納
	auto itr = v1.begin();
	cout << "イテレータが指す要素の値:" << *itr << endl;
	//配列v1の先頭＋1の場所に4を挿入
	v1.insert(itr + 1, 4);
	//配列の要素数が変更されたのでイテレータを再取得
	itr = v1.begin();
	//配列v1の先頭＋2の場所に5を挿入
	v1.insert(itr + 2, 5);

	//配列の要素数が変更されたのでイテレータを再取得
	itr = v1.begin();
	//配列v1の先頭+1の要素を削除
	v1.erase(itr + 1);

	//for文を使って配列要素をひとつずつ表示
	cout << "添え字を使った配列要素の表示" << endl;
	for (int i = 0; i < v1.size(); i++) {
		cout << "v1[" << i << "]="
			<< v1[i] << endl;
	}
	// イテレータを使った配列要素の表示
	cout << "イテレータを使った要素の表示" << endl;
	for (auto itr = v1.begin(); itr != v1.end(); ++itr) {
		cout << *itr << endl;
	}
	// 範囲for文を使った配列要素の表示
	// for(auto 変数名 : コンテナ名) { }
	cout << "範囲forを使った要素の表示" << endl;
	for (auto a : v1) {
		cout << a << endl;
	}

	for (int i = 0; i < v2.size(); i++) {
		cout << "v2[" << i << "]="
			<< v2[i] << endl;
	}
	return 0;
}