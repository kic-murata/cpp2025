#include"chara.h"
template <typename T>
class Player : public Chara<T> {
private:
	T m_Sp;		//子クラスで追加した変数
public:
	Player() : Chara(), m_Sp(0) {}		//デフォルトのコンストラクタ
	Player(T hp, T atk, T def, T sp)
		:Chara<T>(hp, atk, def), m_Sp(sp) {}//引数ありのコンストラクタ
	T getSp() { return m_Sp; }//Spのゲッター
};