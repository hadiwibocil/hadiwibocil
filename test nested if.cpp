#include <iostream>

using namespace std;

int main()
{
	string status,hari;
	float berat,diskon,total,harga_seblelum_diskon,harga_sesudah_diskon;
	
	cout<<"Masukan hari : ";
	cin>>hari;
	cout<<"Masukan Nama : ";
	cin>>status;
	cout<<"Masukan berat : ";
	cin>>berat;
	
	if(hari=="minggu")
	{
		diskon = 0.1;
		if(status=="mahasiswa")
		{
			diskon=diskon + 0.05;
		}
	}
	else
	{
		diskon = 0;
		if(status=="mahasiswa")
		{
			diskon = diskon + 0.05;
		}
	}
	
	harga_seblelum_diskon=berat*3000;
	harga_sesudah_diskon=harga_seblelum_diskon*diskon;
	total=harga_seblelum_diskon-harga_sesudah_diskon;
	
	cout<<"Diskon = "<<harga_sesudah_diskon<<"\n";
	cout<<"Harga = "<<total;
}
