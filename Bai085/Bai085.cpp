
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
int ChinhPhuongDau(int[][500], int, int);
int ChinhPhuongLonNhat(int[][500], int, int);


int main()
{
	int b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMang da nhap: \n";
	Xuat(b, m, n);

	int kq = ChinhPhuongLonNhat(b, m, n);
	cout << "\nGia tri chinh phuong lon nhat: " << kq;
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
bool ktChinhPhuong(int a)
{
	int i = 0;
	while (i * i <= a) {
		if (i* i == a){
			return 1;
			}
		++i;
	}
	return 0;
}
int ChinhPhuongDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (ktChinhPhuong(a[i][j]))
				return a[i][j];
	}
}
int  ChinhPhuongLonNhat(int a[][500], int m, int n)
{
	int max = ChinhPhuongDau(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (ktChinhPhuong(a[i][j]) && a[i][j] > max)
				max = a[i][j];
	}
	return max;
}