#pragma once

class A;	//クラスAへの参照（前方宣言）

class B {
private:
	A* m_pA;	//メンバにクラスAのポインタ変数
public:
	B(A* pA);	//コンストラクタの引数にAのポインタ
	void hoge();
};