#ifndef MUNICIPIOS_H
#define MUNICIPIOS_H
#include <string.h>
#include <iostream>

class Municipios
{
    private:
        int _numero;
        char _nombreMunicipio[30];
        int _seccion;
        int _cantidadHabitantes;
        bool _estado;

    public:
        Municipios();
        ~Municipios();

        int getNumero();
        const char* getNombreMunicipio();
        int getSeccion();
        int getCantidadHabitantes();
        bool getEstado();

        void setNumero(int numero);
        void setNombreMunicipio(char* nombre);
        void setSeccion(int seccion);
        void setCantidadHabitantes(int cantidadHabitantes);
        void setEstado(bool estado);

        bool leerDeDisco(int posicion);
};

#endif // MUNICIPIOS_H
