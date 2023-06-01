#ifndef SIST_COM_HPP
#define SIST_COM_HPP

#include <string>
class SistemaComunicacion{
private:
    bool comunicando{false};
protected:
    std::string tipoComunicacion{"Indefinida"};
    SistemaComunicacion(std::string);
public:
    virtual bool comunicar() = 0; //Abstracto
    bool isComunicando();
    void setComunicando(bool);
};

#endif
