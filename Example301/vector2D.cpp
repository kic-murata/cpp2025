#include"vector2D.h"
#include<math.h>

double Vector2D::length() {
	//O•½•û‚Ì’è—‚ğg‚Á‚ÄÎ•Ó‚ğ‹‚ß‚é
	return sqrt(x * x + y * y);
}