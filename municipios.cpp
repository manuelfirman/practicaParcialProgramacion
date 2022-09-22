#include "municipios.h"

Municipios::Municipios()
{
    _numero = -1;
    strcpy(_nombreMunicipio, "Sin asignar");
    _seccion = -1;
    _cantidadHabitantes = -1;
    _estado = false;
}

Municipios::~Municipios()
{
    //dtor
}

int Municipios::getNumero()
{
    return _numero;
}

const char* Municipios::getNombreMunicipio()
{
    return _nombreMunicipio;
}

int Municipios::getSeccion()
{
    return _seccion;
}

int Municipios::getCantidadHabitantes()
{
    return _cantidadHabitantes;
}

bool Municipios::getEstado()
{
    return _estado;
}

void Municipios::setNumero(int numero)
{
    _numero = numero;
}

void Municipios::setNombreMunicipio(char* nombre)
{
    strcpy(_nombreMunicipio, nombre);
}

void Municipios::setSeccion(int seccion)
{
    _seccion = seccion;
}

void Municipios::setCantidadHabitantes(int cantidadHabitantes)
{
    _cantidadHabitantes = cantidadHabitantes;
}

void Municipios::setEstado(bool estado)
{
    _estado = estado;
}

bool Municipios::leerDeDisco(int posicion)
{
    int leyo;
    FILE* pFile = fopen("municipios.dat", "rb");
    if(pFile == NULL) return false;

    leyo = fread(this, posicion * sizeof(Municipios), 1, pFile);

    fclose(pFile);
    return leyo;
}
