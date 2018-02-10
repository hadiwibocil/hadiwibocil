#include <iostream>
#include <conio.h>

using namespace std;

/*int main()
{
	int t;
	int *kt;
	t = 8;
	kt = &t;
	cout<<"Nilai t				= "<<t<<"\n";
	cout<<"Nilai *kt			= "<<*kt<<"\n";
	cout<<"Nilai kt (alamat t)		= "<<kt<<"\n";
	getch();
}*/

int main()
{
	int x[10]={0,1,2,3,4,5,6,7,8,9};
	int *px;
	int i;
	
	for(i=0;i<10;i++)
	{
		px = &x[i];
		cout<<x[i]<<" = "<<*px<<" =  "<<px<<"\n";
	}
	getch();
}
