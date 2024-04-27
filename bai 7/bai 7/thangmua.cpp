#include <iostream>

using namespace std;

int main() {
	int thang;

	cout << "Nhap vao mot thang (1-12): ";
	cin >> thang;

	if (thang >= 1 && thang <= 12) {
		if (thang >= 3 && thang <= 5) {
			cout << "Mua xuan" << endl;
		}
		else if (thang >= 6 && thang <= 8) {
			cout << "Mua ha" << endl;
		}
		else if (thang >= 9 && thang <= 11) {
			cout << "Mua thu" << endl;
		}
		else {
			cout << "Mua dong" << endl;
		}
	}
	else {
		cout << "Thang nhap vao khong hop le." << endl;
	}

	system("pause");
}
