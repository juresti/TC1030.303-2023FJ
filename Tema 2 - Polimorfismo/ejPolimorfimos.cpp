#include "Electrodomestico.hpp"
#include "Freidora.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //Electrodomestico elMio {};
    Freidora freiFa{"Limpieza"};
    Freidora freiComp{true,"Quemando",100,200};

    cout << freiFa.toString() << endl;
    cout << freiComp.toString() << endl;

    Electrodomestico *productos[3];
    productos[0] = new Freidora{"Calentado"};
    productos[1] = new Freidora{"Enfriando"};
    productos[2] = new Freidora{true,"Mantener temperatura",30,450};

    Electrodomestico *prodActual = nullptr;
    for (int i=0; i<3; i++){
        prodActual = productos[i];
        cout << prodActual->toString() << endl;
    }


    for (int i=0; i<3; i++){
        cout << productos[i]->dimeFuncionActual() << endl;
    }
    

    Freidora *freiActual = nullptr;
    freiActual = (Freidora *) productos[0]; //cast
    freiActual->seleccionarTemp(1000);
    cout << freiActual->toString() << endl;

    //Freidora &freiRef = Freidora{"Hola"};
    //freiRef.seleccionarTemp(500);

    return 0;
}
