#include <iostream>
#include "AscciAtText.h"

/*
Sintaxis

- una letra deber representado por su conversion en el estandar ascci.
  - ejemplo:
        G == 71

- una palabra por las letras en su forma ascci, pero por cada letra debe haber
un punto al final.

  - ejemplo:
        71.101.110.106.105.114.111 == Genjiro


- una oracion, debe haber # por cada palabara.
  - ejemplo:

        77.121#110.97.108.101 == My name

letrass en mayusculas 65 a 90.
letras en minuzculas  97 a 122.
*/




int main(int argc, char const *argv[]) {

    TestAscciAtText();
    std::cout << "77.121#105.155 convert at string: " << ConvertAscciAtString("77.121#105.115")
        << '\n';

  return 0;
}
