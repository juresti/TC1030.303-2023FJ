#include "Cafetera.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;


float obtenCapacidad(){
    float cap {0.0};
    bool datoValido {false};

    while (!datoValido){
        cout << "Dime la capacidad: "; cin >> cap;
        try{
            if (cin.fail()) 
                throw invalid_argument("La capacidad debe de ser un numero flotante.");
            else 
                datoValido = true;
        } catch (invalid_argument objError){
            cout << "ERROR. Ingresaste mal el dato." << endl <<
                objError.what() << endl;
            cin.clear();
            cin.ignore(32267,'\n');
        }
    }
    return cap;
}

int obtenTazas(){
    int tazas {0};
    bool datoValido {false};

    while (!datoValido){
        cout << "Dime el numero de tazas por minuto: "; cin >> tazas;
        try{
            if (cin.fail()) 
                throw invalid_argument("El numero de tazas debe de ser entero.");
            else 
                datoValido = true;
        } catch (invalid_argument objError){
            cout << "ERROR. Ingresaste mal el dato." << endl <<
                objError.what() << endl;
            cin.clear();
            cin.ignore(32267,'\n');
        }
    }
    return tazas;
}

int main(int argc, char const *argv[])
{
    string nombre {""};
    cout << "Dime el nombre de la cafetera: "; cin >> nombre;

    float capacidad = obtenCapacidad();
    int tazas = obtenTazas();

    Cafetera cafe1{nombre,capacidad,tazas};
    cout << cafe1.toString() << endl;
    return 0;
}
