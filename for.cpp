#include <iostream>

using namespace std;

int main()
{
	int jml,i;
	
	cout<<"Masukan jumlah angka = ";
	cin>>jml;
	int a[jml];
	
	for(int i=0; i<jml; i++)
	{
		cout<<"Masukan angka ke-"<<i+1<<" = ";
		cin>>a[i];
	}
//	
//	cout<<"Angka yang lebih besar dari 50 : ";
//	
//	for(int i=0; i<jml; i++)
//	{
//		if(a[i]>50)
//		{
//			cout<<a[i]<<"|";
//		}
//	}
//	cout<<"\n";
//	cout<<"Angka yang lebih kecil dari 50 : ";
//	for(int i=0; i<jml; i++)
//	{
//		if(a[i]<50)
//		{
//			cout<<a[i]<<"|";
//		}
//	}
	
//	cout<<"Angka yang genap : ";
//	
//	for(int i=0; i<jml; i++)
//	{
//		if(a[i]%2==0)
//		{
//			cout<<a[i]<<"|";
//		}
//	}
//	cout<<"\n";
//	cout<<"Angka yang ganjil : ";
//	for(int i=0; i<jml; i++)
//	{
//		if(a[i]%2!=0)
//		{
//			cout<<a[i]<<"|";
//		}
//	}
	cout<<"\n";
	cout<<"Bilangan prima : \n";
	int flag;
	flag==1;
	for(int i=0; i<jml; i++)
	{
		flag=1;
		for(int j=2; j<jml; j++)
		{
		if(a[i]%j==0)
			{
				flag=0;
			}
		}
	
		if(flag==1)
		{
			cout<<a[i]<<" Adalah prima\n";
		}
		else
		{
			cout<<a[i]<<" Buka prima\n";
		}
	}
}
