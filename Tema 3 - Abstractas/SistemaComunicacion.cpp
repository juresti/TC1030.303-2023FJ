#include "SistemaComunicacion.hpp"

SistemaComunicacion::SistemaComunicacion(std::string tc) : tipoComunicacion{tc} {}

bool SistemaComunicacion::isComunicando() {return comunicando;}
void SistemaComunicacion::setComunicando(bool c) {comunicando = c;}
