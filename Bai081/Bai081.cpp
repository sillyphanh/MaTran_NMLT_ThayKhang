
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

float AmDau(float[][500], int, int);
float AmLonNhat(float[][500], int, int);
int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMang da nhap: \n";
	Xuat(b, m, n);

	float kq = AmLonNhat(b, m, n);
	cout << "\nGia tri am lon nhat: " << kq;
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
float AmDau(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 1; j < n; j++)
			if (a[i][j] < 0)
				return a[i][j];
}
float AmLonNhat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 1; j < n; j++)
			if (a[i][j] < 0 && a[i][j] > AmDau(a, m, n))
				return a[i][j];
}