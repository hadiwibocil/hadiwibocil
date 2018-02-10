#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int a, jml;
	struct
	{
		char nim[10];
		char nama[80];
		float nilai;
	}mahasiswa[10];
	
	cout<<"Jumlah data mahasiswa yang akan diinputkan = ";
	cin>>jml;
	
	for(a=1; a<=jml; a++)
	{
		cout<<"Mahasiswa ke = " <<a<<endl;
		cout<<"\n";
		cout<<"Masukan NIM\t\t = ";
		cin>>mahasiswa[a].nim;
		cout<<"\n";
		cout<<"Masukan Nama\t\t =";
		cin>>mahasiswa[a].nama;
		cout<<"\n";
		cout<<"Masukan Nilai Ahir\t =";
		cin>>mahasiswa[a].nilai;
		cout<<"\n";
		system("cls");
	}
		cout<<"\n\n";
		cout<<"==================================\n";
		cout<<"Data ke-|	NIM		|	Nama	|	Nilai	|\n";
		cout<<"==================================\n";
		
	for(a=1; a<=jml; a++)
	{
		cout<<" "<<setiosflags(ios::left)<<setw(7)<<a;
		cout<<"	"<<setiosflags(ios::left)<<setw(8)<<mahasiswa[a].nim;
		cout<<"	"<<setiosflags(ios::left)<<setw(8)<<mahasiswa[a].nama;
		cout<<"	"<<setiosflags(ios::right)<<setw(11);
		cout<<setprecision(2)<<mahasiswa[a].nilai<<"\n";
	}
	cout<<"==================================\n";
	getch();
}
