#include <iostream>
#include <conio.h>

using namespace std;

void Pembuka()
{
    cout <<"\t\t\t\t================================================\n";
    cout<< "\t\t\t\t\t          Selamat Datang\n";
    cout<< "\t\t\t\t\t Programed By : Hadi Wibowo\n";
    cout<< "\t\t\t\t\t         Nim : 5160411158\n";
    cout<< "\t\t\t\t================================================\n";
	cout<< "\n";
	cout<< "\n";
}

void Penutup()
{
    cout<< "\t\t\t\t================================================\n";
    cout<< "\t\t\t\t                 Terima Kasih  \n";
    cout<< "\t\t\t\t                  UTY Yang Jaya \n";
    cout<< "\t\t\t\t================================================\n";
}


void nama()
{
	string nama[10]={"1. hadi\n","2. mahessa\n","3. ika\n","4. andri\n","5. apit\n","6. yosa\n","7. rafi\n","8. nugroho\n","9. wahyu\n","10. egy\n"};
	int a;
	Pembuka();
	cout<<"Nama yang terdaftar : \n";
	cout<<"\n";
	
	for (a=0;a<10;a++)
	{
		cout<<nama[a];
	}
getch;
}

int main()
{
	int m;
do {
cout<<"\n";
cout<<"--------Menu----------\n";
cout<<" 1. Daftar Nama        \n";
cout<<" 2. Cari Nama                \n";
cout<<" 3. Exit                \n";
cout<<"----------------------\n";
cout<<"Masukan Pilihan anda[1..3]= ";

cin>>m;
system("CLS");
switch (m)
	{ 
	case 1:
		{
			nama();
			break;
		}
	
	system("CLS"); 
	getch();
	
	case 2:
		{
		string pil;
		bool ada = false;
		string nama[10]={"hadi","mahessa","ika","andri","apit","yosa","rafi","nugroho","wahyu","eggy"};
		int a;
		Pembuka();
		cout<<"Masukan Nama yg ingin dicari : ";cin>>pil;"\n";
		
		for (a=0;a<10;a++)
		{
			if(pil==nama[a])
			{
			ada = true ;
			cout<<"\n";
			cout<<"Nama ada dalam daftar\n";
			}
		}
		if (ada)
		{
			cout<<"\n";
			cout<<"Namanya adalah = "<<pil;"\n";
		}
		else
		{
			cout<<"\n";
			cout<<"Nama tidak ada dalam daftar ";
		}
		cout<<"\n";
		Penutup();
		getch;
		break;	
		}
	
	
	system("CLS"); 
	getch();

	case 3:
		{
			Penutup();
			break;
		}
	
	system("CLS"); 
	getch();

	
	default: 
	{
		cout<<"\n Tidak Ada Pilihan Tersebut, Silahkan Masukan Pilihan Yang Benar";
	}
		system("CLS"); 
		getch();
	
	}
	m++;
}while (m <= 3);
}


