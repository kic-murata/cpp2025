#include<iostream>
#include<list>
using namespace std;
int main() {
	//int値を格納する空のリストliを宣言
	list<int> li{5, 8, 2};	//初期リスト5 8 2
	li.push_back(1);		//[5,8,2,1]リスト末尾に1を追加
	li.push_back(2);		//[5,8,2,1,2]末尾に2を追加
	li.push_front(3);		//[3,5,8,2,1,2]先頭に3を追加
	//list<int>::iterator itr;	//イテレータの宣言
	//itr = li.begin();		//リストの先頭情報をitrに格納
	auto itr = li.begin();
	itr++;							//イテレータとひとつ進める
	li.insert(itr, 4);	//[3,4,5,8,2,1,2]イテレータの場所に4を挿入
	li.sort();					//昇順ソート[1,2,2,3,4,5,8]
	li.unique();				//重複データの削除[1,2,3,4,5,8]
	li.remove(8);				//リストから「8」を削除[1,2,3,4,5]
	li.reverse();				//データを逆順にする[5,4,3,2,1]
	//リストの先頭から末尾までループ
	//for (itr = li.begin(); itr != li.end(); itr++) {
	//	cout << *itr << " ";	//イテレータが指す場所の値を表示
	//}
	//範囲for文に書き換え
	for (auto d : li) {
		cout << d << " ";
	}
	cout << endl;
	return 0;
}