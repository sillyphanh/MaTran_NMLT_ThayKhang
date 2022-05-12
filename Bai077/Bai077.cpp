#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
float LonNhatDong(float[][500], int, int, int);


int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMang da nhap: \n";
	Xuat(b, m, n);
	int dong;
	cout << "Nhap dong can kiem tra: "; cin >> dong;
	float kq = LonNhatDong(b, m, n, dong);
	cout << "\nGia tri lon nhat tren dong "<<dong<<" trong ma tran : " << kq;
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
float LonNhatDong(float a[][500], int m, int n, int dong)
{
	float max = a[dong][0];
	for (int i = 0; i < n; i++)
			if (a[dong][i] > max)
				max = a[dong][i];
	return max;
}