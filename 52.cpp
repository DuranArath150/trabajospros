#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int dias;
    div_t x;
    int aux;
    int horas;
    int min;
    int seg;
    int s=0;
    std::cout << "Dime la cantidad de segundos: ";
    std::cin >> s;
    x = div(s,60);
    seg = x.rem;
    aux = x.quot;
    if(aux > 60){
        x = div(aux,60);
        min = x.rem;
        aux = x.quot;
        if(aux > 24){
            x = div(aux,24);
            horas = x.rem;
            dias = x.quot;
        }
        else{
            horas = aux;
        }
    }
    else{
        min = aux;
    }
    cout<<"En esta cantidad de segundos: "<<s<< " hay: "<<endl;
    cout<<"Dias: "<<dias<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;
    

    return 0;
}