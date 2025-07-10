#include<iostream>
using namespace std;

int main() {
	FILE* fp;
	if (fp = fopen("data.txt", "r")) {
		fclose(fp);
	}
	else {
		cout << "File Open Error!" << endl;
		return -1;
	}
	cout << "Hello World." << endl;
	return 0;
}