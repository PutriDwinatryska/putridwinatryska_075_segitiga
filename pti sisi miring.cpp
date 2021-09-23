#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main(){

	int a,b,c,k;
	
	cout<<"\t***Program Mencari Sisi Miring Dan Keliling Segitiga Siku-Siku***\n";
	cout<<"\t------------------------------\n";
	
	cout<<"\n//Menghitung Sisi Miring Segitiga\n";
	cout<<"\t---------------------------------\n";
	cout<<"alas\t\t= "; cin>>a;
	cout<<"tinggi\t\t= "; cin>>b;
	c= sqrt(a*a+b*b);
	cout<<"panjang sisi miring\t= "<<c;
	cout<<"\n\t*****\n";
	cout<<"//Menghitung Keliling Segitiga\n";
	cout<<"\t----------------------------\n";
	cout<<"alas\t\t= "; cin>>a;
	cout<<"tinggi\t\t= "; cin>>b;
	cout<<"sisi miring\t="; cin>>c;
	k=a+b+c;
	cout<<"keliling segitiga= "<<k;
	
	getch ();
}
