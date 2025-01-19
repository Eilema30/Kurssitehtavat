#ifndef PELI_H
#define PELI_H

#include<iostream>

using namespace std;

class Peli
{
public:
    Peli(int);
    ~Peli();
    void play();

private:

    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResults();
};

#endif // PELI_H
