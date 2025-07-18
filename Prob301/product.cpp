#include"product.h"
void Product::showInformation() {
	int price_tax 
		= price + (int)(price * tax_rate);
	cout << "¤•i–¼F" << name;
	cout << "@‰¿ŠiF" << price << "‰~";
	cout << "@Åž‰¿ŠiF" << price_tax << "‰~"
		<< endl;
}