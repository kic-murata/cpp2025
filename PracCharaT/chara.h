#pragma once
template <typename T>
class Chara {
private:
	T m_Hp, m_Atk, m_Def;
public:
	Chara() :m_Hp(0), m_Atk(0), m_Def(0) {}	//�f�t�H���g�̃R���X�g���N�^
	Chara(T hp, T atk, T def)
		: m_Hp(hp), m_Atk(atk), m_Def(def) {}	//��������̃R���X�g���N�^
	T getHp() { return m_Hp; }		//Hp�̃Q�b�^�[
	T getAtk() { return m_Atk; }	//Atk�̃Q�b�^�[
	T getDef() { return m_Def; }	//Def�̃Q�b�^�[
};