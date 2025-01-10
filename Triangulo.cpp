#include "Triangulo.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


Triangulo::Triangulo(){
    base=0;
    altura=0;
}

void Triangulo::setBase(){
    cout<<"Ingresa el valor de la base: ";
    cin>>base;
}

float Triangulo::getBase(){
    return base;
}

void Triangulo::setAltura(){
    cout<<"Ingresa el valor de la altura: ";
    cin>>altura;
}

float Triangulo::getAltura(){
    return altura;
}

float Triangulo::calculaArea(){
    return (base*altura)/2;
}

void Triangulo::imprimeArea(){
    cout<<"\nEl área del triangulo es: " <<calculaArea() << endl;
}

Triangulo::~Triangulo(){

}