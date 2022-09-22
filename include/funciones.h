#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>

class Funciones
{
    private:



    public:
        Funciones();
        ~Funciones();

        void mostrarVectorInt(int* vectorInt, int tamanio);
        void mostrarVectorFloat(float* vectorFloat, int tamanio);
        int buscarMaximoVectorInt(int* vectorInt, int tamanio);
        float buscarMaximoVectorFloat(float* vectorFloat, int tamanio);

//        void mostrarMatrizInt();
//        void mostrarMatrizFloat();
//        void mostrarMatrizChar();

        void cargarCadena(char* cadena, int tamanio);
        void mostrarCadena(char* cadena, int tamanio);
};

#endif // FUNCIONES_H
