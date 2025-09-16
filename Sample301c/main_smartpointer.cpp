#include <vector>
#include <iostream>
#include <memory> // std::unique_ptr ���g�p���邽�߂ɕK�v

using namespace std;

class Car {
private:
  double m_speed;
public:
  void drive(double hour) {
    cout << "����" << m_speed << "km��"
      << hour << "���ԑ��s" << endl;
    cout << m_speed * hour << "km�ړ�" << endl;
  }
  void setSpeed(double spd) {
    m_speed = spd;
  }
};

int main() {
  vector<unique_ptr<Car>> vkuruma;

  vkuruma.push_back(make_unique<Car>());
  vkuruma.push_back(make_unique<Car>());

  vkuruma[0]->setSpeed(40);
  vkuruma[0]->drive(1.5);

  vkuruma[1]->setSpeed(60);
  vkuruma[1]->drive(2.0);

  // �X�}�[�g�|�C���^���X�R�[�v�𔲂���Ƃ��Ɏ����I�Ƀ�������������邽�߁Adelete�͕s�v

  return 0;
}