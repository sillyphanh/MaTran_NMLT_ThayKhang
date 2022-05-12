#include <iostream>
#include <iomanip>

#include <string>
using namespace std;


void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void Xuat(float[][500], int, int);
int DemCucTieu(float[][500], int, int);
int ktCucTieu(float[][500], int, int, int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\Ma tran da nhap la: \n";
	Xuat(b, m, n);
	int kq = DemCucTieu(b, m, n);
	cout << "\nSo gia tri cuc tieu co trong ma tran: " << kq;
	
	return 1;
}
int ktCucTieu(float a[][500], int m, int n, int c, int d)
{
	int flag = 1;
	for (int i = c - 1; i <= c + 1; i++)
		for (int j = d - 1; j <= d + 1; j++)
			if (a[c][d] >= a[i][j])
				flag = 0;
	return flag;
}
int DemCucTieu(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucTieu(a, m, n, i, j))
				dem++;
	return dem;
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