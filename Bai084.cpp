
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);

int NguyenToDau(int[][500], int, int);
int NguyenToLonNhat(int[][500], int, int);

int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMang da nhap: \n";
	Xuat(b, m, n);

	int kq = NguyenToLonNhat(b, m, n);
	cout << "\nGia tri nguyen to lon nhat: " << kq;
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
bool ktNguyenTo(int a)
{
	if (a < 2)
		return 0;
	for (int i = 2; i <= sqrt(a); i++)
		if (a % i == 0)
			return 0;
	return 1;
}
int NguyenToDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (ktNguyenTo(a[i][j]))
				return a[i][j];
	}
}
int NguyenToLonNhat(int a[][500], int m, int n)
{
	int max = NguyenToDau(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (ktNguyenTo(a[i][j]) && a[i][j] > max)
				max = a[i][j];
	}
	return max;
}