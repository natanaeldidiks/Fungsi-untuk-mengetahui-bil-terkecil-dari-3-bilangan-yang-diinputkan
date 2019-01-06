#include <iostream>
#include <conio.h>

using namespace std;

int terkecil ()
{
    int a,b,c,terkecil;
    cout<< "Masukkan angka pertama  : "; cin>>a;
    cout<< "Masukkan angka kedua    : "; cin>>b;
    cout<< "Masukkan angka ketiga   : "; cin>>c;

    if (a<b)
        terkecil=a;
    else
        terkecil=b;
    if (c<terkecil)
        terkecil=c;
    cout << "Bilangan terkecilnya adalah : " <<terkecil <<endl;
}

int main ()
{
    cout<< "\n #PROGAM MENENTUKAN BILANGAN TERKECIL DARI 3 BILANGAN YANG DIINPUTKAN#\n";
    cout<< "=======================================================================\n";

    terkecil ();

    getch();
    return 0;
}
