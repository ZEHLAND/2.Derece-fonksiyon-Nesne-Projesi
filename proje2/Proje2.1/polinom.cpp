/*
Hilal Zehra Aydýn
190707078
Bilgisayar Mühendisliði
Bahar Dönemi
Proje 2
Gülþah TÜMÜKLÜ ÖZYER
*/

#include "polinom.h" //polinom adýnda header dosyasý include edildi
#include <math.h> //Matematiksel hesaplar için math kütüphanesi include edildi
#include <iostream> //Iostream kütüphanesi include edildi
using namespace std; //std namespacesi kullanýldý.

void polinom::KatsayilaraDegerAta(int a,int b, int c){
	A = a;
	B = b;
	C = c;
}
/* 
Dýþarýdan alýnan a,b,c deðiþkenleri private olarak tanýmlý A,B,C deðiþkenlerine
aktarýldý bu sayede katsayýlar atanmýþ oldu.
*/

int polinom::DegerHesapla(int x){
	int y = (A*pow(x,2)) + (B*x) + C;
	return y;
}
/* 
Dýþarýdan alýnan x deðiþkenini int tipinde y adýnda deðiþken ile hesaplayýp return eden DegerHesapla
fonksiyonu.
*/

void polinom::KokleriHesapla(){ // Void tipinde polinom classýnýn kokleriHesapla fonksiyonu
	float delta,kok1,kok2; //float tipinde deðiþkenler tanýmlandý
	delta = pow(B, 2) - 4 * A*C; //Delta hesaplandý
	if(delta < 0){ //Delta 0 dan küçükse
		cout << "\nReal Kok Yok"; //Reel kök yok
	}
	else if(delta == 0){ //Delta 0 ise
		kok1 = (-1 * B) / (2 * A); //Kök1 hesaplanýr
		cout << "\nTek kök var=" << kok1; //Ekrana yazýlýr
	}
	else{ //Delta 0 dan büyükse
		kok1 = (-1 * B + sqrt(delta)) / (2 * A); //Kök1 hesaplanýr
        kok2 = (-1 * B - sqrt(delta)) / (2 * A);//Kök2 hesaplanýr
        cout << "\n1. kök = " << kok1; 
        cout << "\n2. kök = " << kok2;
        //Kök1 ve Kök2 ekrana yazýlýr.
	}
}
