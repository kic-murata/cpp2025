#include<iostream>
#include<vector>
using namespace std;

//参照渡しを用いた関数呼出し
void compare(int& max, int& min, const int& data) {
	//maxやminを書き換えるとmain関数でも反映される
	max = max < data ? data : max;	//三項演算子を使った代入処理
	min = min > data ? data : min;
	//constが付いたdataは定数となるので書き換え不可
	// data = 100;　とするとコンパイルエラー
}

int main() {
	vector<int> vec{ 20,11,9,33,40,25 };
	int max, min;
	//添え字を使ったループ
	max = min = vec[0];
	for (int i = 1; i < vec.size(); i++) {
		compare(max, min, vec[i]);
	}
	cout << "最大値：" << max << " 最小値：" << min << endl;
	//イテレータを使ったループ
	max = min = vec.at(0);
	for (auto itr = vec.begin() + 1; itr != vec.end(); ++itr) {
		compare(max, min, *itr);
	}
	cout << "最大値：" << max << " 最小値：" << min << endl;
	//範囲for文を使ったループ
	max = min = vec.front();
	for (auto d : vec) {
		compare(max, min, d);
	}
	cout << "最大値：" << max << " 最小値：" << min << endl;

	//max_element関数とmin_element関数を用いた方法
	//それぞれ戻り値はイテレータになるので値は間接参照演算子を使って取得
	max = *max_element(vec.begin(), vec.end());
	min = *min_element(vec.begin(), vec.end());
	cout << "最大値：" << max << " 最小値：" << min << endl;
	return 0;
}