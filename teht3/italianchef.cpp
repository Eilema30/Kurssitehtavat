#include "italianchef.h"
#include <string>
using namespace std;

ItalianChef::ItalianChef()
{
    cout << "italianChef defaultkonstruktori, ei nimea"
         << endl;
}

ItalianChef::ItalianChef(string name)
    : Chef(name)
{
    cout << "italianChef konstruktori"
        << ", kokin nimi "
        << name
         << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "italianChef destruktori"
         << endl;
}

bool ItalianChef::askSecret(string passWord, int f, int w)
{
    if(passWord == "pizza")
    {
        cout << "Oikea salasana!"
             << endl;

        f = flour;
        w = water;
        makePizza();

        return true;
    } else {
        cout << "Vaara salasana!"
             << endl;

        return false;
    }


}

int ItalianChef::makePizza()
{

    int annoksia_f = flour / 5 ;
    int annoksia_w = water / 5 ;
    int pizzoja = min(annoksia_f, annoksia_w);

    cout << "pizzoja tuli: "
         <<pizzoja
         << endl;
    return pizzoja;

}
