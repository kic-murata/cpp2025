#include"chara.h"
#include"player.h"
#include<iostream>
#include<vector>
using namespace std;
int main() {									//Hp Atk Def Sp
	//Player* pPlayer = new Player(100,50,20,30);

	//�v�f��0��Player�N���X�̃|�C���^�z��pPlayer��錾
	vector<Player<double>*> pPlayer{};
	pPlayer.push_back(new Player<double>(100, 50.2, 20.5, 30));
	pPlayer.push_back(new Player<double>(300, 70.3, 40.6, 50));
	
	for (int i = 0; i < pPlayer.size(); i++) {
		cout << "Player�̏��" << endl
			<< "HP: " << pPlayer[i]->getHp() << endl
			<< "SP: " << pPlayer[i]->getSp() << endl
			<< "Atk:" << pPlayer[i]->getAtk() << endl
			<< "Def:" << pPlayer[i]->getDef() << endl;
	}
	//pPlayer�z��̐擪�̈ʒu�����C�e���[�^itr�Ɋi�[
	auto itr = pPlayer.begin();
	//�C�e���[�^itr���z�񖖔��ɗ���܂Ń��[�v
	while (itr != pPlayer.end()) {
		//�C�e���[�^itr���w���ꏊ�̒��g�i�A�h���X�j���w�肵��delete
		delete *itr;
		//�C�e���[�^itr���w���ꏊ�̔z��v�f���폜����itr���X�V
		itr = pPlayer.erase(itr);
	}
	return 0;
}