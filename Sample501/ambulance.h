#pragma once
#include"car.h"
class Ambulance: public Car {
public:
	Ambulance();	//�R���X�g���N�^
	virtual ~Ambulance();	//�f�X�g���N�^
	void savePeople();
private:
	int m_number;			//���x
};