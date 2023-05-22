#include "Microondas.hpp"
using namespace std;

Microondas::Microondas() : Electrodomestico{}, capacidad{1.5}, color{"Rojo"} {}
Microondas::Microondas(float cap,std::string col) : Electrodomestico{}, capacidad{cap}, color{col} {}

string Microondas::calentadoRapido(){
    if (isEncendido()) return "Calentando por 30 segundos tus alimentos...";
    else return "Enciende primero el microondas...";
}

void Microondas::encender(){setEncendido(true);}
void Microondas::apagar(){setEncendido(false);}

string Microondas::toString(){
    string encendido = "Apagado";
    if (isEncendido()) encendido = "Encendido";
    return "Microondas(" + encendido + 
            "," + to_string(capacidad) +
            "," + color + ")";
}
