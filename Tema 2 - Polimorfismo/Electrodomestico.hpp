#ifndef ELECTRO_HPP
#define ELECTRO_HPP

#include <string>
class Electrodomestico{
private:
    bool encendido {false};
protected:
    std::string funcionActual {"Ninguna"};
    Electrodomestico();
public:
    void setEncendido(bool);
    bool isEncendido();
    void encender();
    void apagar();
    virtual std::string toString();

    virtual std::string dimeFuncionActual();
    virtual void cambiaFuncionActual(std::string);
};

#endif
