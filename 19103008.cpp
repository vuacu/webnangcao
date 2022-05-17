// kt1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

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
    for (int i = 0; i < n; i++)
    {
        if (i * i == n)
            return 1;
    }
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
        if (chinhphuong(A[i]) == 1)
        {
            cout << A[i]<<" ";
        }
    }
}
void tong(int A[], int n,int &t)
{
    t = 0;
    for (int i = 0; i < n; i++)
    {
        if (chinhphuong(A[i]) == 1)
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
    tong(A, n,t);
    cout << "\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
