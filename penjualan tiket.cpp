#include <conio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{

char kodeKonser,jenisTiket,jenis[30],namaPembeli[30],judulKonser[30],ulang;
int jmlBeli,ttlHarga,ttlBayar,Kembalian,uangBayar,hargaSatuan;
float disc;
 atas:
  cout<<"===================================================="<<endl;  
  cout<<"\tProgram Penjualan Tiket Konser Musik"<<endl;
  cout<<"===================================================="<<endl;
  cout<<endl; 
  cout<<"Nama Pembeli  : ";cin>>namaPembeli;
  cout<<""<<endl;
  cout<<"----------------------------------------------------"<<endl;
  cout<<"Menu Pilihan Konser Musik"<<endl;
  cout<<"----------------------------------------------------"<<endl;
  cout<<"1. Friday I'm in Concert With Tompi feat Rizky"<<endl;
  cout<<"2. Konser Arti Cinta With Ari Lasso"<<endl;
  cout<<"3. Rollupfest 2016 Jogja Folk Festival"<<endl;
  cout<<"4. In Love with Glenn Fredly & Isyana Sarasvati"<<endl;
  cout<<"----------------------------------------------------"<<endl;
  cout<<"Pilih Kode Konser [1-4] : ";cin>>kodeKonser;
  cout<<""<<endl;
  cout<<"----------------------------------------------------"<<endl;
  cout<<"Jenis Tiket"<<endl;
  cout<<"----------------------------------------------------"<<endl;
  cout<<"1. VVIP"<<endl;
  cout<<"2. VIP"<<endl;
  cout<<"3. KLS1"<<endl;
  cout<<"4. KLS2"<<endl;
  cout<<"----------------------------------------------------"<<endl;
  cout<<"Pilih Jenis Tiket[1-4] : ";cin>>jenisTiket;
  cout<<"Jumlah Pembelian : ";cin>>jmlBeli;
  cout<<""<<endl;
  cout<<"----------------------------------------------------"<<endl;
  cout<<"Resi Penjualan Tiket Konser"<<endl;
  cout<<"----------------------------------------------------"<<endl;

  cout<<"Nama Pembeli  : "<<namaPembeli<<endl;
   if (kodeKonser=='1')
   {
   strcpy(judulKonser,"Friday I'm in Concert With Tompi feat Rizky");
   if (jenisTiket=='1')
   {  strcpy(jenis,"VVIP");
   hargaSatuan=2500000;
   }
   else if (jenisTiket=='2')
   {  strcpy(jenis,"VIP");
   hargaSatuan=1000000;
   }
   
   else if (jenisTiket=='3')
   {  strcpy(jenis,"KLS1");
   hargaSatuan=500000;
   }
    else if (jenisTiket=='4')
   {  strcpy(jenis,"KLS2");
   hargaSatuan=250000;
   }}
   
   
   else if (kodeKonser=='2')
   {
   strcpy(judulKonser,"Konser Arti Cinta With Ari Lasso");
   if (jenisTiket=='1')
   {  strcpy(jenis,"VVIP");
   hargaSatuan=2000000;
   }
   else if (jenisTiket=='2')
   {  strcpy(jenis,"VIP");
   hargaSatuan=1500000;
   }
   
   else if (jenisTiket=='3')
   {  strcpy(jenis,"KLS1");
   hargaSatuan=500000;
   }
    else if (jenisTiket=='4')
   {  strcpy(jenis,"KLS2");
   hargaSatuan=250000;
   }}
   
    
   else if (kodeKonser=='3')
   {
   strcpy(judulKonser,"Rollupfest 2016 Jogja Folk Festival");
   if (jenisTiket=='1')
   {  strcpy(jenis,"VVIP");
   hargaSatuan=2300000;
   }
   else if (jenisTiket=='2')
   {  strcpy(jenis,"VIP");
   hargaSatuan=1200000;
   }
   
   else if (jenisTiket=='3')
   {  strcpy(jenis,"KLS1");
   hargaSatuan=750000;
   }
   
    else if (jenisTiket=='4')
   {  strcpy(jenis,"KLS2");
   hargaSatuan=500000;
   }}
   
   else if (kodeKonser=='4')
   {
   strcpy(judulKonser,"In Love with Glenn Fredly & Isyana Sarasvati");
   if (jenisTiket=='1')
   {  strcpy(jenis,"Tribune");
   hargaSatuan=2700000;
   }
   else if (jenisTiket=='2')
   {  strcpy(jenis,"VIP");
   hargaSatuan=2100000;
   }
   
    else if (jenisTiket=='3')
   {  strcpy(jenis,"KLS1");
   hargaSatuan=700000;
   }
   
   else if (jenisTiket=='4')
   {  strcpy(jenis,"KLS2");
   hargaSatuan=500000;
   }
   }
   else
   {
   cout<<"----------------------------------------------------"<<endl;
   cout<<"Maaf Kode yang Anda Masukan Salah"<<endl<<endl;
   cout<<"Lakuakan Input Ulang [Y/T]?:";cin>>ulang;
   cout<<""<<endl;
   if(ulang=='Y'||ulang=='y')
   goto atas;
   else
   goto bawah;
   }
  
  cout<<"Nama Konser Musik : "<<judulKonser<<endl;
  cout<<"Jenis Tiket Musik : "<<jenis<<endl;
  cout<<"Harga Satuan  : Rp. "<<hargaSatuan<<endl;
  cout<<"Jumlah Pembelian : "<<jmlBeli<<endl;
  cout<<"----------------------------------------------------"<<endl;
  ttlHarga=hargaSatuan*jmlBeli;
  cout<<"Sub Total  : Rp. "<<ttlHarga<<endl;
  if(jmlBeli>5)
  disc=0.05*ttlHarga;
  else
  disc=0;
  cout<<"Diskon Pembelian : "<<disc<<endl;
  ttlBayar=ttlHarga-disc;
  cout<<"Total Bayar  : Rp. "<<ttlBayar<<endl;
  cout<<"----------------------------------------------------"<<endl;
  cout<<"Uang Bayar  : Rp. ";cin>>uangBayar;
  Kembalian=uangBayar-ttlBayar;
  cout<<"Kembalian  : Rp. "<<Kembalian<<endl;
  cout<<"===================================================="<<endl;
  cout<<"Pesan Tiket Kembali [Y/T]? : ";cin>>ulang;
  cout<<""<<endl;
  if(ulang=='Y'||ulang=='y')
  goto atas;
  else
  goto bawah;

  bawah:
  cout<<"===================================================="<<endl;
  cout<<"  Terima Kasih Telah Membeli Tiket"<<endl;
  cout<<"===================================================="<<endl;
  getch();
 }
