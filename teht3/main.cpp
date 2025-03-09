#include <iostream>
#include "chef.h"
#include "italianchef.h"
#include <string>

using namespace std;

int main()
{
    /*Chef c_olio("Gordon");

     int annoksia = c_olio.makeSalad(10);
    cout << "Annoksia tehtiin "
         << annoksia
         << endl;
*/

    ItalianChef i_olio("Mario");
    i_olio.askSecret("pizza", 10, 10);



    return 0;
}
