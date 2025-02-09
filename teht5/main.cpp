#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"
#include <memory>

using namespace std;

int main()
{

    Seuraaja *A = new Seuraaja("Aapeli");
    Seuraaja *B = new Seuraaja("Bob");
    Seuraaja *C = new Seuraaja("Cecilia");


    A->next = B;
    B->next = C;

    Notifikaattori *N = new Notifikaattori();
    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);
    N->poista(B);
    N->tulosta();
    N->postita("Terve kaikki");



   /* Seuraaja *alku = A;
    while(alku != nullptr) {
        cout << "Listassa nyt: " << alku->getNimi() << endl;
        alku->paivitys("Kaikki ok");
        alku = alku->next;
        if(alku != nullptr){
           cout << "Listassa seuraavana: " << alku->getNimi() << endl;
        } else {
            cout << "Lista loppui" << endl;
        }

    }
    cout << endl; */

    delete A;
    delete B;
    delete C;


    return 0;
}
