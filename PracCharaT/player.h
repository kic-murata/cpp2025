#include"chara.h"
template <typename T>
class Player : public Chara<T> {
private:
	T m_Sp;		//�q�N���X�Œǉ������ϐ�
public:
	Player() : Chara(), m_Sp(0) {}		//�f�t�H���g�̃R���X�g���N�^
	Player(T hp, T atk, T def, T sp)
		:Chara<T>(hp, atk, def), m_Sp(sp) {}//��������̃R���X�g���N�^
	T getSp() { return m_Sp; }//Sp�̃Q�b�^�[
};