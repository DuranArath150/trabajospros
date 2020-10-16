/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int tam;
    std::cout << "Ingresa la cantidad de numeros que pondras: ";
    std::cin >> tam;
    int listaN[tam];
    for(int i=0;i<tam;i++){
        cout<<"Ingresa el numero: ";
        cin>> listaN[i];
    }
    
    float temporal;
	
	for (int k = 0;k < tam; k++){
		for (int j = 0; j< tam-1; j++){
			if (listaN[j] < listaN[j+1]){
			temporal = listaN[j]; 
			listaN[j] = listaN[j+1]; 
			listaN[j+1] = temporal;
			}
		}
	}
	
	cout<<"Los numeros fueron ordenados: "<<endl;
	for(int x=0;x<=tam;x++){
	   cout<<listaN[x]<<endl;
	}
    return 0;
}
