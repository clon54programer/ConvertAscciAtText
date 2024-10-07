#ifndef  ASSCI_AT_TEXT_H
#define ASCCI_AT_TEXT_H

#include <string>

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

