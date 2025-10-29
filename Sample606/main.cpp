#include<iostream>
#include<list>
using namespace std;
int main() {
	//int値を格納する空のリストliを宣言
	list<int> li{};
	li.push_back(1);		//リスト末尾に1を追加
	li.push_back(2);		//末尾に2を追加
	li.push_front(3);		//先頭に3を追加
	list<int>::iterator itr;	//イテレータの宣言
	itr = li.begin();		//リストの先頭情報をitrに格納
	itr++;							//イテレータとひとつ進める
	li.insert(itr, 4);	//イテレータの場所に4を挿入
	//リストの先頭から末尾までループ
	for (itr = li.begin(); itr != li.end(); itr++) {
		cout << *itr << " ";	//イテレータが指す場所の値を表示
	}
	cout << endl;
	return 0;
}