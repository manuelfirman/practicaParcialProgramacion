#include "empresas.h"

Empresas::Empresas()
{
    _numeroEmpresa = -1;
    strcpy(_nombreEmpresa, "Sin asignar");
    _cantidadEmpleados = -1;
    _categoria = -1;
    _municipio = -1;
    _estado = false;
}

Empresas::~Empresas()
{

}

int Empresas::getNumeroEmpresa()
{
    return _numeroEmpresa;
}

const char* Empresas::getNombreEmpresa()
{
    return _nombreEmpresa;
}

int Empresas::getCantidadEmpleados()
{
    return _cantidadEmpleados;
}
int Empresas::getCategoria()
{
    return _categoria;
}

int Empresas::getMunicipio()
{
    return _municipio;
}

bool Empresas::getEstado()
{
    return _estado;
}

void Empresas::setNumeroEmpresa(int numeroEmpresa)
{
    _numeroEmpresa = numeroEmpresa;
}

void Empresas::setNombreEmpresa(char* nombreEmpresa)
{
    strcpy(_nombreEmpresa, nombreEmpresa);
}

void Empresas::setCantidadEmpleados(int cantidadEmpleados)
{
    _cantidadEmpleados = cantidadEmpleados;
}

void Empresas::setCategoria(int categoria)
{
    (categoria > 0 && categoria <= 80) ? _categoria = categoria : _categoria = -1;
}

void Empresas::setMunicipio(int municipio)
{
    (municipio > 0 && municipio <= 135) ? _municipio = municipio : _municipio = -1;
}

void Empresas::setEstado(bool estado)
{
    _estado = estado;
}

std::string Empresas::toString()
{
    std::string cadena;
    cadena =
        "NUMERO EMPRESA: " + std::to_string(_numeroEmpresa) +
        "\nNOMBRE: " + _nombreEmpresa +
        "\nCANTIDAD EMPLEADOS: " + std::to_string(_cantidadEmpleados) +
        "\nCATEGORIA: " + std::to_string(_categoria) +
        "\nMUNICIPIO: " + std::to_string(_municipio) +
        "\nESTADO: " + std::to_string(_estado);
    return cadena;
}

