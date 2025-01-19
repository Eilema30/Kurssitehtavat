#include "pankkitili.h"

Pankkitili::Pankkitili() {
    saldo = 0;
    pinkoodi = 1234;
    tilinro = "FI000023113";

}



int Pankkitili::getSaldo() const
{
    return saldo;
}

void Pankkitili::setSaldo(int newSaldo)
{
saldo = saldo + newSaldo;
}
