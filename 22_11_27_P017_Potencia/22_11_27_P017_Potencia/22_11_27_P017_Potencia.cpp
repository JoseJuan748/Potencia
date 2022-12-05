// 22_11_27_P017_Potencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez

#include <iostream>


double potencia(int base, int exponente)
{
    if (exponente == 0)
        return 1;

    else
        return base * (potencia(base, exponente - 1));
}

int main()
{
    int base, exponente;
    std::cout << "Introduzca el numero base:";
    std::cin >> base;
    do
    {
        std::cout << "Introduzca el exponente al que se elevara:";
        std::cin >> exponente;

    } while (exponente < 0);

    std::cout << "Expresion: " << base << "^" << exponente << "\nResultado: " << potencia(base, exponente) << std::endl;
    system("color 6");
    system("pause");
    system("cls");
}

