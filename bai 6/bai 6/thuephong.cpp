#include <iostream>

using namespace std;

int main() {
	char loai_phong;
	int so_ngay_thue;
	double gia_phong, tong_tien;

	cout << "Nhap loai phong (a, b, c): ";
	cin >> loai_phong;

	cout << "Nhap so ngay thue: ";
	cin >> so_ngay_thue;

	switch (loai_phong) {
	case 'a':
		gia_phong = 250000;
		break;
	case 'b':
		gia_phong = 200000;
		break;
	case 'c':
		gia_phong = 150000;
		break;
	default:
		cout << "Loai phong khong hop le." << endl;
		return 1;
	}

	tong_tien = gia_phong * so_ngay_thue;

	if (so_ngay_thue > 12) {
		switch (loai_phong) {
		case 'a':
			tong_tien *= 0.9;  
			break;
		case 'b':
		case 'c':
			tong_tien *= 0.92;  
			break;
		}
	}

	cout << "Tong tien la: " << tong_tien << " dong." << endl;

	system("pause");
}
