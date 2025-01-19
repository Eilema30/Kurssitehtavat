#include "peli.h"


Peli::Peli(int mn)
{
    maxNumber = mn;
    cout << "Game konstruktori "
         << "maxNumber "
         << maxNumber
         << endl;
}

Peli::~Peli()
{
    cout << "Game destruktori"
         << endl;
}

void Peli::play()
{
    cout << "Game play"
         << endl;


    srand(time(NULL));
    int randomNumber = rand() % maxNumber;


    cout << "Luku on alle " << maxNumber << endl;

    while(randomNumber != playerGuess) {

        cout << "Arvaus: " << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (randomNumber == playerGuess) {
            cout << "Oikein!"
                 << endl;
            printGameResults();
        } else if (playerGuess > randomNumber){
            cout << "Luku on pienempi"
                 << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Luku on suurempi"
                 << endl;
        }


}
}


void Peli::printGameResults()
{

    cout << "Game printGameResults "
        << "Arvausten maara "
        << numOfGuesses
        << " "
        << "Oikea vastaus: "
        << playerGuess
         << endl;
    ;

}


