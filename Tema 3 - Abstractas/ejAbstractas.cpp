#include "TelefonoFijo.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    //Telefono miTel{"55 6789 1234"};
    TelefonoFijo telCasa{3};
    telCasa.comunicar();
    return 0;
}
