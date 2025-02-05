#include "asiakas.h"
#include <iostream>

using namespace std;

Asiakas::Asiakas(string n, double lr) : kayttotili(nimi), luottotili(nimi, lr)
{
    nimi = n;
    cout << "nimi = " << nimi << endl;
}

bool Asiakas::talletus(double summa)
{
    cout << "asiakas " << nimi << " tallettaa pankkitilille " << summa << endl;
    bool onnistuiko = kayttotili.deposit(summa);
    if( onnistuiko == false) {
        cout << "Talletus epaonnistui" << endl;
    }
    return onnistuiko;
}

bool Asiakas::nosto(double summa)
{
    cout << "asiakas " << nimi << " nostaa pankkitililta " << summa << endl;
        bool onnistuiko = kayttotili.withdraw(summa);
   if ( onnistuiko == false) {
        cout << "Nosto epaonnistui" << endl;
    }
    return onnistuiko;
}

bool Asiakas::tilisiirto(double summa, Asiakas &saaja)
{
    bool onnistuiko = nosto(summa);

    if (onnistuiko == false){
        cout << "Siirto epaonnistui" << endl;
    }

    saaja.talletus(summa);
    cout << "Siirto onnistui" << endl;
    return onnistuiko;
}

bool Asiakas::luotonMaksu(double summa)
{

    cout << "asiakas " << nimi << " maksaa luottotilin velkaa " << summa << endl;
    bool onnistuiko =luottotili.deposit(summa);
    if ( onnistuiko == false) {
        cout << "Maksu epaonnistui" << endl;
    }
    return onnistuiko;

}

bool Asiakas::luotonNosto(double summa)
{

    cout << "asiakas " << nimi << " nostaa luottotililta " << summa << endl;
    bool onnistuiko = luottotili.withdraw(summa);
    if ( onnistuiko == false) {
        cout << "Nosto epaonnistui" << endl;
    }
    return onnistuiko;

}



string Asiakas::getNimi() const
{
    return nimi;
}





