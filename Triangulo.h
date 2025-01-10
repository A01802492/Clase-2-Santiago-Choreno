#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo 
{
    private://Atributos
        float base;
        float altura;

    public:
        Triangulo();//Constructor(Inicializa)

        //Métodos accesores y modificadores
        void setBase();
        float getBase();
        void setAltura();
        float getAltura();

        //Métodos especializados (Acciones del objeto)
        float calculaArea();
        void imprimeArea();

        virtual ~Triangulo();//Destructor(Libera memoria)
    
    protected:

};

#endif
