#include "categorias.h"

Categorias::Categorias()
{
    _numeroCategoria = -1;
    strcpy(_nombreCategoria, "Sin asignar");
    _esencial = false;
    _estado = false;
}

Categorias::~Categorias()
{
    //dtor
}


int Categorias::getNumeroCategoria()
{
    return _numeroCategoria;
}

const char* Categorias::getNombreCategoria()
{
    return _nombreCategoria;
}

bool Categorias::getEsencial()
{
    return _esencial;
}

bool Categorias::getEstado()
{
    return _estado;
}

void Categorias::setNumeroCategoria(int numeroCategoria)
{
    _numeroCategoria = numeroCategoria;
}

void Categorias::setNombreCategoria(char* nombreCategoria)
{
    strcpy(_nombreCategoria, nombreCategoria);
}

void Categorias::setEsencial(bool esencial)
{
    _esencial = esencial;
}

void Categorias::setEstado(bool estado)
{
    _estado = estado;
}
