#pragma once
class Chara {
private:
	int m_Hp, m_Atk, m_Def;
public:
	Chara();							//�f�t�H���g�̃R���X�g���N�^
	Chara(int, int, int);	//��������̃R���X�g���N�^
	int getHp();	//Hp�̃Q�b�^�[
	int getAtk();	//Atk�̃Q�b�^�[
	int getDef();	//Def�̃Q�b�^�[
};