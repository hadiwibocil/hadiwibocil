#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float j,m,d, Total, bayar,uang,min ;
	struct game
	{
		int jam;
		int menit;
		int detik;
	};
	
	game masuk;
	game keluar;
	game selisih;
	
	cout<<"Rental Playstation\n";
	cout<<"=====================\n";
	cout<<"\n";
	
	cout<<"Jam Masuk \n";
	cout<<"Jam = ";
	cin>>masuk.jam;
	cout<<"menit = ";
	cin>>masuk.menit;
	cout<<"detik = ";
	cin>>masuk.detik;
	cout<<"\n";
	
	cout<<"Jam Keluar \n";
	cout<<"Jam = ";
	cin>>keluar.jam;
	cout<<"menit = ";
	cin>>keluar.menit;
	cout<<"detik = ";
	cin>>keluar.detik;
	cout<<"\n";
	selisih.detik=keluar.detik-masuk.detik;
	selisih.menit=keluar.menit-masuk.menit;
	selisih.jam=keluar.jam-masuk.jam;
	
	if(keluar.detik<masuk.detik)
	{
		selisih.detik=selisih.detik+60;
		selisih.menit=selisih.menit-1;
	}
	if(keluar.menit<masuk.menit)
	{
		selisih.menit=selisih.menit+60;
		selisih.jam=selisih.jam-1;
	}
	if(keluar.jam<masuk.jam)
	{
		selisih.jam=selisih.jam+24;
	}
	else if(keluar.jam==masuk.jam&&keluar.menit<masuk.menit)
	{
		selisih.jam=selisih.jam+24;
	}
	
	
	cout<<"Main selama	:	" <<selisih.jam<<":"<<selisih.menit<<":"<<selisih.detik<<"\n";
	j=(selisih.jam*3600)+(selisih.menit*60)+selisih.detik;
	Total= (j/3600)*4000;
	cout<<"Biaya adalah	:	Rp. "<<Total<<endl;
	
	cout<<"Jumlah uang	:	Rp. ";
	cin>>uang;
	cout<<"=================================\n";
	bayar=uang-Total;
	min=Total-uang;
	if(uang<Total)
	{
		cout<<"Anda masih punya hutang sebesar	:	Rp. "<<min<<endl;
	}
	else 
	{
		cout<<"Kembalian	:	Rp. "<<bayar;
	}
	
	getch();
}
