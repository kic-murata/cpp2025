#include"product.h"
int main() {
	Product p[3];
	p[0].name = "�e�B�b�V���y�[�p�[";
	p[0].price = 100;
	p[0].tax_rate = 0.1;
	p[1].name = "���[��";
	p[1].price = 500;
	p[1].tax_rate = 0.1;
	p[2].name = "�V��";
	p[2].price = 100;
	p[2].tax_rate = 0.08;
	//���i���̕\��
	for (int i = 0; i < 3; i++) {
		p[i].showInformation();
	}
	return 0;
}