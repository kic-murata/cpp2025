#include<iostream>
#include"vector2D.h"
using namespace std;

int main() {
	Vector2D v{ 3.0, 4.0 };//インスタンスvを生成
	//cout << "v.x=";
	//cin >> v.x;
	//cout << "v.y=";
	//cin >> v.y;
	cout << "v=(" << v.x << "," << v.y
		<< ")" << endl;
	cout << "vの長さ:" << v.length() << endl;
	return 0;
}