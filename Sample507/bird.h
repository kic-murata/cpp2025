#pragma once
#include<iostream>
using namespace std;
class Bird {
public:
	virtual ~Bird();				//���z�f�X�g���N�^	
	virtual void sing()=0;	//���֐��i�������z�֐��j
	virtual void fly();			//��Ԋ֐�
};