#include"car.h"
#include"ambulance.h"
#include<iostream>
using namespace std;
int main() {
	cout << "--Car�N���X�̏���" << endl;
	Car* pkuruma = new Car();	//Car�N���X�̃C���X�^���X����
	pkuruma->setSpeed(40);	//�Z�b�^�[�ő��x��ݒ�
	pkuruma->drive(1.5);		//���s���ʂ̕\��
	//���ړ��������Q�b�^�[���g���ĕ\��
	cout << "���ړ�����:" << pkuruma->getMigration()
		<< "km" << endl;
	delete pkuruma;						//�C���X�^���X����
	cout << "--Ambulance�N���X�̏���" << endl;
	Ambulance* pAmb = new Ambulance();	//Ambulance�N���X�̃C���X�^���X����
	pAmb->setSpeed(60);			//�e�N���X�̊֐������s
	pAmb->drive(2.0);				//�e�N���X�̊֐������s
	//cout << "���ړ�����:" << pAmb->getMigration()
	//	<< "km" << endl;
	pAmb->savePeople();			//�q�N���X�Œǉ������֐��̎��s
	delete pAmb;						//�C���X�^���X����
	return 0;
}