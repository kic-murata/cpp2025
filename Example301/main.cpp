#include<iostream>
#include"vector2D.h"
using namespace std;

int main() {
	Vector2D v{ 3.0, 4.0 };//�C���X�^���Xv�𐶐�
	//cout << "v.x=";
	//cin >> v.x;
	//cout << "v.y=";
	//cin >> v.y;
	cout << "v=(" << v.x << "," << v.y
		<< ")" << endl;
	cout << "v�̒���:" << v.length() << endl;
	return 0;
}