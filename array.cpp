#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x[10]={80,77,105,53,111,10,7,-4,70,90};
	int i;
	int mak = 1000;
	int min = 0;
	
	for (i=0;i<10;i++)
	{
		if(x[i]<mak)
		{
			mak = x[i];
		}
		
		if(x[i]>min);
		{
			min = x[i];
		}
	}
	cout<<"Nilai maksimum adalah : "<<min<<"\n";
	cout<<"Nilai minimum adalah : "<<mak<<"\n";
	
	getch();
}
