#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
float LonNhat(float[][500], int, int);
int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMang da nhap: \n";
	Xuat(b, m, n);
	float kq = LonNhat(b, m, n);
	cout << "\nGia tri lon nhat trong ma tran: " << kq;
	return 1;
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "\nNhap n: ";
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

float LonNhat(float a[][500], int m, int n)
{
	float lc = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (lc < a[i][j])
				lc = a[i][j];
		}
	}
	return lc;
}