#pragma once
class Car {
public:
	Car();					//�R���X�g���N�^
	virtual ~Car();	//�f�X�g���N�^
	void setSpeed(double speed);//�Z�b�^�[
	double getSpeed();					//�Q�b�^�[
	double getMigration();			//�Q�b�^�[
	void drive(double hour);
private:
	double m_speed;				//���x
protected:
	double m_migration;		//�ړ�����
};