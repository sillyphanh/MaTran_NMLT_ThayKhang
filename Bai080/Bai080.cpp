
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

float LonNhat(float[][500], int, int);
float LonNhatDong(float[][500], int, int, int);
void LietKe(float[][500], int, int);
int main()
{
	float b[500][500];
	int m, n;
	Nhap(b, m, n);
	cout << "\nMang da nhap: \n";
	Xuat(b, m, n);

	LietKe(b, m, n);
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
float LonNhat(float a[][500], int m, int n)
{
	float max = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 1; j < n; j++)
			if (max < a[i][j])
				max = a[i][j];
	}
	return max;
}
float LonNhatDong(float a[][500], int m, int n, int dong)
{
	float max = a[dong][0];
	for (int i = 0; i < m; i++)
	{
		if (a[dong][i] == LonNhat(a, m, n))
			return i;
	}
}
void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 1; j < n; j++)
			if (a[i][j] == LonNhat(a, m, n))
				cout << i << " ";

}