#include"vector2D.h"
#include<math.h>

double Vector2D::length() {
	//三平方の定理を使って斜辺を求める
	return sqrt(x * x + y * y);
}