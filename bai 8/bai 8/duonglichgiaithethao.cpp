#include <iostream>

using namespace std;

int main() {
	int nam;

	cout <b< "Nhap vao mot nam duong lich (tu 1975 tro di): ";
	cin >> nam;

	if (nam >= 1975) {
		if ((nam - 1975) % 4 == 0) {
			cout << "Olympic" << endl;
			cout << "Euro" << endl;
		}

		if ((nam - 1975) % 4 == 2) {
			cout << "World Cup" << endl;
		}

		if ((nam - 1975) % 2 == 0) {
			cout << "Tiger Cup" << endl;
		}

		if ((nam - 1975) % 2 != 0) {
			cout << "SEA Games" << endl;
		}
	}
	else {
		cout << "Nhap lai, nam tu 1975 tro di." << endl;
	}

	system("pause");
}
