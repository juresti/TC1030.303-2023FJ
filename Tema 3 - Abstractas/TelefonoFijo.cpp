#include "TelefonoFijo.hpp"

TelefonoFijo::TelefonoFijo(int nl) : Telefono{"55 6677 8811"}, 
                                    numLineas{nl} {}

bool TelefonoFijo::comunicar(){
    encender();
    marcar("55 1234 4321");
    return true;
}
