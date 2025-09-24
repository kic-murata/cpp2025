#pragma once
class Sample {
public:
	Sample() = default;	//デフォルトコンストラクタ
	~Sample() = default;//デフォルトデストラクタ
	void func1();				//インスタンスメンバ関数func1
	static void func2();//静的メンバ関数func2
private:
	int m_a;						//インスタンスメンバ変数a
	static int s_b;			//静的メンバ変数b
};