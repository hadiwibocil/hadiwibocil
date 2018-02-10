#include <iostream>

using namespace std;

int main()
{
	float n;
	
	cout<<"Masukan nilai (0-100) : ";
	cin>>n;
	cout<<"\n";
	
	if(n >= 80 && n <= 100)
	{
		cout<<"Nilai : A\n";
	}
	else if(n >= 60 && n<80)
	{
		cout<<"Nilai : B\n";
	}
	else if(n >= 40 && n<60)
	{
		cout<<"Nilai : C\n";
	}
	else if(n >= 20 && n<40)
	{
		cout<<"Nilai : D\n";
	}
	else if (n < 20 && n >= 0)
	{
		cout<<"Nilai : E\n";
	}
	else
	{
		cout<<"Nilai tidak terdaftar\n";
	}
}

