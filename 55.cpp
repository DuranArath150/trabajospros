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