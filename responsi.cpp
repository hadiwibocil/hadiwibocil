#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

using namespace std;

struct node
{
	struct node *left;
	char data;
	struct node *right;
};

typedef struct node NODE;
typedef NODE POKOK;

NODE *NODEBaru (int item)
{
	NODE*n;
	n= (NODE*) malloc (sizeof(NODE));
	if (n != NULL)
	{
		n->data=item;
		n->left=NULL;
		n->right=NULL;
	}
	return n;
}

void inti (POKOK **T)
{
	*T=NULL;
}

typedef enum{FALSE=0,TRUE=1} BOOL;

BOOL PokokKosong(POKOK *T)
{
	return ((BOOL)(T==NULL));
}

void TambahNode(NODE **p,int item)
{
	NODE *n;
	n = NODEBaru(item);
	*p=n;
}

void preOrder (POKOK *T)
{
	if (!PokokKosong(T))
	{
		printf("%i ", T->data);
		preOrder(T->left);
		preOrder(T->right);
	}
}

void inOrder(POKOK *T)
{
	if (!PokokKosong(T))
	{
		inOrder(T->left);
		printf("%i ", T->data);
		inOrder(T->right);
	}
}

void postOrder(POKOK *T)
{
	if(!PokokKosong(T))
	{
		postOrder(T->left);
		postOrder(T->right);
		printf("%i ", T->data);
	}
}

int main()
{
	POKOK *head;
	int huruf[6];
	int jml_a,jml_b;
	inti (&head);
	TambahNode (&head,huruf[0] = 16 );
	TambahNode (&head->left,huruf[1] = 17);
	TambahNode (&head->left->right,huruf[2] = 1);
	TambahNode (&head->right,huruf[3] = 4);
	TambahNode (&head->right->right,huruf[4] = 2);
	TambahNode (&head->right->left,huruf[5] = 3);
	cout<<"Tampilan secara PreOrder : ";
	preOrder(head);
	cout<<"\nTampilan secara InOrder : ";
	inOrder(head);
	cout<<"\nTampilan secara PostOrder : ";
	postOrder(head);
	
	cout<<"\n\n";
	jml_b=huruf[3]+huruf[1];
	jml_a=huruf[4]+huruf[1]+huruf[5];
	cout<<"Jumlah dari 1 + 2 + 3 = "<<jml_a<<"\n";
	cout<<"Jumlah dari 1 + 4 = "<<jml_b;
	
	cout<<"\n";
	getch();
	return 0;
}
