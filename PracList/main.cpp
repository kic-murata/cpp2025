#include<iostream>
#include<list>
using namespace std;
int main() {
	{	//パターンA
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		for (auto d : li2) {
			li1.push_back(d);
		}
		cout << "li1の末尾にli2を追加：";
		for (auto d : li1) {
			cout << d << " ";
		}
		cout << endl;
	}
	{	//パターンB
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		li1.reverse();	//li1[17,11,3,2]
		for (auto d : li1) {
			li2.push_front(d);
		}
		cout << "li2の先頭にli1を追加：";
		for (auto d : li2) {
			cout << d << " ";
		}
		cout << endl;
	}
	{	//パターンBその２（イテレータ）
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		//リバースイテレータを使ってデータ末尾から先頭までループ
		for (auto itr = li1.rbegin(); itr != li1.rend();itr++) {
			li2.push_front(*itr);
		}
		cout << "リバースイテレータを使用：";
		for (auto d : li2) {
			cout << d << " ";
		}
		cout << endl;
	}
	{	//パターンC（merge）
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		//mergeでli1の中にli2のデータを統合する
		li1.merge(li2);
		cout << "mergeで連結：";
		for (auto d : li1) {
			cout << d << " ";
		}
		cout << endl;
		cout << "li2のデータ数" << li2.size() << endl;
	}
	{	//パターンC（insert）
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		//insert関数の引数はすべてイテレータ
		//insert(挿入場所,データの先頭,データの末尾)
		li1.insert(li1.end(), li2.begin(), li2.end());
		cout << "insertで連結：";
		for (auto d : li1) {
			cout << d << " ";
		}
		cout << endl;
		cout << "li2のデータ数" << li2.size() << endl;
	}
	{	//パターンC（splice）
		list<int> li1{ 2,3,11,17 }, li2{ 5,7,13,19 };
		//splice(挿入場所,リスト)
		li1.splice(li1.end(), li2);
		cout << "spliceで連結：";
		for (auto d : li1) {
			cout << d << " ";
		}
		cout << endl;
		cout << "li2のデータ数" << li2.size() << endl;
	}
}