  
/* @@
    @@ Instituto Tecnologico de Tijuana
    @@ Depto de Sistemas y Computación
    @@ Ing. En Sistemas Computacionales
    @@   
    @@ Autor : Arath Duran Hernandez @nickname DuranArath150
    @@ Repositorio: http://github.com/DuranArath/trabajospros
    @@ Fecha de revisión: ____
    @@ 
    @
    @ Objetivo del programa:
    @ Cantidad aproximada de cuanto ha dormido una persona en toda su vida*/

#include <iostream>

using namespace std;

int main()
{
    int edad,resultado,edadh,edadd;
    std::cout <<"Ingresa tu edad: ";
    std::cin >> edad;
    edadd = edad * 365;
    edadh = edadd * 24;
    resultado = edadh / 8;
    cout<<"En tu vida has dormido aproximadamente: "<<resultado<<" horas";
    return 0;
}
