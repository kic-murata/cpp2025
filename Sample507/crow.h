#pragma once
#include"bird.h"
class Crow: public Bird {
public:
	~Crow();			//デストラクタ
	void sing();	//鳴く関数（仮想関数）
	void fly();		//飛ぶ関数
	void color();	//色を表示
};