#include"vector2D.h"
#include<math.h>

double Vector2D::length() {
	//�O�����̒藝���g���ĎΕӂ����߂�
	return sqrt(x * x + y * y);
}