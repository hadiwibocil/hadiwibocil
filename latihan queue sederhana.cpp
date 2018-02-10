#include <iostream>

using namespace std;

#define MaxEl 6
typedef int address;
typedef char infotype;

typedef struct
{
	infotype T[MaxEl];
	address Head;
	address Tail;
}Queue;

void CreateEmpty(Queue*Q);

int IsEmpty(Queue Q);

int IsFull(Queue Q);

int IsOneElmt(Queue Q);

void Add(Queue*Q, infotype val);

void Del(Queue*Q, infotype *val);

void PrintQueue(Queue Q);

void Geser(Queue*Q, int indeks);

int main()
{
	cout<<" Latihan Queue \n";
	cout<<"\n";
	
	Queue myQueue;
	CreateEmpty(&myQueue);
	infotype val;
	int n=0;
	
	for(int i=0; i<MaxEl; i++)
	{
		n+=1;
		cout<<"Input ke "<<n<<" : ";
		cin>>val;
		Add(&myQueue, val);
	}
	
//	Add(&myQueue,'A');
//	Add(&myQueue,'B');
//	Add(&myQueue,'C');
//	Add(&myQueue,'D');
//	Add(&myQueue,'E');
//	Add(&myQueue,'F');
	
	infotype valToDelete;
	string a;
	do
	{
	cout<<"\n\nKondisi antrian saat ini : \n";
	PrintQueue(myQueue);
	
	infotype valToDelete ;
	cout<<"\n\nAntrian berikutnya : "<< valToDelete<<"\n";
	Del(&myQueue, &valToDelete);
//	Del(&myQueue, &valToDelete);
	
	Geser(&myQueue, 2);
	
	cout<<"\n\nKondisi antrian saat ini : \n";
	PrintQueue(myQueue);
	
	system("pause");
	}while(a=="Y" || a=="y");	
}

void CreateEmpty(Queue*Q)
{
	(*Q).Head = (*Q).Tail = -1;
}

int IsEmpty(Queue Q)
{
	return (Q.Head == -1&& Q.Tail ==-1);
}

int IsOneElmt(Queue Q)
{
	return (Q.Head == Q.Tail && Q.Head != -1);
}

int IsFull(Queue Q)
{
	return(Q.Head<Q.Tail && Q.Tail - Q.Head == MaxEl -1 || 
	Q.Head>Q.Tail && Q.Head - Q.Tail == 1);
}

void Add(Queue *Q, infotype val)
{
	if (!IsFull(*Q))
	{
		if (IsEmpty(*Q))
		{
			(*Q).Head = (*Q).Tail = 0;
			(*Q).T[(*Q).Head] = val;
		}
		else
		{
			if	((*Q).Tail == MaxEl - 1)
				(*Q).Tail=0;
			else
				(*Q).Tail++;
				(*Q).T[(*Q).Tail] = val;
		}
	}
	else
		cout<<"Error : Queue is full. No more place to be added \n";
}

void Del(Queue *Q, infotype *val)
{
	if (!IsEmpty(*Q))
	{
		*val = (*Q).T[(*Q).Head];
		if (IsOneElmt(*Q))
			CreateEmpty(&(*Q));
		else
			if ((*Q).Head == MaxEl -1)
				(*Q).Head = 0;
			else
				(*Q).Head++;
	}
	else
		cout<<" Error : Empty Queue can not be deleted\n";
}

void PrintQueue(Queue Q)
{
	address i;
	if (Q.Head <= Q.Tail)
	{
		for(i = Q.Head; i <= Q.Tail; i++)
		{
			printf("%c ", Q.T[i]);
		}
	}
	else
	{
		for(i= Q.Head; i <= MaxEl -1; i++)
		{
			printf("%c ", Q.T[i]);
		}
		for (i = 0; i<= Q.Tail; i++)
		{
			printf("%c ", Q.T[i]);
		}
	}
	printf("\n");
}


void Geser(Queue *Q, int indeks)
{
	if (indeks >= 0 && indeks<MaxEl)
	{
		if (!IsEmpty(*Q))
		{
			if (IsOneElmt(*Q))
				CreateEmpty(&(*Q));
				
			else if (indeks == (*Q).Tail)
				(*Q).Tail--;
				
			else if ((*Q).Head < (*Q).Tail)
			{
				for (int pos = indeks; pos<(*Q).Tail; pos++)
				{
					(*Q).T[pos] = (*Q).T[(pos + 1)];
				}
				(*Q).Tail--;
			}
//			else
//			{
//				
//			}
		}
	}
	else
		cout << "Indeks yang akan digeser tidak tersedia ";
}


