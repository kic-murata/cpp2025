#include"product.h"
int main() {
	Product p[3];
	p[0].name = "ティッシュペーパー";
	p[0].price = 100;
	p[0].tax_rate = 0.1;
	p[1].name = "文房具";
	p[1].price = 500;
	p[1].tax_rate = 0.1;
	p[2].name = "新聞";
	p[2].price = 100;
	p[2].tax_rate = 0.08;
	//商品情報の表示
	for (int i = 0; i < 3; i++) {
		p[i].showInformation();
	}
	return 0;
}