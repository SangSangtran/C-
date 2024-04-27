#include "iostream"

using namespace std;

int main()
{
	int a, b, c;

	cout << "Nhap so nguyen a: ";
	cin >> a;

	cout << "Nhap so nguyen b: ";
	cin >> b;

	cout << "Nhap so nguyen c: ";
	cin >> c;

	if (a > b) {
		int i = a;
		a = b;
		b = i;
	}

	if (b > c) {
		int i = b;
		b = c;
		c = i;
	}

	cout << "Gia tri tang dan: " << a << ", " << b << ", " << c << endl;
	system("pause");
	return 0;
}
