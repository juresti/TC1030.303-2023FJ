#ifndef MICRO_HPP
#define MICRO_HPP

#include "Electrodomestico.hpp"
#include <string>
class Microondas : public Electrodomestico{
private:
    float capacidad;
    std::string color;
public:
    Microondas();
    Microondas(float cap,std::string col);
    std::string calentadoRapido();
    void encender();
    void apagar();
    std::string toString();
};

#endif