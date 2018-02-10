#include <iostream>

using namespace std;

int main()
{
	string nama,hari;
	int berat;
	float harga,dishari,disstatus;
	
	cout<<"Masukan hari : ";
	cin>>hari;
	cout<<"Masukan status : ";
	cin>>nama;
	cout<<"Masukan berat : ";
	cin>>berat;
	
	if(hari=="minggu" || hari=="Minggu")
	{
		dishari=(berat*3000)*0.1;
		harga=(berat*3000)-dishari;
		if(nama=="mahasiswa" || nama=="Mahasiswa")
		{
			disstatus=harga*0.05;
			harga=harga-disstatus;
		}
		cout<<"Harga : "<<harga;
	}
	else
	{
	harga=berat*3000;
	if(nama=="mahasiswa" || nama=="Mahasiswa")
		{
			disstatus=harga*0.05;
			harga=harga-disstatus;
		}
	cout<<"Harga : "<<harga;
	}
}
