#include <vector>
#include <iostream>
#include <memory> // std::unique_ptr を使用するために必要

using namespace std;

class Car {
private:
  double m_speed;
public:
  void drive(double hour) {
    cout << "時速" << m_speed << "kmで"
      << hour << "時間走行" << endl;
    cout << m_speed * hour << "km移動" << endl;
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

  // スマートポインタがスコープを抜けるときに自動的にメモリを解放するため、deleteは不要

  return 0;
}