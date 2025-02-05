#include "pankkitili.h"
#include <iostream>

using namespace std;

Pankkitili::Pankkitili()
{
    cout << "Tama on konstruktori" << endl;
}

Pankkitili::Pankkitili(string o)
{

}



bool Pankkitili::withdraw(double summa)
{
    if (summa < 0)
    {
        cout << "Nosto epaonnistui" << endl;
        return false;
    }

    if (summa > saldo){
        cout << "Nosto epaonnistui" << ", ei tarpeeksi varoja " << endl;
        return false;
    }


        saldo -= summa; //en tiedä toimiiko
        cout << "Nosto onnistui, uusi saldo on: " << saldo << endl;
        return true;

}

bool Pankkitili::deposit(double summa)
{
    if (summa <= 0){
        cout << "Talletus epaonnistui" << endl;
        return false;
    }

    saldo += summa;
        cout << "Talletus onnistui, uusi saldo: " << saldo << endl;
        return true;



}

double Pankkitili::getBalance()
{

}
