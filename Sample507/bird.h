#pragma once
#include<iostream>
using namespace std;
class Bird {
public:
	virtual ~Bird();				//仮想デストラクタ	
	virtual void sing()=0;	//鳴く関数（純粋仮想関数）
	virtual void fly();			//飛ぶ関数
};