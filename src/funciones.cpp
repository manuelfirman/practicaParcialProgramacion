#include "funciones.h"

Funciones::Funciones()
{
    //ctor
}

Funciones::~Funciones()
{
    //dtor
}

void Funciones::mostrarVectorInt(int* vectorInt, int tamanio)
{
    for(int i = 0; i < tamanio; i++){
        std::cout << vectorInt[i] << std::endl;
    }
}

void Funciones::mostrarVectorFloat(float* vectorFloat, int tamanio)
{
    for(int i = 0; i < tamanio; i++){
        std::cout << vectorFloat[i] << std::endl;
    }
}

int Funciones::buscarMaximoVectorInt(int* vectorInt, int tamanio)
{
    int maximo = vectorInt[0];
    for(int i = 0; i < tamanio; i++){
        if(vectorInt[i] >= maximo){
            maximo = vectorInt[i];
        }
    }
    return *vectorInt;
}

float Funciones::buscarMaximoVectorFloat(float* vectorFloat, int tamanio)
{
    int maximo = vectorFloat[0];
    for(int i = 0; i < tamanio; i++){
        if(vectorFloat[i] >= maximo){
            maximo = vectorFloat[i];
        }
    }
    return *vectorFloat;
}

void Funciones::cargarCadena(char* cadena, int tamanio)
{
    int i;
    fflush(stdin);
    for(i = 0; i < tamanio; i++){
        cadena[i] = std::cin.get();
        if(cadena[i] == '\n') break;
    }
    cadena[i] = '\0';
    fflush(stdin);
}

void Funciones::mostrarCadena(char* cadena, int tamanio)
{
    for(int i = 0; i <= tamanio; i++){
        std::cout << cadena[i];
    }
    std::cout << std::endl;
}
