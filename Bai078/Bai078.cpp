#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
float NhoNhatCot(float[][500], int, int, int);


int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMang da nhap: \n";
	Xuat(b, m, n);
	int cot;
	cout << "Nhap cot can kiem tra: "; cin >> cot;
	float kq = NhoNhatCot(b, m, n, cot);
	cout << "\nGia tri nho nhat tren cot " << cot << " trong ma tran : " << kq;
	return 1;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}
float NhoNhatCot(float a[][500], int m, int n, int cot)
{
	float min = a[0][cot];
	for (int i = 0; i < m; i++)
		if (a[i][cot] < min)
			min = a[i][cot];
	return min;
}