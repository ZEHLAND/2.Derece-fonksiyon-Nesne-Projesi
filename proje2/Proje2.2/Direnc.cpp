/*
Hilal Zehra Aydýn
190707078
Bilgisayar Mühendisliði
Bahar Dönemi
Proje 2
Gülþah TÜMÜKLÜ ÖZYER
*/

#include<iostream> //Iostream kütüphanesi include edildi
#include "Direnc.h" //Direnc headeri include edildi
using namespace std; //std namespacei kullanýldý

void Direnc::DegerAta(int r){ 
	R = r;
	//Direnc classýnýn DegerAta fonksiyonuna gelen r parametresi R primary tipinde deðiþkene atandý
}
double Direnc::AkimHesapla(int V){
	return V / double(R);
	//Direnc classýnýn AkimHesapla fonksiyonuna gelen V parametresi ile Akýmý hesaplayýp return etti
}
int Direnc::GerilimHesapla(int I){
	return I*R;//Direnc classýnýn GerilimHesapla fonksiyonuna gelen I parametresi ile Gerilimi hesaplayýp return etti
}
