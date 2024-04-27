#include <iostream>

using namespace std;

int main() {
	int gio_bat_dau, gio_ket_thuc;
	double cuoc_phi, thoi_gian_truy_cap, tong_cuoc;

	cout << "Nhap gio bat dau truy cap (0-23): ";
	cin >> gio_bat_dau;

	cout << "Nhap gio ket thuc truy cap (0-23): ";
	cin >> gio_ket_thuc;

	if (gio_bat_dau >= 7 && gio_bat_dau < 17) {
		cuoc_phi = 400;
		if (gio_ket_thuc - gio_bat_dau > 6) {
			cuoc_phi *= 0.9;
		}
	}
	else if (gio_bat_dau >= 17 && gio_bat_dau < 24) {
		cuoc_phi = 350;
		if (gio_ket_thuc - gio_bat_dau > 4) {
			cuoc_phi *= 0.88;
		}
	}
	else {
		cuoc_phi = 300;
		if (gio_ket_thuc - gio_bat_dau > 7) {
			cuoc_phi *= 0.85;
		}
	}

	thoi_gian_truy_cap = gio_ket_thuc - gio_bat_dau;
	tong_cuoc = cuoc_phi * thoi_gian_truy_cap;

	cout << "Tong cuoc phi la: " << tong_cuoc << " dong." << endl;

	system("pause");
}
