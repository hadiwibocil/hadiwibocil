#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string nama;
	string*pointer_nama;
	
	pointer_nama = &nama;
	
	cout<<"Nama = ";
	getline(cin,nama);
	cout<<"Nama Anda = "<<nama<<"\n";
	cout<<"Alamat Data = "<<pointer_nama<<"\n";
	
	return 0;
}
