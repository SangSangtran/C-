#include <iostream>

using namespace std;

int main() {
	int ngay, thang;

	cout << "Nhap vao ngay: ";
	cin >> ngay;

	cout << "Nhap vao thang: ";
	cin >> thang;

	if (thang < 1 || thang > 12 || ngay < 1) {
		cout << "Ngay hoac thang nhap vao khong hop le." << endl;
		return 1;
	}

	int so_ngay;
	swich(thang)
	{
		case 1; case 2;