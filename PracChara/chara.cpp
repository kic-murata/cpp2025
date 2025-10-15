#include"chara.h"
Chara::Chara(): m_Hp(0),m_Atk(0),m_Def(0) {}
Chara::Chara(int hp, int atk, int def)
	: m_Hp(hp),m_Atk(atk),m_Def(def) { }
int Chara::getHp() {
	return m_Hp;
}
int Chara::getAtk() {
	return m_Atk;
}
int Chara::getDef() {
	return m_Def;
}
