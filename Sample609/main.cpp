#include<iostream>
#include<set>
using namespace std;
int main() {
	set<string> names;
	names.insert("Tom");	//setコンテナにキーを登録
	names.insert("Mike");
	names.insert("Mike");	//重複登録できるか？
	names.insert("Bob");
	//全要素を表示
	for (auto it = names.begin(); it != names.end(); it++) {
		cout << *it << endl;
	}
	//全要素を逆順で表示
	for (auto it = names.rbegin(); it != names.rend(); it++) {
		cout << *it << endl;
	}
	//キーから検索したい文字列を２つ登録
	string n[] = { "Bob","Steve" };
	for (int i = 0; i < size(n); i++) {
		//BobとSteveがキーの中にあるかチェック
		auto it = names.find(n[i]);
		//イテレータがデータ末尾のとき、つまり見つからなかったとき
		if (it == names.end()) {
			cout << n[i] << " is no in a set." << endl;
		}
		else {	//末尾でなければデータが見つかったとき
			cout << n[i] << " is in a set." << endl;
		}
	}
}