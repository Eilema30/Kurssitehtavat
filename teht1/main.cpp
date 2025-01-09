#include <iostream>
#include <ctime>

using namespace std;
int game(int maxnum); //funktion prototyyppi

int main()
{
    int arvausten_lkm = 0;
    int maxnum = 3;
    arvausten_lkm = game(maxnum);
    cout << "Arvausten maara: "
         << arvausten_lkm
         << endl;

    return 0;
}

int game(int maxnum){

    int arvausten_lkm = 0;
    srand(time(NULL));
    int satunnaisluku = rand() % maxnum;
    int arvaus = 0;

    cout << "maxnum= " << maxnum << endl;

    while(satunnaisluku != arvaus) {
        cout << "Anna luku " << endl;
        cin >> arvaus;
        arvausten_lkm++; // kasvatetaan arvausten lukumäärää

        if (satunnaisluku == arvaus) {
            cout << "Oikein!"
                 << endl;
        } else if (arvaus > satunnaisluku){
            cout << "Luku on pienempi"
                 << endl;
        } else if (arvaus < satunnaisluku) {
            cout << "Luku on suurempi"
                 << endl;
        }
    }

    return arvausten_lkm;
}
