#include<iostream>
#include<conio.h>
#include <iomanip>

using namespace std;

struct counter
{
	int kode_isi[20],jumlah_beli[20];
	string jenis[20],besar_isi[20];
	char kode_jenis[20];
	float harga[20],total[20],sub_total[20];
};

int main()
{
	counter pulsa;
	int a,b;
	float uang,bayar;
	float sub=0;
	string kasir,nama_pembeli;
	
	cout<<"Nama Pembeli = ";
	cin>>nama_pembeli;
	cout<<"\n";
	cout<<"Banyak beli = ";
	cin>>a;
	cout<<"\n";
	
	for(b=1; b<=a; b++)
	{
	cout<<"Pembelian ke- "<<b<<endl;
	cout<<"Kode Jenis 	:	";
	cin>>pulsa.kode_jenis[b];
	cout<<"Kode isi	:	";
	cin>>pulsa.kode_isi[b];

		if(pulsa.kode_jenis[b]=='P')
		{
			pulsa.jenis[b]="Pulsa";
				if (pulsa.kode_isi[b]==1)
				{
					pulsa.besar_isi[b]="25000";
					pulsa.harga[b]=27000;
				}
				else if (pulsa.kode_isi[b]==2)
				{
					pulsa.besar_isi[b]="50000";
					pulsa.harga[b]=52000;
				}
		}
		else if(pulsa.kode_jenis[b]=='D')
		{
			pulsa.jenis[b]="Data";
				if (pulsa.kode_isi[b]==1)
				{
					pulsa.besar_isi[b]="10 GB";
					pulsa.harga[b]=110000;
				}
				else if (pulsa.kode_isi[b]==2)
				{
					pulsa.besar_isi[b]="15 GB";
					pulsa.harga[b]=160000;
				}
		}
		
	cout<<"Jumlah beli 	:	";
	cin>>pulsa.jumlah_beli[b];
	cout<<"\n";
	system("cls");
	
	pulsa.sub_total[b]=pulsa.harga[b]*pulsa.jumlah_beli[b];
	}
	cout<<"Nama Pembeli : "<<nama_pembeli;
	
	cout<<"\n\n";
	cout<<"============================================================================\n";
	cout<<"No| Jenis | Besar Isi | Jumlah Beli | Sub Total |\n";
	cout<<"============================================================================\n";
	
	
	for (b=1; b<=a; b++)
	{
		cout<<" "<<setiosflags(ios::left)<<setw(1)<<b;
		cout<<"	"<<setiosflags(ios::left)<<setw(3)<<pulsa.jenis[b];
		cout<<"	"<<setiosflags(ios::left)<<setw(4)<<pulsa.besar_isi[b];
		cout<<"	"<<setiosflags(ios::left)<<setw(3)<<pulsa.jumlah_beli[b];
		cout<<"	"<<setiosflags(ios::right)<<setw(3);
		cout<<setprecision(7)<<pulsa.sub_total[b];
		cout<<"\n";
	}
	cout<<"============================================================================\n";
	
	for (b=1; b<=a; b++)
	{
		sub=sub+pulsa.sub_total[b];
	}
	cout<<"\n";
	cout<<"	"<<"\t\tTotal beli	: Rp. "<<sub<<endl;
	cout<<"	"<<"\t\tJumlah uang	: Rp. ";
	cin>>uang;
	bayar=uang-sub;
	cout<<"	"<<"\t\tKembalian	: Rp. "<<bayar<<endl;
	cout<<"Nama Kasir : ";
	cin>>kasir;
	getch();
}
