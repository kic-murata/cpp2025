#include"product.h"
void Product::showInformation() {
	int price_tax 
		= price + (int)(price * tax_rate);
	cout << "���i���F" << name;
	cout << "�@���i�F" << price << "�~";
	cout << "�@�ō����i�F" << price_tax << "�~"
		<< endl;
}