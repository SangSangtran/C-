#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	int n, maxChan = 0, minLe = INT_MAX;

	cout << "Nhap so phan tu cua mang: ";
	cin >> n;

	while (n <= 0) {
		cout << "Nhap lai so phan tu cua mang (la so nguyen duong): ";
		cin >> n;
	}

	int mang[n];

	for (int i = 0; i < n; i++) {
		do {
			cout << "Nhap phan tu thu " << i + 1 << ": ";
			cin >> mang[i];

			if (mang[i] < 1 || mang[i] > 100) {
				cout << "Gia tri khong hop le. Yeu cau nhap lai." << endl;
			}
		} while (mang[i] < 1 || mang[i] > 100);
	}

	for (int i = 0; i < n; i++) {
		if (mang[i] % 2 == 0 && mang[i] > maxChan) {
			maxChan = mang[i];
		}
		else if (mang[i] % 2 != 0 && mang[i] < minLe) {
			minLe = mang[i];
		}
	}

	if (maxChan != 0) {
		cout << "So chan lon nhat la: " << maxChan << endl;
	}
	else {
		cout << "Khong co so chan trong mang." << endl;
	}

	if (minLe != INT_MAX) {
		cout << "So le nho nhat la: " << minLe << endl;
	}
	else {
		cout << "Khong co so le trong mang." << endl;
	}

	system("pause");
}
