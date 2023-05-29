#ifndef FREIDORA_HPP
#define FREIDORA_HPP

#include "Electrodomestico.hpp"

class Freidora : public Electrodomestico{
private:
    float tiempoFreir {60};
    int temperatura {150};
public:
    Freidora(std::string);
    Freidora(bool,std::string,float,int); //completo
    void seleccionarTiempo(float);
    void seleccionarTemp(int);
    std::string toString();
//virtuales de la clase padre
    std::string dimeFuncionActual();
    void cambiaFuncionActual(std::string);
};
#endif
