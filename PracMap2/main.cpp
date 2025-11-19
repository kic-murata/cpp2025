#include<iostream>
#include<map>
#include<random>
using namespace std;
int main() {
	//英単語の和訳と英訳のペアをdicに格納
	map<string, string> dic{
		{"活動", "activity"},{"雰囲気","atmosphere"},
		{"血液","blood"},{"環境","environment"},
		{"温度","temperature"}
	};
	//先頭要素のキーのみ表示
	cout << dic.begin()->first << endl;
	//すべての要素のキーを表示
	for (auto p : dic) {
		cout << p.first << endl;
	}

	//乱数生成器を作成
	random_device rand_dev{};
	//乱数アルゴリズムにメルセンヌツイスターを指定
	mt19937 rand_engine(rand_dev());
	//0~(マップの要素数-1)を均等な確率で得る分布生成器を作成
	uniform_int_distribution<int> dist(0, dic.size() - 1);

	auto it = dic.begin();
	//dist(rand_engine)で0~4の数値をランダムに生成
	//next関数で指定したイテレータを進める
	it = next(it, dist(rand_engine));
	cout << "【問題】" << endl;
	cout << "「" << it->first << "」の英単語は？＞";
	string in;
	cin >> in;
	if (in == it->second) {
		cout << "正解！" << endl;
	}
	else {
		cout << "不正解…" << endl;
	}

	return 0;
}