#include "chef.h"

Chef::Chef()
{
    cout << "Chef defaultkonstruktori, ei nimea"
         << endl;
}


Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, kokin nimi "
         << chefName
         << endl;
}

Chef::~Chef()
{
    cout << "Chef destruktori "
         << endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{

    int annoksia = 0;
    cout << "Aineksia "
         << aines
         << endl;

    return aines/5;

    // yksi annos = 5 ainesta
    //palauta annosten määrä
}

int Chef::makeSoup(int aines)
{
    int annoksia = 0;
    cout << "Aineksia "
         << aines
         << endl;

    return aines/3;
    // yksi annos = 3 ainesta
    //palauta annosten määrä
}

