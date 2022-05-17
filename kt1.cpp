#include <iostream.h>

using namespace std;

void nhap(int A[], int n)
{
    cout << "nhap phan tu mang: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "nhap phan tu thu " << i + 1 << " \t";
        cin >> A[i];
    }
}
void xuat(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i]<<" ";
    }
}
void swap(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}
int chinhphuong(int n)
{
   int i = 0;
	int count = 0;
	while (i * i <= n)
	{
		if (i * i == n)
			return 1;
		i++;
	}
	return 0;
}
void sapxep(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[i])
                swap(A[i], A[j]);
        }
    }
}
/*void sochinhphuong(int A[], int n)
{
    cout << "cac so chinh phuong co trong mang la: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < A[i]; j++)
        {
            if (j* j == A[i])
                cout << A[i] << " ";
        }
    }
}*/
void sochinhphuong(int A[], int n)
{
    cout << "cac so chinh phuong co trong mang la: ";
    for (int i = 0; i < n; i++)
    {
        if (chinhphuong(A[i]))
        {
            cout << A[i]<<" ";
        }
    }
}
void tong(int A[], int n)
{
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (chinhphuong(A[i]))
        {
            t += A[i];
       }
    }
    cout << "tong cac so chinh phuong la: " << t;
}
/*
void sapxepchinhphuong(int A[], int F[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (chinhphuong(A[i]) == 1)
        {
            F[i] = A[i];
        }
    }
    sapxep(F,n);
    xuat(F,n);
}
*/

int main()
{
    int A[100];
    int F[100];
    int n,t;
    cout << "nhap so luong phan tu mang: ";
    cin >> n;
    nhap(A, n);
    cout << "\nphan tu mang vua nhap la: ";
    xuat(A, n);
    sapxep(A, n);
    cout << "\nmang phan tu sap xep tang dan la: ";
    xuat(A, n);
    cout << "\n";
    sochinhphuong(A, n);
    cout << "\n";
    tong(A, n);
    cout << "\n";
    return 0;
}