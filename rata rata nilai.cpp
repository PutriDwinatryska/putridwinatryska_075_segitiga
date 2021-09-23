#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
main()
{
int harga_motor, lama_kredit, harga_pokok, bunga_kredit, cicilan, total_harga_motor, keuntungan_deler;

cout<<"\t  Menghitung cicilan, total harga cicilan";
cout<<"\n\tdan keuntungan deler dari pembelian sepeda motor";
cout<<"---------------------------------------------------\n";
cout<<"masukaan harga motor\t\t= "; cin>>harga_motor;
cout<<"masukan lama kredit(bulan)\t= "; cin>>lama_kredit;
cout<<"-----------------------------------------------------\n";

harga_pokok=harga_motor/lama_kredit;
bunga_kredit=harga_pokok*0.1;
cicilan=harga_pokok+bunga_kredit;
total_harga_motor=cicilan*lama_kredit;
keuntungan_deler=total_harga_motor-harga_motor;

cout<<"\nharga pokok\t\t= "<<harga_pokok;
cout<<"\nbunga kredit\t\t\t= "<<bunga_kredit;
cout<<"\ncicilan\t\t\t= "<<cicilan;
cout<<"\ntotal harga motor\t= "<<total_harga_motor;
cout<<"\nkeuntungan deler\t= "<<keuntungan_deler;

getch();
}

