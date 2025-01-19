#include <iostream>
#include "pankkitili.h"

using namespace std;

int main()
{
    Pankkitili munTili;

    munTili.setSaldo(150);
    cout << "Saldo on "
         << munTili.getSaldo()
         << endl;

    return 0;
}
