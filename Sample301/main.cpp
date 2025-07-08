#include"car.h"
using namespace std;

int main() {
	Car kuruma;//教科書とインスタンス名が違います
	kuruma.speed = 40;//メンバ変数への代入
	kuruma.drive(1.5);//メンバ関数の実行
	return 0;
}