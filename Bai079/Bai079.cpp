#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
float NhoNhat(float[][500], int, int);
int DemNhoNhat(float[][500], int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMang da nhap: \n";
	Xuat(b, m, n);
	
	int kq = DemNhoNhat(b, m, n);
	cout << "\nSo luong gia tri nho nhat trong ma tran : " << kq;
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
float NhoNhat(float a[][500], int m, int n)
{
	float min = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 1; j < n; j++)
			if (min > a[i][j])
				min = a[i][j];
	}
	return min;
}
int DemNhoNhat(float a[][500], int m, int n)
{
	int dem = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 1; j < n; j++)
			if (a[i][j] == NhoNhat(a, m, n))
				dem++;
	}
	return dem;
}