#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

#define Nmaks 10
typedef int matrik[Nmaks] [Nmaks];

int main()
{
	int n,i,j;
	matrik A,B,C;
	
	cout<<"Program Penjumlahan matriks A 2x2 dan B 2x2\n";
	cout<<"\n";
	n = 2;
	cout<<"Masukan entri-entri matriks A\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<"A["<<i<<","<<j<<"] = "; cin>>A[i][j];
		}
	}
	system("cls");
	
	cout<<"\n";
	cout<<"Masukan entri - entri matriks B\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<"B["<<i<<","<<j<<"] = ";
			cin>>B[i][j];
		}
	}
	
	cout<<"\n";
	
	//proses perkalian matriks C = A x B
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			C[i][j] = (A [i][1]*B[1][j])+(A[i][2]*B[2][j]);
		}
	}
	system("cls");
	cout<<"Entri-entri matriks A,B dan C\n";
	cout<<"\n";
	
	//proses output matriks A,B,C
	gotoxy(1,5);
	cout<<"A =";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			gotoxy(2+4*j,2+2*i);
			cout<<A[i][j];
		}
	}
	
	gotoxy(1,10);
	cout<<"B = ";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			gotoxy(2+4*j,7+2*i);
			cout<<B[i][j];
		}
	}
	
	gotoxy(1,15);
	cout<<"C = ";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			gotoxy(2+4*j,2+2*i+10);
			cout<<A[i][j];
		}
	}
	
	gotoxy(12,15);
	cout<<" x ";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			gotoxy(13+4*j,2+2*i+10);
			cout<<B[i][j];
		}
	}
	gotoxy(23,15);
	cout<<" = ";
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			gotoxy(24+4*j,2+2*i+10);
			cout<<C[i][j];
		}
	}

	getch();
}
