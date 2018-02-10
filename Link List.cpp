#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

typedef struct TNode
{
	int data;
	TNode*next;
}data;

TNode*head;
void init()
{
	head=NULL;
}

int IsEmpty()
{
	if(head==NULL)
		return 1;
	else
		return 0;
}

void insertdepan(int n)
{
	TNode*baru;
	baru=new TNode;
	baru->data=n;
	baru->next=NULL;
	if(IsEmpty()==1)
	{
		head=baru;
		head->next=NULL;
	}
	else
	{
		baru->next=head;
		head=baru;
	}
	system("cls");
	cout<<"\nData Terisi\n";
}
void tampil()
{
	TNode *bantu;
	bantu=head;
	if(IsEmpty()==0)
	{
		while(bantu!=NULL)
		{
			cout<<bantu->data<<endl;
			bantu=bantu->next;
		}
	}
	else
	system("cls");
	cout<<"\nMasih Kosong\n";
}

void insertbelakang(int n)
{
	TNode *baru,*bantu;
	baru=new TNode;
	baru->data=n;
	baru->next=NULL;
	if(IsEmpty()==1)
	{
		head=baru;
		head->next=NULL;
	}
	else
	{
		bantu=head;
		while(bantu->next!=NULL)
		{
			bantu=bantu->next;
		}
		bantu->next=baru;
	}
	system("cls");
	cout<<"Data Terisi\n";
}

void hapusdepan()
{
	TNode*hapus;
	int d;
	if(IsEmpty()==0)
	{
		if(head!=NULL)
		{
			hapus=head;
			d=hapus->data;
			head=hapus->next;
			delete hapus;
		}
		system("cls");
		cout<<d<<"Terhapus\n";
	}
	else cout<<"\nMasih Kosong\n";
}

int main()
{
	int pil;
	do
	{
		int n;
		cout<<"=========================\n";
		cout<<"1. Insert Depan\n";
		cout<<"2. Insert Belakang\n";
		cout<<"3. Display\n";
		cout<<"4. Hapus\n";
		cout<<"5. Exit\n";
		cout<<"=========================\n";
		cout<<"Masukan Pilihan (1-5) : ";
		cin>>pil;
		
		switch (pil)
		{
			case 1 :
				cout<<"Masukan Data : ";;
				cin>>n;
				IsEmpty();
				insertdepan(n);
				break;
				
			case 2 :
				cout<<"Masukan Data : ";;
				cin>>n;
				IsEmpty();
				insertbelakang(n);
				break;
			case 3 :
				IsEmpty();
				tampil();
				break;
			case 4 :
				IsEmpty();
				hapusdepan();
				break;
			case 5 :
				exit(0);
		}
	}while (pil!=5);
	return 0;
}
