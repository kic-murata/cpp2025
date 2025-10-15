#pragma once
class Chara {
private:
	int m_Hp, m_Atk, m_Def;
public:
	Chara();							//デフォルトのコンストラクタ
	Chara(int, int, int);	//引数ありのコンストラクタ
	int getHp();	//Hpのゲッター
	int getAtk();	//Atkのゲッター
	int getDef();	//Defのゲッター
};