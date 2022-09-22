#ifndef GESTOREJERCICIO_H
#define GESTOREJERCICIO_H
#include "empresas.h"
#include "municipios.h"
#include "categorias.h"
#include "funciones.h"

class GestorEjercicio
{
    private:
        Empresas _empresa;
        Municipios _municipio;
        Categorias _categoria;
        Funciones funcion;


    public:
        GestorEjercicio();
        ~GestorEjercicio();

        void listarEmpresas();
        void cargarEmpresa();
        bool leerEmpresa(int posicion);
        bool modificarEmpresa(int posicion);
        bool agregarEmpresa();
        int buscarEmpresa(int numeroEmpresa);

        void cargarMunicipio();
        bool leerMunicipio(int posicion);
        bool modificarMunicipio(int posicion);
        bool agregarMunicipio();
        int buscarMunicipio();

        void cargarCategoria();
        bool leerCategoria(int posicion);
        bool modificarCategoria(int posicion);
        bool agregarCategoria();
        int buscarCategoria();

        bool crearArchivoEmpresas();
        bool crearArchivoMunicipios();
        bool crearArchivoCategorias();
};

#endif // GESTOREJERCICIO_H
