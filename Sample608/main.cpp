#include<iostream>
#include<string>
#include<map>
using namespace std;
int main() {
	//連想配列名: score
	//キー(key): string型
	//値(value): int型
	map<string, int> score;
	score["Tom"] = 100;
	score["Bob"] = 80;
	score["Mike"] = 76;
	score.erase("Mike");	//キーを指定して削除

	//insertする場合はmake_pair関数でキーと値のペアを作る必要がある
	score.insert(make_pair("John", 88));

	//emplaceの場合はキーと値だけでよい
	score.emplace("David", 70);

	//配列からキー"David"の場所（イテレータ）を取得
	auto itr = score.find("David");
	cout << "Davidの点数は" << itr->second << "点" << endl;
	
	cout << "Tomの点数は" << score["Tom"] << "点" << endl;
	cout << "Bobの点数は" << score["Bob"] << "点" << endl;
	if (score.count("Mike")) {//Mikeのキーが存在するかのチェック
		cout << "Mikeの点数は" << score["Mike"] << "点" << endl;
	}
	cout << "Johnの点数は" << score["John"] << "点" << endl;
	return 0;
}