#include"bird.h"

Bird::~Bird() {
	cout << "Birdクラスのインスタンス消去" << endl;
}

void Bird::fly() {
	cout << "鳥が飛びます" << endl;
}