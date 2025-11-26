#include<set>
#include<random>
#include<iostream>
using namespace std;
int main() {
	//int値をキーとするsetコンテナscoreを宣言
	set<int> score;
	//乱数生成器を使う
	random_device rand_dev{};
	mt19937 rand_engine(rand_dev());
	uniform_int_distribution<int> dist(1, 1000);

	//課題①
	//scoreの要素数が50個未満であればループを継続
	while (score.size() < 50) {
		//scoreに1~1000までの乱数を挿入
		score.insert(dist(rand_engine));
	}
	//課題②　全要素の表示
	for (auto k : score) {
		cout << k << " ";
	}
	cout << endl;
	//課題③　下位５つ（ワースト５）の表示
	auto it = score.begin();	//scoreの先頭イテレータを取得
	cout << "Worst5: ";
	for (int i = 0; i < 5; i++) {
		cout << *it++ << " "; //値を表示してイテレータを1つ進める
	}
	cout << endl;
	//上位５つ（トップ５）の逆イテレータを使った表示
	auto it2 = score.rbegin();//scoreの末尾のイテレータを取得
	cout << "Top5: ";
	for (int i = 0; i < 5; i++) {
		cout << *it2++ << " "; //値を表示してイテレータを1つ進める
	}
	cout << endl;
	//上位５つ（トップ５）のイテレータを使った表示
	auto it3 = score.end();//scoreの末尾のイテレータを取得
	it3--;	//イテレータをひとつ戻すと末尾のデータが入っている場所
	cout << "Top5: ";
	for (int i = 0; i < 5; i++) {
		cout << *it3-- << " "; //値を表示してイテレータを1つ進める
	}
	cout << endl;
	//上位５つ（トップ５）のイテレータとnext関数を使った表示
	auto it4 = score.begin();//scoreの先頭のイテレータを取得
	cout << "Top5: ";
	for (int i = 0; i < 5; i++) {
		//next関数を使ったイテレータの変更
		cout << *next(it4, 49-i) << " ";
	}

}