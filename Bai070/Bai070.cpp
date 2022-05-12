#include <iostream>
#include <iomanip>

#include <string>
using namespace std;


void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void Xuat(float[][500], int, int);
int DemCucDai(float[][500], int, int);
int ktCucDai(float[][500], int, int, int, int);

int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\Ma tran da nhap la: \n";
	Xuat(b, m, n);
	int kq = DemCucDai(b, m, n);
	cout << "\nSo gia tri cuc dai co trong ma tran: " << kq;

	return 1;
}
int ktCucDai(float a[][500], int m, int n,int d, int c)
{
	int di[8] = { -1,-1,-1,0,+1,+1,+1,0 };
	int dj[8] = { -1,0,+1,+1,+1,0,-1,-1 };
	int flag = 1;
	for (int k = 0; k < 8; k++)
		if (d + di[k] >= 0 && d + di[k] < m && c + dj[k] >= 0 && c + dj[k]<n && a[d + di[k]][c + dj[k]] > a[d][c])
		flag = 0;
	return flag;
}

int DemCucDai(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucDai(a, m, n, i, j))
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