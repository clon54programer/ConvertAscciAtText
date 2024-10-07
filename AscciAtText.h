#ifndef  ASSCI_AT_TEXT_H
#define ASCCI_AT_TEXT_H

#include <string>

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


std::string ConvertAscciAtString(const std::string str);
/// <summary>
/// Convierte un numero entre 0 y 255 a su equivalente del estandar ascci.
/// </summary>
/// <param name="number"></param>
/// <returns>Si, el numero no esta el intervalo 0-255, se retorna un caracter vacio ('\0') como retorno</returns>
char ConvertIntAtChar(const int number);

/// <summary>
/// Ejecuta los test de todas la funciones que se encuentre dentro del header.
/// </summary>
void TestAscciAtText();


#endif // ! ASSCI_AT_TEXT_H

