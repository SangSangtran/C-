#include <iostream>
using namespace std;

int main() {
	double soKm;
	cout << "Nhap so km da di: ";
	cin >> soKm;

	const double giaDau = 5000;
	const double gia2Den5 = 4500;
	const double gia6TroDi = 3500;
	const double voucher = 0.10;
	double tongTien = giaDau;

	if (soKm > 1) {
		if (soKm - 1 <= 4) {
			tongTien += (soKm - 1) * gia2Den5;
		}
		else {
			tongTien += 4 * gia2Den5 + (soKm - 5) * gia6TroDi;
		}

		if (soKm > 120) {
			double giamGia = tongTien * voucher;
			tongTien -= giamGia;
		}
    cout << "Tong tien: " << 