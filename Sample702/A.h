#pragma once

class B;	//クラスBへの参照（前方宣言）

class A {
private:
	B* m_pB;	//メンバにクラスBのポインタ変数
public:
	A();
	void foo();
	void bar();
};