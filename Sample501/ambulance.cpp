#include"ambulance.h"
#include<iostream>
using namespace std;
//コンストラクタ：メンバ初期化子
Ambulance::Ambulance() : m_number(119) {
	cout << "Ambulanceクラスのインスタンス生成" << endl;
}
//デストラクタ
Ambulance::~Ambulance() {
	cout << "Ambulanceクラスのインスタンス消去" << endl;
}
void Ambulance::savePeople() {
	//子クラスからは親クラスのprotectedなメンバにアクセス可能
	cout << "総移動距離" << m_migration << "km" << endl;
	cout << "救急救命活動" << endl
		<< "呼出しは" << m_number << "番" << endl;
}
