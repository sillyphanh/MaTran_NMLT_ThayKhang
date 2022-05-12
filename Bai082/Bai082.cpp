
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);

int ChanDau(int[][500], int, int);
int ChanLonNhat(int[][500], int, int);
int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMang da nhap: \n";
	Xuat(b, m, n);

	int kq = ChanLonNhat(b, m, n);
	cout << "\nGia tri chan lon nhat: " << kq;
	return 1;
}
void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}
int ChanDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0 && a[i][j]%2==0)
				return a[i][j];
	}
}
int ChanLonNhat(int a[][500], int m, int n) 
{
	int max = ChanDau(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] > max && a[i][j] % 2 == 0)
				max = a[i][j];
	}
	return max;
}