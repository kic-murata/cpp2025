#include<iostream>
#include<vector>
using namespace std;

//�Q�Ɠn����p�����֐��ďo��
void compare(int& max, int& min, const int& data) {
	//max��min�������������main�֐��ł����f�����
	max = max < data ? data : max;	//�O�����Z�q���g�����������
	min = min > data ? data : min;
	//const���t����data�͒萔�ƂȂ�̂ŏ��������s��
	// data = 100;�@�Ƃ���ƃR���p�C���G���[
}

int main() {
	vector<int> vec{ 20,11,9,33,40,25 };
	int max, min;
	//�Y�������g�������[�v
	max = min = vec[0];
	for (int i = 1; i < vec.size(); i++) {
		compare(max, min, vec[i]);
	}
	cout << "�ő�l�F" << max << " �ŏ��l�F" << min << endl;
	//�C�e���[�^���g�������[�v
	max = min = vec.at(0);
	for (auto itr = vec.begin() + 1; itr != vec.end(); ++itr) {
		compare(max, min, *itr);
	}
	cout << "�ő�l�F" << max << " �ŏ��l�F" << min << endl;
	//�͈�for�����g�������[�v
	max = min = vec.front();
	for (auto d : vec) {
		compare(max, min, d);
	}
	cout << "�ő�l�F" << max << " �ŏ��l�F" << min << endl;

	//max_element�֐���min_element�֐���p�������@
	//���ꂼ��߂�l�̓C�e���[�^�ɂȂ�̂Œl�͊ԐڎQ�Ɖ��Z�q���g���Ď擾
	max = *max_element(vec.begin(), vec.end());
	min = *min_element(vec.begin(), vec.end());
	cout << "�ő�l�F" << max << " �ŏ��l�F" << min << endl;
	return 0;
}