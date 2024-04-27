#include <iostream>

using namespace std;

int main() {
	double a, b, c;
	
	cout << "Nhap do dai canh a: ";
	cin >> a;

	cout << "Nhap do dai canh b: ";
	cin >> b;

	cout << "Nhap do dai canh c: ";
	cin >> c;

	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c) {
			cout << "Tam giac deu" << endl;
		}
		else if (a == b || b == c || a == c) {
			cout << "Tam giac can" << endl;
		}
		else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
			cout << "Tam giac vuong" << endl;
		}
		else {
			cout << "Tam giac thuong" << endl;
		}
	}
	else {
		cout << "Ba canh da nhap khong phai tam giac" << endl;
	}
	system("pause");
}