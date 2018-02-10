#include <iostream>

using namespace std;

typedef struct Node
{
	int data;
	Node*next;
}data;

Node*head;
int main()
{
	int n;
	char p;
	do
	{
		Node *baru;
		baru = new Node;
		cout<<"Masukan angka : ";
		cin>>n;
		baru->data=n;
		baru->next=NULL;
		
		if (head==NULL)
		{
			head=baru;
			head->next=NULL;
		}
		else
		{
			Node *tmp;
			tmp=head;
			while (tmp->next!=NULL)
				{
					tmp=tmp->next;
				}
				tmp->next=baru;
		}
		
		if(head!=NULL)
		{
			Node *tampil;
			tampil=head;
			
				while (tampil!=NULL)
				{
					cout<<tampil->data<<" ";
					tampil=tampil->next;
				}
		}
		
		cout<<"\n";
		cout<<"Apakah ingin input lagi?(y/n) ";
		cin>>p;
		
	}while(p=='y');
}
