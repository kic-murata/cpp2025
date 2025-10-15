#include"chara.h"
class Player : public Chara {
private:
	int m_Sp;		//子クラスで追加した変数
public:
	Player();		//デフォルトのコンストラクタ
	Player(int, int, int, int);//引数ありのコンストラクタ
	int getSp();//Spのゲッター
};