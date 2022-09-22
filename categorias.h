#ifndef CATEGORIAS_H
#define CATEGORIAS_H
#include <string.h>
#include <iostream>

class Categorias
{
    private:
        int _numeroCategoria;
        char _nombreCategoria[30];
        bool _esencial;
        bool _estado;

    public:
        Categorias();
        ~Categorias();

        int getNumeroCategoria();
        const char* getNombreCategoria();
        bool getEsencial();
        bool getEstado();

        void setNumeroCategoria(int numeroCategoria);
        void setNombreCategoria(char* nombreCategoria);
        void setEsencial(bool esencial);
        void setEstado(bool estado);



};

#endif // CATEGORIAS_H
