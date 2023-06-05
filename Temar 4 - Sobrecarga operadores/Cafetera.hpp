#ifndef CAFETERA_HPP
#define CAFETERA_HPP

#include <string>
using namespace std;
class Cafetera{
private:
    float capacidad {1.0};
    int tazasXMin {1};
    string nombre {"Indefinido"};
public:
    Cafetera(string, float, int);
    string toString();
    friend int operator +(Cafetera &c1,Cafetera &c2);
    friend int operator +(int,Cafetera &c);
};

#endif
