#include "luottotili.h"
#include <iostream>

using namespace std;


Luottotili::Luottotili()
{

}

Luottotili::~Luottotili()
{

}

Luottotili::Luottotili(string o, double lr) : Pankkitili(o)
{
    luottoRaja = lr;
    cout << "luottoraja on " << luottoRaja << endl;
}

bool Luottotili::withdraw(double summa)
{
    if(summa < 0){
        cout << "Nosto epaonnistui" << endl;
        return false;
    }
    if (saldo + summa > luottoRaja){
        cout << "Nosto epaonnistui, luottoraja ylittyi" << endl;
        return false;
    }

    saldo += summa;
    cout << "Nosto onnistui, velka on: " << saldo << endl;
    return true;


}

bool Luottotili::deposit(double summa)
{
    if (summa <= 0){
        cout << "Talletus epaonnistui" << endl;
        return false;
    }

    if(summa >= saldo){
        cout << "Talletus epaonnistui, et voi tallettaa enempaa, kuin velkaa on" << endl;
        return false;
    }

    saldo -= summa;
    cout << "Talletus onnistui, velkaa on jaljella: " << saldo << endl;
        return true;


}
