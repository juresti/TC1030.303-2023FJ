#include "Cafetera.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Cafetera c1 {"Sencilla",1.5,1};
    Cafetera c2 {"Mediana",3.78,2};
    Cafetera c3 {"Grande",7.89,5};
    Cafetera c4 {"Chomper",13.0,9};
    cout << c1.toString() << endl;
    cout << c2.toString() << endl;
    cout << c3.toString() << endl;

    int total = c1 + c2 + c3 + c4;
    cout << "Con tus tres cafeteras puedes hacer " << 
        to_string(total) << " tazas por minuto\n";
    return 0;
}
