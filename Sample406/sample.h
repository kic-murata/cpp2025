#pragma once
class Sample {
public:
	Sample() = default;	//�f�t�H���g�R���X�g���N�^
	~Sample() = default;//�f�t�H���g�f�X�g���N�^
	void func1();				//�C���X�^���X�����o�֐�func1
	static void func2();//�ÓI�����o�֐�func2
private:
	int m_a;						//�C���X�^���X�����o�ϐ�a
	static int s_b;			//�ÓI�����o�ϐ�b
};