#include <iostream>
#include "Triangulo.h"

using std::cout;
using std::endl;

int main() 
{
    Triangulo T1;//Creo mi objeto

    //Mensaje(Forma en la que los objetos se comunican)
    T1.setBase();
    T1.setAltura();
    cout<<"El triangulo con base "<< T1.getBase();
    cout<<" y altura "<< T1.getAltura();

    T1.imprimeArea();

} 