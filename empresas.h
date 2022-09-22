#ifndef EMPRESAS_H
#define EMPRESAS_H
#include <string.h>
#include <iostream>


class Empresas
{
    private:
        int _numeroEmpresa;
        char _nombreEmpresa[30];
        int _cantidadEmpleados;
        int _categoria;
        int _municipio;
        bool _estado;

    public:
        Empresas();
        ~Empresas();

        int getNumeroEmpresa();
        const char* getNombreEmpresa();
        int getCantidadEmpleados();
        int getCategoria();
        int getMunicipio();
        bool getEstado();

        void setNumeroEmpresa(int numeroEmpresa);
        void setNombreEmpresa(char* nombreEmpresa);
        void setCantidadEmpleados(int cantidadEmpleados);
        void setCategoria(int categoria);
        void setMunicipio(int municipio);
        void setEstado(bool estado);

        std::string toString();
};


#endif // EMPRESAS_H
