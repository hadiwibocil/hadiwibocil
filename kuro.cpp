#include <iostream>

using namespace std;

void mod()
{
	int a,b,c;
	int x = 5;
	int y = 3;
	
	a = 4+ (7*10)-5%13;
	b = (7%2)*2+5;
	c = x*3+(7%5)*7;
	
	cout<<"a = "<<a<<"\n"<<"b = "<<b<<"\n"<<"c = "<<c<<"\n";
}

void gg()
{
	
	int n;
	
	cout<<"Mencari bilangan ganjil atau genap\n";
	cout<<"\n";
	cout<<"Masukan biangan n = ";
	cin>>n;
	
	if(n%2==0)
	{
		cout<<n<<" adalah bilangan genap";
	}
	else
	{
		cout<<n<<" adalah bialngan ganjil";
	}
}

void segitiga()
{
	float l,a,t;
	
	cout<<"Menghitung luas segitiga\n";
	cout<<"\n";
	cout<<"Masukan alas = ";
	cin>>a;
	cout<<"Masukan tinggi = ";
	cin>>t;
	
	l=0.5*a*t;
	cout<<"Luas segitiga adalah = "<<l;
	
}

void lingkaran()
{
	int r;
	float l;
	
	cout<<"Menghitung luas lingkaran\n";
	cout<<"\n";
	cout<<"Masukan nilai r = ";
	cin>>r;
	
	l=3.14*r*r;
	cout<<"Luas lingkaran adalah : "<<l;
}

void uang()
{
	float rupiah,dollar,yen,peso;
	cout<<"Masukan nilai rupiah = Rp ";
	cin>>rupiah;
	
	dollar=rupiah/9150;
	yen=rupiah/5500;
	peso=rupiah/3250;
	
	cout<<"Uang Dollar	: "<<dollar<<"\n";
	cout<<"Uang Yen	: "<<yen<<"\n";
	cout<<"Uang Peso	: "<<peso<<"\n";
}

int main()
{
	lingkaran();
}
