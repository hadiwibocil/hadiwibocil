#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

struct nilai
{
	int total[20],total_sks[20],sks[20],bobot[20];
	string nama_makul[20];
	char nilai[20];
};

int main()
{
	nilai nli;
	int a,b;
	float ipk;
	float sub=0;
	float t=0;
	
	cout<<"Jumlah matakuliah yang akan dinputkan = ";
	cin>>a;
	cout<<"\n";
	
	for(b=1; b<=a; b++)
	{
	cout<<"Mata kuliah ke- "<<b<<endl;
	cout<<"Nama Mata Kuliah	:	";
	cin>>nli.nama_makul[b];
	cout<<"Nilai	:	";
	cin>>nli.nilai[b];
	cout<<"SKS 	:	";
	cin>>nli.sks[b];
	cout<<"\n";

		if(nli.nilai[b]=='A')
		{
			nli.bobot[b]=4;
		}
		else if(nli.nilai[b]=='B')
		{
			nli.bobot[b]=3;
		}
		else if(nli.nilai[b]=='C')
		{
			nli.bobot[b]=2;
		}
		else if(nli.nilai[b]=='D')
		{
			nli.bobot[b]=1;
		}
	nli.total[b]=nli.bobot[b]*nli.sks[b];
	nli.total_sks[b]=nli.bobot[b]*nli.sks[b];
	}
	
	cout<<"\n\n";
	cout<<"============================================================================\n";
	cout<<"Makul ke- | Nama Matakuliah | Nilai | Bobot | SKS | Total |\n";
	cout<<"============================================================================\n";
	
	
	for (b=1; b<=a; b++)
	{
		cout<<" "<<setiosflags(ios::left)<<setw(1)<<b;
		cout<<"	"<<setiosflags(ios::left)<<setw(4)<<nli.nama_makul[b];
		cout<<"	"<<setiosflags(ios::left)<<setw(4)<<nli.nilai [b];
		cout<<"	"<<setiosflags(ios::left)<<setw(3)<<nli.bobot[b];
		cout<<"	"<<setiosflags(ios::left)<<setw(1)<<nli.sks[b];
		cout<<"	"<<setiosflags(ios::right)<<setw(3);
		cout<<setprecision(7)<<nli.total[b];
		cout<<"\n";
	}
	
	cout<<"============================================================================\n";
	for (b=1; b<=a; b++)
	{
		sub=sub+nli.total[b];
	}
	cout<<"\n";
	cout<<"Total Nilai : "<<sub;
	
	for (b=1; b<=a; b++)
	{
		t=t+nli.sks[b];
	}
	cout<<"\n";
	cout<<"Total SKS : "<<t;
	
	ipk=sub/t;
	cout<<"\n";
	cout<<"IPK : "<<ipk;
	
	getch();
}
