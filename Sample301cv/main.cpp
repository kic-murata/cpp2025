#include"car.h"
#include<iostream>
#include<vector>
using namespace std;

int main() {
	//Car�N���X�̃|�C���^��vector�̔z��Ƃ��Đ錾
	vector<Car*> vkuruma;	//���̎��_�ł͗v�f���͂O
		//new���Z�q���g���ăC���X�^���X�𐶐�����
		//���������C���X�^���X�̃A�h���X��push_back���g���Ĕz�񖖔��ɒǉ�
		//vkuruma.push_back(new Car());
		//vkuruma.push_back(new Car());
	//resize:�z��v�f����ύX����֐�
	vkuruma.resize(2);	//�v�f����2�ƂȂ邪�A�e�v�f���̒l�͕s��
	//�͈�for���g���ėv�f���Ԃ�̃C���X�^���X�𐶐����āA���̃A�h���X���i�[
	for (auto &p : vkuruma) {
		p = new Car();	//new���Z�q�̖߂�l�̓A�h���X
	}
	//�e�v�f�i�C���X�^���X�̃A�h���X�l�j���烁���o�֐����Ăяo���i�A���[���Z�q�j
	vkuruma[0]->setSpeed(40);
	vkuruma[0]->drive(1.5);
	vkuruma[1]->setSpeed(60);
	vkuruma[1]->drive(2.0);
		//new���Ďg�����C���X�^���X��delete�Ń��������
		//delete vkuruma[0];
		//delete vkuruma[1];
	//�͈�for���g���Ċe�C���X�^���X�̃����������
	for (auto& p : vkuruma) {
		delete p;		//delete���Z�q�̈����͊e�C���X�^���X�̐擪�A�h���X
	}
	//�z��v�f�����ׂč폜���āA�e�v�f���̃C���X�^���X�A�h���X�𖳌��ɂ���
	vkuruma.clear();
	cout << "vkuruma�̗v�f�F" << vkuruma.size() << endl;
	return 0;
}