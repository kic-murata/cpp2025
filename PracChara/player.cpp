#include"player.h"

int Player::getSp() {
	return m_Sp;
}
Player::Player(): Chara(), m_Sp(0) { }
Player::Player(int hp,int atk,int def,int sp)
	:Chara(hp, atk, def), m_Sp(sp){ }
