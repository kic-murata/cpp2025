#include<iostream>
#include<map>
#include<string>	
using namespace std;
int main() {
	//mapクラスの配列scoreの宣言
	//キー：string型 　値：int型
	map<string, int> score;
	score["Tom"] = 100;	//要素に値を代入
	score["Bob"] = 80;	//    〃
	score["Mike"] = 76;	//    〃
	score.erase("Mike");//Mikeのデータを消去
	
	//Johnと88を１つのペアにして配列に挿入　score["John"] = 88と同じ
	score.insert(make_pair("John", 88));
	//Johnのキーを配列内から検索して場所をイテレータで返す
	auto itr = score.find("John");
	//イテレータのfirstがキー、secondが値を表す
	cout << itr->first << "の点数は" << itr->second << "点" << endl;

	//Davidと70のペアを配列に追加 score["David"] = 70と同じ
	score.emplace("David", 70);

	cout << "Tomの点数は" << score["Tom"] << "点" << endl;
	cout << "Bobの点数は" << score["Bob"] << "点" << endl;
	//Mikeというキーが配列内にいくつあるか数える
	if (score.count("Mike")) {
		cout << "Mikeの点数は" << score["Mike"] << "点" << endl;
	}
	//配列の先頭から末尾までキーと値のペアを順番に表示
	for (auto itr = score.begin(); itr != score.end(); itr++) {
		cout << "Key:" << itr->first
			<< " Value:" << itr->second << endl;
	}
	//範囲for文を使った表示
	for (auto p : score) {
		cout << "Key:" << p.first
			<< " Value:" << p.second << endl;
	}
	//範囲for文でキーと値に直接分解して取り出す方法(要:/std:c++17)
	for (const auto& [key, value] : score) {
		cout << "Key:" << key
			<< " Value:" << value << endl;
	}
	return 0;
}