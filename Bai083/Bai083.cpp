
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

float DuongDau(float[][500], int, int);
float DuongNhoNhat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMang da nhap: \n";
	Xuat(b, m, n);

	float kq = DuongNhoNhat(b, m, n);
	cout << "\nGia tri duong nho nhat: " << kq;
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
float DuongDau(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				return a[i][j];
	}
}
float DuongNhoNhat(float a[][500], int m, int n)
{
	float min = DuongDau(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j]>0 && a[i][j]<min)
				return a[i][j];
	}
}