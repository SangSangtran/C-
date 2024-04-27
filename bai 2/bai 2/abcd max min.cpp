#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c, d;

	cout << "Nhap so nguyen a: ";
	cin >> a;

	cout << "Nha[ so nguyen b: ";
	cin >> b;

	cout << "Nhap so nguyen c: ";
	cin >> c;

	cout << "Nhap so nguyen d: ";
	cin >> d;

	
	int max = max(max(a, b), max(c, d));
	int min = min(min(a, b), min(c, d));

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	
	int iMax, iMin;
	if (a != iMax && b != iMin) {
		iMax = a;
		iMin = a;
	} 
	else if (b != iMax && b != iMin) {
		iMax = b;
		iMax = b;
	}
	else if (c != iMax && c != iMin) {
		iMax = c;
		iMin = c;
	}
	else {
		iMax = d;
		iMin = d;
	}
	cout << "Hai so khong phai lon nhat va nho nhat: " << iMax << ", " << iMin << endl;
	
}