#include "Freidora.hpp"
#include <string>
#include <iostream>
using namespace std;

Freidora::Freidora(string fa) : Electrodomestico{}{
    funcionActual = fa;
}

Freidora::Freidora(bool e,string fa,float tf,int temp) : Electrodomestico{},
                                        tiempoFreir{tf},temperatura{temp} {
    setEncendido(e);
    funcionActual = fa;
}

void Freidora::seleccionarTiempo(float t){
    if (isEncendido()) {
        tiempoFreir = t;
        cout << "Tiempo para freir fijado en " + to_string(tiempoFreir) + "\n";
    } else {
        cout << "Freidora apagada. No puedo cambiar el tiempo.\n";
    }
}

void Freidora::seleccionarTemp(int t){
    if (isEncendido()){
        temperatura = t;
        cout << "Temperatura cambiada a " << temperatura << endl;
    } else {
        cout << "Freidora apagada. No puedo cambiar la temperatura.\n";
    }
}

string Freidora::toString(){
    return "Freidora(" + Electrodomestico::toString() + "," +
            to_string(tiempoFreir) + "," + to_string(temperatura) + ")";
}
//virtuales de la clase padre

string Freidora::dimeFuncionActual(){
    return "La funcion actual de la Freidora es " + funcionActual;
}

void Freidora::cambiaFuncionActual(string fa){
    funcionActual = fa;
    cout << "La Freidora cambio la funcion actual a " + funcionActual;
}
