#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

struct toko
{
	int selisih[20],total_harga[20],jumlah_barang[20];
	string nama_barang[20];
	float harga_beli[20],harga_jual[20];
};

int main()
{
	toko tko;
	int a,b;
	int sub=0;
	
	cout<<"Banyak orang yang akan membeli produk = ";
	cin>>a;
	cout<<"\n";
	
	for(b=1; b<=a; b++)
	{
	cout<<"Orang ke "<<b<<endl;
	cout<<"Nama Barang	:	";
	cin>>tko.nama_barang[b];
	cout<<"Harga Beli	:	";
	cin>>tko.harga_beli[b];
	cout<<"Harga Jual	:	";
	cin>>tko.harga_jual[b];
	cout<<"Jumlah Barang	:	";
	cin>>tko.jumlah_barang[b];
	system("cls");
	
	tko.selisih[b]=tko.harga_jual[b]-tko.harga_beli[b];
	tko.total_harga[b]=(tko.harga_jual[b]-tko.harga_beli[b])*tko.jumlah_barang[b];
	}
	
	cout<<"\n\n";
	cout<<"============================================================================\n";
	cout<<"Orang ke- | Nama Barang | Harga Beli | Harga Jual | Jml | Laba | Total |\n";
	cout<<"============================================================================\n";
	
	
	for (b=1; b<=a; b++)
	{
		cout<<" "<<setiosflags(ios::left)<<setw(1)<<b;
		cout<<"	"<<setiosflags(ios::left)<<setw(3)<<tko.nama_barang[b];
		cout<<"	"<<setiosflags(ios::left)<<setw(4)<<tko.harga_beli[b];
		cout<<"	"<<setiosflags(ios::left)<<setw(3)<<tko.harga_jual[b];
		cout<<"	"<<setiosflags(ios::left)<<setw(1)<<tko.jumlah_barang[b];
		cout<<"	"<<setiosflags(ios::left)<<setw(3)<<tko.selisih[b];
		cout<<"	"<<setiosflags(ios::right)<<setw(3);
		cout<<setprecision(7)<<tko.total_harga[b];
		cout<<"\n";
	}
	
	cout<<"============================================================================\n";
	
	for (b=1; b<=a; b++)
	{
		sub=sub+tko.total_harga[b];
	}
	cout<<"\n";
	cout<<"	"<<"\t\tTotal harga keseluruhan : "<<sub;
	
	getch();
}
