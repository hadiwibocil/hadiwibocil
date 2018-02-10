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

NODE *NODEBaru (char item)
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

void TambahNode(NODE **p,char item)
{
	NODE *n;
	n = NODEBaru(item);
	*p=n;
}

void preOrder (POKOK *T)
{
	if (!PokokKosong(T))
	{
		printf("%c ", T->data);
		preOrder(T->left);
		preOrder(T->right);
	}
}

void inOrder(POKOK *T)
{
	if (!PokokKosong(T))
	{
		inOrder(T->left);
		printf("%c ", T->data);
		inOrder(T->right);
	}
}

void postOrder(POKOK *T)
{
	if(!PokokKosong(T))
	{
		postOrder(T->left);
		postOrder(T->right);
		printf("%c ", T->data);
	}
}

int main()
{
	POKOK *head;
	char huruf;
	inti (&head);
	TambahNode (&head,huruf='Q');
	TambahNode (&head->left,huruf ='W');
	TambahNode (&head->left->right,huruf ='E');
	TambahNode (&head->right,huruf ='F');
	TambahNode (&head->right->right,huruf ='R');
	TambahNode (&head->right->right->left,huruf ='T');
	cout<<"Tampilan secara PreOrder : ";
	preOrder(head);
	cout<<"\nTampilan secara InOrder : ";
	inOrder(head);
	cout<<"\nTampilan secara PostOrder : ";
	postOrder(head);
	cout<<"\n\n";
	getch();
	return 0;
}
