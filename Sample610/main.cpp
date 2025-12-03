#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main() {
	stack<int> stk{};
	queue<int> que{};
	int data[] = { 1,2,3 };
	for (int i = 0; i < 3; i++) {
		stk.push(data[i]);	//スタックにデータを格納
		que.push(data[i]);	//キューにデータを格納
	}
	cout << "stack:";
	//スタックの内容が空でなければループ
	while (!stk.empty()) {
		//一番上の値を取得
		cout << stk.top() << " ";
		//一番上の値を削除
		stk.pop();
	}
	cout << endl;
	cout << "queue:";
	//キューの内容が空でなければループ
	while (!que.empty()) {
		//先頭の値を取得
		cout << que.front() << " ";
		//先頭の値を削除
		que.pop();
	}
	cout << endl;
	return 0;
}