#include "Electrodomestico.hpp"
#include <iostream>
using namespace std;

Electrodomestico::Electrodomestico() {}
void Electrodomestico::setEncendido(bool e){encendido = e;}
bool Electrodomestico::isEncendido() {return encendido;}

void Electrodomestico::encender() {setEncendido(true);}
void Electrodomestico::apagar() {setEncendido(false);}

string Electrodomestico::toString(){
    return "Electrodomestico(" + to_string(encendido) + "," +
            funcionActual + ")";
}

string Electrodomestico::dimeFuncionActual(){
    return "La funcion actual del electrodomestico es " + funcionActual;
}

void Electrodomestico::cambiaFuncionActual(string fa){
    funcionActual = fa;
    cout << "Se ha cambiado la funcion del electrodomestico a " + funcionActual + "\n";
}