#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{


    Pankkitili pa ("Gordon");
    pa.deposit(50);

    pa.deposit(100);

    pa.withdraw(200);

    Luottotili rb ("Mario", 1000);

    rb.withdraw(700);

    rb.deposit(700);


    Asiakas A ("Aaa", 100);
    Asiakas B ("Bee", 100);
    Asiakas C ("Cee", 1000);


   A.talletus(500);
 A.tilisiirto(50,B);







    return 0;

}
