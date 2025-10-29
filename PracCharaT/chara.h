#pragma once
template <typename T>
class Chara {
private:
	T m_Hp, m_Atk, m_Def;
public:
	Chara() :m_Hp(0), m_Atk(0), m_Def(0) {}	//デフォルトのコンストラクタ
	Chara(T hp, T atk, T def)
		: m_Hp(hp), m_Atk(atk), m_Def(def) {}	//引数ありのコンストラクタ
	T getHp() { return m_Hp; }		//Hpのゲッター
	T getAtk() { return m_Atk; }	//Atkのゲッター
	T getDef() { return m_Def; }	//Defのゲッター
};