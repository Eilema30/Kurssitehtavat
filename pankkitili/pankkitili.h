#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;


class Pankkitili
{
public:
    Pankkitili();
    int getSaldo() const;
    void setSaldo(int newSaldo);

private:
    int saldo;
    string tilinro;
    string pinkoodi;
};

#endif // PANKKITILI_H
