#include "AscciAtText.h"
#include <string> //std::stoi
#include <cassert> //assert
#include <iostream> //std::cout

std::string ConvertAscciAtString(const std::string str) {

    std::string temp = "";
    std::string str_convert = "";

    //std::cout << "Len string: " << str.length() << '\n';



    for (int i = 0; i < str.length() + 1; i++) {

        if (str[i] == '.' || i == str.length() || str[i] == '#') {
            temp.push_back(ConvertIntAtChar(std::stoi(str_convert)));

            //std::cout << "[DEBUG] Value of str_convert: " << str_convert << '\n';

            str_convert.clear();
        }

        //std::cout << "[info] Value of I: " << i << '\n';
        //std::cout << "[info] Value of str: " << str[i] << '\n';

        /// Esta verificacion es para evitar que cuando
        /// convierta el string a un numero entero
        /// ningun caracter extraño se entromenta en la 
        /// conversion, que puede provocar un posible error.
        if (str[i] != '.' && str[i] != '#') { str_convert.push_back(str[i]); }
        if (str[i] == '#') { temp += " "; }


    }

    return temp;
}

std::string ConvertStrintAtAscci(const std::string str)
{
    std::string temp = "";

    for (int i = 0; i < str.length(); i++) {

        if (str[i] != ' ') {
            temp.append(std::to_string(ConvertIntAtChar(str[i])));
            temp += '.';
        }
        else {
            temp += '#';
        }

    }


    return temp;
}


char ConvertIntAtChar(const int number) {

    if (number < 0 || number > 255) {
        std::cout << "[ERROR] El numero pasado como parametro no esta en el "
            "intervalo 0-255"
            << '\n';
        return '\0';
    }

    return static_cast<char>(number);
}

void TestAscciAtText()
{
    std::cout << "Convert 110 at ascci: " << ConvertIntAtChar(110) << '\n';
    assert('n' == ConvertIntAtChar(110));
    std::cout << "77.121 convert at string: " << ConvertAscciAtString("77.121")
        << '\n';
    assert("My" == ConvertAscciAtString("77.121"));
    std::cout << "77.121#105.155 convert at string: " << ConvertAscciAtString("77.121#105.115")
        << '\n';
    assert("My is" == ConvertAscciAtString("77.121#105.115"));
}
