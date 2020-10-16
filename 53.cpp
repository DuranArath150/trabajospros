  
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
    @  Sumas de numeros primos dependiendo que tantos numeros primos se quieran*/

#include <iostream>

using namespace std;

int main()
{
    int x,res,c;
    c=1;
    res=0;
    std::cout <<"Ingresa la cantidad de sumas que quieres: ";
    std::cin >> x;
    for(int d=1;d<=x;d++){
        res=res+c;
        c=c+2;
    }
    cout<<"El resultado es: "<<res;
    return 0;
}
