//Programa de prueba del ejercio de clase sobre Herencia
#include "Electrodomestico.hpp"
#include "Microondas.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "***** Pruebas de la clase Electrodomestico \n";
    Electrodomestico miElec {};
    cout << miElec.toString() << endl;
    miElec.setEncendido(true);
    cout << miElec.isEncendido() << endl;

    cout << "\n***** Pruebas de la case Microondas\n";
    Microondas microDef {};
    Microondas microComp {2.5,"Amarillo"};

    cout << microDef.toString() << endl;
    cout << microComp.toString() << endl;
    cout << microDef.calentadoRapido() << endl;
    microComp.encender();
    cout << microComp.calentadoRapido() << endl;
    microComp.apagar();
    cout << microComp.isEncendido() << endl;
    return 0;
}
