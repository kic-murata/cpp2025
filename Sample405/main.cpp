#include"rat.h"
#include<iostream>
#include<vector>
using namespace std;
int main() {
	//Rat�N���X�̃|�C���^�ϐ���vector�z��ɂ���
	vector<Rat*> vr;	//�v�f����0
	//�z��v�f��3�֕ύX
	vr.resize(3);			//�v�f����3(vr[0],vr[1],vr[2])
	Rat::showNum();
	vr[0] = new Rat();	//�P�C�ڂ̃l�Y�~�𐶐�
	vr[0]->squeak();		//�P�C�ڂ̃l�Y�~����
	Rat::showNum();	//�l�Y�~�̐���\��(�ÓI�����o�֐��ďo)
	for (int i = 1; i < vr.size(); i++) {
		vr[i] = new Rat();	//i�C�ڂ̃l�Y�~�𐶐�
		vr[i]->squeak();		//i�C�ڂ̃l�Y�~����
	}
	Rat::showNum();	//�l�Y�~�̐���\��(�ÓI�����o�֐��ďo)
	delete vr[0];			//�P�C�ڂ̃l�Y�~����
	delete vr[1];			//�Q�C�ڂ̃l�Y�~����
	Rat::showNum();	//�l�Y�~�̐���\��(�ÓI�����o�֐��ďo)
	delete vr[2];			//�R�C�ڂ̃l�Y�~����
	Rat::showNum();	//�l�Y�~�̐���\��(�ÓI�����o�֐��ďo)
	vr.clear();				//�z��̑S�v�f���폜(�v�f����0)
	return 0;
}