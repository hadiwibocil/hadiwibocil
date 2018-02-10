#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define max 5

using namespace std;

void push(int stack[],int *top,int value)
{
	if (*top < max)
	{
		*top=*top+1;
		stack[*top]=value;
	}
	else
	{
		cout<<"\n";
		cout<<"Stack penuh, PUSH nilai tidak dapat dilakukan !\n";
		exit(0);
	}
}

void pop(int stack[],int *top,int *value)
{
	if (*top>1)
	{
		*value=stack[*top];
		*top=*top-1;
	}
	else
	{
		cout<<"\n";
		cout<<"Stack kosong, POP nilai tidak dapat dilakukan !\n";
		exit(0);
	}
}

int main()
{
	int stack[max];
	int top=1;
	int n,value,tampil;
	
	do
	{
		do
		{
			cout<<"Masukan nilai yang akan di PUSH = ";
			cin>>value;
			push(stack,&top,value);
			cout<<"Tekan 1 unuk melanjutkan = ";
			cin>>n;
//			for (n=1; n<=max; n++)
//			{
//				cout<<"Tampil : "<<value<<endl;
//			}
		}while(n==1);
		
		cout<<"Tekan 1 untuk melakukan POP = ";
		cin>>n;
		
		while (n==1)
		{
			pop(stack,&top,&value);
			cout<<"Nilai yang di POP = "<<value<<endl;
			cout<<"Tekan 1 untuk melakukan Pop sebuah elemen = ";
			cin>>n;
		}
		
		cout<<"\n";
		cout<<"Tekan 1 untuk melanjutkan = ";
		cin>>n;
	}while (n==1);
	
	
	getch();
	return 0;
}
