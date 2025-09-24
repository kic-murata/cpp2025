#pragma once
class Rat {
public:
	Rat();							//コンストラクタ
	~Rat();							//デストラクタ
	//ネズミの数を出力（静的メンバ関数）
	static void showNum();
	void squeak();			//ネズミが鳴く
private:
	int m_id;						//ネズミのID番号
	static int s_count;	//ネズミの数（静的メンバ変数）
};