/*
Hilal Zehra Ayd�n
190707078
Bilgisayar M�hendisli�i
Bahar D�nemi
Proje 2
G�l�ah T�M�KL� �ZYER
*/

#include <iostream> //Iostream k�t�phanesi include edildi
#include "polinom.h" //polinom ad�nda header dosyas� include edildi
#include<locale.h> //T�rk�e karakterlerin g�z�kmesi i�in gerekli olan k�t�phane include edildi
using namespace std;


int main() {
	setlocale(LC_ALL, "Turkish"); //T�rk�e karakter deste�i 
	
	int a,b,c,x,y; //a,b,c,x,y int tipinde de�i�ken tan�mland�
	cout << "Denklemin A De�erini Girin : ";
	cin >> a; //Kullan�c�dan denklemin a de�i�keni al�nd�
	cout << "Denklemin B De�erini Girin : ";
	cin >> b; //Kullan�c�dan denklemin b de�i�keni al�nd�
	cout << "Denklemin C Sabitini Girin : ";
	cin >> c; //Kullan�c�dan denklemin c de�i�keni al�nd�
	cout << "X De�erini Girin : ";
	cin >> x; //Kullan�c�dan denklemin x de�eri al�nd�
	
	polinom denklem; //denklem ad�nda polinom class�n�n nesnesi olu�turuldu
	denklem.KatsayilaraDegerAta(a,b,c); 
	/*Denklem nesnesinin KatsayilaraDegerAta fonksiyonuna 3 parametre g�nderildi
	  bu sayede denklemin katsay�lar� atan�r.
	*/
	
	cout << "\n---------------\nY De�eri = " << denklem.DegerHesapla(x);
	/*Kullan�c�dan al�nan x de�i�keni denklem nesnesinin DegerHesapla fonksiyonuna g�nderilir
	ve denklemde x yerine yaz�l�p sonuc return edilip ekrana bast�r�l�r.
	*/
	denklem.KokleriHesapla();
	/*En son denklem nesnesinin KokleriHesapla ad�nda void tipinde fonksiyonu �a��larak
	denklemin k�kleri ekrana bast�r�l�r.
	*/
	
	
	cout << "\n---------------\n\n";
	system("pause"); //Ekran�n kapanmamas�n� sa�lar
	return 0;
	
}
