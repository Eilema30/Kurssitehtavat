#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:

     ItalianChef();
    ItalianChef(string name);
    ~ItalianChef();

    bool askSecret(string passWord, int flour, int water);


private:

    string passWord = "pizza";
    int flour;
    int water;
    int makePizza();


};

#endif // ITALIANCHEF_H
