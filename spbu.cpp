#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
long int pil;
double bhanbkr,uang;
char kem;

mulai:
system("cls");
{

cout<<"=================================="<<endl;
cout<<"    || |SPBU Sumber Rejeki| ||       "<<endl;
cout<<"=================================="<<endl;
cout<<"\n\n\n****************************************"<<endl;
cout<<"*                                      *"<<endl;

cout<<"*    1. PREMIUM     = Rp.4500/Liter    *"<<endl;
cout<<"*    2. SOLAR       = Rp.5000/Liter    *"<<endl;
cout<<"*    3. PERTAMAX    = Rp.9500/Liter    *"<<endl;
cout<<"*    4. SUPER       = Rp.9500/Liter    *"<<endl;
cout<<"*    5. SUPER EXTRA = Rp.10000/Liter   *"<<endl;
cout<<"*    6. SUPER SHELD = Rp.10600/Liter   *"<<endl;
cout<<"*                                      *"<<endl;
cout<<"****************************************\n\n\n"<<endl;

cout<<"\nMasukkan pilihan anda : ";
cin>>pil;
system("cls");
if (pil==1)
    {
    cout<<"\n\n     =======================";
    cout<<"\n     premium = Rp.4500/Liter"<<endl;
    cout<<"     =======================\n";
    cout<<"\nMasukkan jumlah uang = ";
	cin>>uang;
	bhanbkr=uang/4500;
    cout<<"\nPremium "<<setprecision(3)<<bhanbkr<<" liter.";
    cout<<"\n\nKembali ke menu utama [Y/T] ? ";
    cin>>kem;
    system("cls");
    if (kem == 'y' || kem == 'Y')
         goto mulai;
    else if (kem == 't' || kem == 'T')
         goto tidak;
    }
else if (pil==2)
    {
    cout<<"\n\n     =====================";
    cout<<"\n     solar = Rp.5000/Liter"<<endl;
    cout<<"     =====================\n";
    cout<<"\nMasukkan jumlah uang = ";
	cin>>uang;
    bhanbkr=uang/5000;
    cout<<"\nsolar "<<setprecision(3)<<bhanbkr<<" liter.";
    cout<<"\n\nKembali ke menu utama [Y/T] ? ";
    cin>>kem;
    system("cls");
    if (kem == 'y' || kem == 'Y')
         goto mulai;
    else if (kem == 't' || kem == 'T')
         goto tidak;
    }
else if (pil==3)
    {
    cout<<"\n\n     =======================";
    cout<<"\n     pertamax= Rp.9500/Liter"<<endl;
    cout<<"     =======================\n";
    cout<<"\nMasukkan jumlah uang = ";
	cin>>uang;
    bhanbkr=uang/9500;
    cout<<"\npertamax "<<setprecision(3)<<bhanbkr<<" liter.";
    cout<<"\n\nKembali ke menu utama [Y/T] ? ";
    cin>>kem;
    system("cls");
    if (kem == 'y' || kem == 'Y')
         goto mulai;
    else if (kem == 't' || kem == 'T')
         goto tidak;
    }
else if (pil==4)
    {
    cout<<"\n\n     =====================";
    cout<<"\n     super = Rp.9500/Liter"<<endl;
    cout<<"     =====================\n";
    cout<<"\nMasukkan jumlah uang = ";
	cin>>uang;
    bhanbkr=uang/9500;
    cout<<"\nsuper "<<setprecision(3)<<bhanbkr<<" liter.";
    cout<<"\n\nKembali ke menu utama [Y/T] ? ";
    cin>>kem;
    system("cls");
    if (kem == 'y' || kem == 'Y')
         goto mulai;
    else if (kem == 't' || kem == 'T')
         goto tidak;
    }
else if (pil==5)
    {
    cout<<"\n\n     ============================";
    cout<<"\n     super extra = Rp.10000/Liter"<<endl;
    cout<<"     ============================\n";
    cout<<"\nMasukkan jumlah uang = ";
	cin>>uang;
    bhanbkr=uang/10000;
    cout<<"\nsuper extra "<<setprecision(3)<<bhanbkr<<" liter.";
    cout<<"\n\nKembali ke menu utama [Y/T] ? ";
    cin>>kem;
    system("cls");
    if (kem == 'y' || kem == 'Y')
         goto mulai;
    else if (kem == 't' || kem == 'T')
         goto tidak;
    }
else if (pil==6)
    {
    cout<<"\n\n     ============================";
    cout<<"\n     super sheld = Rp.10600/Liter"<<endl;
    cout<<"     ============================\n";
    cout<<"\nMasukkan jumlah uang = ";
	cin>>uang;
    bhanbkr=uang/10600;
    cout<<"\nsuper sheld "<<setprecision(3)<<bhanbkr<<" liter.";
    cout<<"\n\nKembali ke menu utama [Y/T] ? ";
    cin>>kem;
    system("cls");
    if (kem == 'y' || kem == 'Y')
         goto mulai;
    else if (kem == 't' || kem == 'T')
         goto tidak;
    }
else
    {
    cout<<"Pilihan yang anda masukkan tidak ada.";
    cout<<"\n\nKembali ke menu utama [Y/T] ? ";
    cin>>kem;
    system("cls");
    if (kem == 'y' || kem == 'Y')
         goto mulai;
    else if (kem == 't' || kem == 'T')
         goto tidak;}
    }

tidak :
    cout<<"--------------------------";
    cout<<"\n==========================";
    cout<<"\n\n...... TERIMA KASIH ......\n\n";

    cout<<"==========================";
    cout<<"\n--------------------------";

    }
