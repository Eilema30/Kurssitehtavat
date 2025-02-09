#include "notifikaattori.h"
#include "seuraaja.h"
#include <iostream>

    using namespace std;

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    uusiSeur->next = seuraajat;
    seuraajat = uusiSeur;


}

void Notifikaattori::poista(Seuraaja *poistSeur)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr) {
        cout << "Poistetaan seuraaja: " << alku->getNimi() << endl;
        if (alku->next = poistSeur) {
            alku->next = poistSeur->next;
                         return;
        }
        else {
            seuraajat->next;
        }
        alku = alku->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr) {
        cout << "Seuraaja: " << alku->getNimi() << endl;
        alku = alku->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    seuraajat->paivitys("Terve kaikki");
}
