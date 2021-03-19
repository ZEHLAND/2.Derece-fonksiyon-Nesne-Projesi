/*
Hilal Zehra Aydýn
190707078
Bilgisayar Mühendisliði
Bahar Dönemi
Proje 2
Gülþah TÜMÜKLÜ ÖZYER
*/

#include <iostream> //Iostream kütüphanesi include edildi
#include "Direnc.h" //Direnc headeri include edildi
#include<locale.h>  //Türkçe karakter için locale include edildi
using namespace std; //std namespacei kullanýldý

int main() {
	setlocale(LC_ALL, "Turkish");  //Türkçe karakter kodu
	
	Direnc devre; //Direnc classýnýn devre adýnda nesne oluþturuldu
	int direnc,akim; //direnc , akým deðiþkenleri tanýmlandý
	double gerilim; //gerilim double tipinde tanýmlandý
	
	cout << "Ohm Cinsinden Direç(R) Deðerini Girin : ";
	cin >> direnc; //Kullanýcýdan direnç deðeri alýndý
	
	devre.DegerAta(direnc);
	// devre nesnesinin DegerAta fonksiyonu çaðrýlýp deðerler atandý
	
	cout << "Akýmý Hesaplamak Ýçin V(Gerilim) Deðerini Girin  : ";
	cin >> gerilim; //Kullanýcýdan gerilim alýndý
	cout << "Gerilimi Hesaplamak Ýçin I(Akým) Deðerini Girin  : ";
	cin >> akim; //Kullanýcýdan akým alýndý
	
	
	cout << "\n--------------------------------\nDirencin Ýçinden Geçen Akým : " << devre.AkimHesapla(gerilim);
	/* devre nesnesinin AkimHesapla fonksiyonu çaðrýlýp akýmlar hesaplandý
	ve ekrana return edildi.*/
	cout << "\nDirenç Uçlarýnda Oluþacak Gerilim : " << devre.GerilimHesapla(akim);
	/* devre nesnesinin GerilimHesapla fonksiyonu çaðrýlýp akýmlar hesaplandý
	ve ekrana return edildi.*/
	
	
	cout << "\n--------------------------------\n\n";
	system("pause");
	return 0;
}
