#include"chara.h"
class Player : public Chara {
private:
	int m_Sp;		//�q�N���X�Œǉ������ϐ�
public:
	Player();		//�f�t�H���g�̃R���X�g���N�^
	Player(int, int, int, int);//��������̃R���X�g���N�^
	int getSp();//Sp�̃Q�b�^�[
};