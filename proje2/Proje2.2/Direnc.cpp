/*
Hilal Zehra Ayd�n
190707078
Bilgisayar M�hendisli�i
Bahar D�nemi
Proje 2
G�l�ah T�M�KL� �ZYER
*/

#include<iostream> //Iostream k�t�phanesi include edildi
#include "Direnc.h" //Direnc headeri include edildi
using namespace std; //std namespacei kullan�ld�

void Direnc::DegerAta(int r){ 
	R = r;
	//Direnc class�n�n DegerAta fonksiyonuna gelen r parametresi R primary tipinde de�i�kene atand�
}
double Direnc::AkimHesapla(int V){
	return V / double(R);
	//Direnc class�n�n AkimHesapla fonksiyonuna gelen V parametresi ile Ak�m� hesaplay�p return etti
}
int Direnc::GerilimHesapla(int I){
	return I*R;//Direnc class�n�n GerilimHesapla fonksiyonuna gelen I parametresi ile Gerilimi hesaplay�p return etti
}
