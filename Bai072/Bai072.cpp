#include <iostream>
#include <iomanip>

#include <string>
using namespace std;


void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void Xuat(float[][500], int, int);
int DemPhanBiet(float[], int);
int DemPhanBiet(float[][500], int, int);
int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMa tran da nhap la: \n";
	Xuat(b, m, n);
	int kq = DemPhanBiet(b, m, n);
	cout << "\nSo gia tri phan biet co trong ma tran: " << kq;

	return 1;
}
int DemPhanBiet(float a[], int m)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
		{
			if (a[i] == a[j])
				flag = 0;
		}
		if (flag == 1)
			dem++;
	}
	return dem;
}
int DemPhanBiet(float a[][500], int m, int n)
{
	float b[100];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[k++] = a[i][j];
	return DemPhanBiet(b, k);
}
void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap m: "; cin >> m;
	cout << "\nNhap n: "; cin >> n;
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