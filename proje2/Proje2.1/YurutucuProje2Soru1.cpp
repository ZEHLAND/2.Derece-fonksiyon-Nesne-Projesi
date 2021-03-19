/*
Hilal Zehra Aydýn
190707078
Bilgisayar Mühendisliði
Bahar Dönemi
Proje 2
Gülþah TÜMÜKLÜ ÖZYER
*/

#include <iostream> //Iostream kütüphanesi include edildi
#include "polinom.h" //polinom adýnda header dosyasý include edildi
#include<locale.h> //Türkçe karakterlerin gözükmesi için gerekli olan kütüphane include edildi
using namespace std;


int main() {
	setlocale(LC_ALL, "Turkish"); //Türkçe karakter desteði 
	
	int a,b,c,x,y; //a,b,c,x,y int tipinde deðiþken tanýmlandý
	cout << "Denklemin A Deðerini Girin : ";
	cin >> a; //Kullanýcýdan denklemin a deðiþkeni alýndý
	cout << "Denklemin B Deðerini Girin : ";
	cin >> b; //Kullanýcýdan denklemin b deðiþkeni alýndý
	cout << "Denklemin C Sabitini Girin : ";
	cin >> c; //Kullanýcýdan denklemin c deðiþkeni alýndý
	cout << "X Deðerini Girin : ";
	cin >> x; //Kullanýcýdan denklemin x deðeri alýndý
	
	polinom denklem; //denklem adýnda polinom classýnýn nesnesi oluþturuldu
	denklem.KatsayilaraDegerAta(a,b,c); 
	/*Denklem nesnesinin KatsayilaraDegerAta fonksiyonuna 3 parametre gönderildi
	  bu sayede denklemin katsayýlarý atanýr.
	*/
	
	cout << "\n---------------\nY Deðeri = " << denklem.DegerHesapla(x);
	/*Kullanýcýdan alýnan x deðiþkeni denklem nesnesinin DegerHesapla fonksiyonuna gönderilir
	ve denklemde x yerine yazýlýp sonuc return edilip ekrana bastýrýlýr.
	*/
	denklem.KokleriHesapla();
	/*En son denklem nesnesinin KokleriHesapla adýnda void tipinde fonksiyonu çaðýlarak
	denklemin kökleri ekrana bastýrýlýr.
	*/
	
	
	cout << "\n---------------\n\n";
	system("pause"); //Ekranýn kapanmamasýný saðlar
	return 0;
	
}
