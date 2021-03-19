/*
Hilal Zehra Ayd�n
190707078
Bilgisayar M�hendisli�i
Bahar D�nemi
Proje 2
G�l�ah T�M�KL� �ZYER
*/

#include "polinom.h" //polinom ad�nda header dosyas� include edildi
#include <math.h> //Matematiksel hesaplar i�in math k�t�phanesi include edildi
#include <iostream> //Iostream k�t�phanesi include edildi
using namespace std; //std namespacesi kullan�ld�.

void polinom::KatsayilaraDegerAta(int a,int b, int c){
	A = a;
	B = b;
	C = c;
}
/* 
D��ar�dan al�nan a,b,c de�i�kenleri private olarak tan�ml� A,B,C de�i�kenlerine
aktar�ld� bu sayede katsay�lar atanm�� oldu.
*/

int polinom::DegerHesapla(int x){
	int y = (A*pow(x,2)) + (B*x) + C;
	return y;
}
/* 
D��ar�dan al�nan x de�i�kenini int tipinde y ad�nda de�i�ken ile hesaplay�p return eden DegerHesapla
fonksiyonu.
*/

void polinom::KokleriHesapla(){ // Void tipinde polinom class�n�n kokleriHesapla fonksiyonu
	float delta,kok1,kok2; //float tipinde de�i�kenler tan�mland�
	delta = pow(B, 2) - 4 * A*C; //Delta hesapland�
	if(delta < 0){ //Delta 0 dan k���kse
		cout << "\nReal Kok Yok"; //Reel k�k yok
	}
	else if(delta == 0){ //Delta 0 ise
		kok1 = (-1 * B) / (2 * A); //K�k1 hesaplan�r
		cout << "\nTek k�k var=" << kok1; //Ekrana yaz�l�r
	}
	else{ //Delta 0 dan b�y�kse
		kok1 = (-1 * B + sqrt(delta)) / (2 * A); //K�k1 hesaplan�r
        kok2 = (-1 * B - sqrt(delta)) / (2 * A);//K�k2 hesaplan�r
        cout << "\n1. k�k = " << kok1; 
        cout << "\n2. k�k = " << kok2;
        //K�k1 ve K�k2 ekrana yaz�l�r.
	}
}
