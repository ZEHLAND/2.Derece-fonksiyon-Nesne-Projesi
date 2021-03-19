/*
Hilal Zehra Ayd�n
190707078
Bilgisayar M�hendisli�i
Bahar D�nemi
Proje 2
G�l�ah T�M�KL� �ZYER
*/

#include <iostream> //Iostream k�t�phanesi include edildi
#include "Direnc.h" //Direnc headeri include edildi
#include<locale.h>  //T�rk�e karakter i�in locale include edildi
using namespace std; //std namespacei kullan�ld�

int main() {
	setlocale(LC_ALL, "Turkish");  //T�rk�e karakter kodu
	
	Direnc devre; //Direnc class�n�n devre ad�nda nesne olu�turuldu
	int direnc,akim; //direnc , ak�m de�i�kenleri tan�mland�
	double gerilim; //gerilim double tipinde tan�mland�
	
	cout << "Ohm Cinsinden Dire�(R) De�erini Girin : ";
	cin >> direnc; //Kullan�c�dan diren� de�eri al�nd�
	
	devre.DegerAta(direnc);
	// devre nesnesinin DegerAta fonksiyonu �a�r�l�p de�erler atand�
	
	cout << "Ak�m� Hesaplamak ��in V(Gerilim) De�erini Girin  : ";
	cin >> gerilim; //Kullan�c�dan gerilim al�nd�
	cout << "Gerilimi Hesaplamak ��in I(Ak�m) De�erini Girin  : ";
	cin >> akim; //Kullan�c�dan ak�m al�nd�
	
	
	cout << "\n--------------------------------\nDirencin ��inden Ge�en Ak�m : " << devre.AkimHesapla(gerilim);
	/* devre nesnesinin AkimHesapla fonksiyonu �a�r�l�p ak�mlar hesapland�
	ve ekrana return edildi.*/
	cout << "\nDiren� U�lar�nda Olu�acak Gerilim : " << devre.GerilimHesapla(akim);
	/* devre nesnesinin GerilimHesapla fonksiyonu �a�r�l�p ak�mlar hesapland�
	ve ekrana return edildi.*/
	
	
	cout << "\n--------------------------------\n\n";
	system("pause");
	return 0;
}
