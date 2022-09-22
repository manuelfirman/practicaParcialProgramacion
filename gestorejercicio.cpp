#include "gestorejercicio.h"

GestorEjercicio::GestorEjercicio()
{
    //ctor
}

GestorEjercicio::~GestorEjercicio()
{
    //dtor
}


bool GestorEjercicio::leerEmpresa(int posicion)
{
    int leyo;
    FILE* pFile = fopen("empresas.dat", "rb");
    if(pFile == NULL) return false;

    fseek(pFile, posicion * sizeof(Empresas), SEEK_SET);
    leyo = fread(&_empresa, sizeof(Empresas), 1, pFile);

    fclose(pFile);
    return leyo;
}

void GestorEjercicio::listarEmpresas()
{
    FILE* pFile = fopen("empresas.dat", "rb");
    if(pFile == NULL){
        std::cout << "Error al abrir 'empresas.dat'" << std::endl;
    }

    std::cout << "Listado empresas" << std::endl;

    while(fread(&_empresa, sizeof(Empresas), 1, pFile)){
        std::cout << _empresa.toString() << std::endl << std::endl;
    }
    fclose(pFile);
}

bool GestorEjercicio::modificarEmpresa(int posicion)
{
    int modifico;
    FILE* pFile = fopen("empresas.dat","rb+");
    if(pFile == NULL) return false;

    fseek(pFile, posicion * sizeof(Empresas), SEEK_SET);
    modifico = fwrite(&_empresa, sizeof(Empresas), 1, pFile);

    fclose(pFile);
    return modifico;
}

bool GestorEjercicio::agregarEmpresa()
{
    int grabo;
    FILE* pFile = fopen("empresas.dat","ab");
    if(pFile == NULL) return false;

    cargarEmpresa();
    grabo = fwrite(&_empresa, sizeof(Empresas), 1, pFile);

    fclose(pFile);
    return grabo;
}

int GestorEjercicio::buscarEmpresa(int numeroEmpresa)
{
    int pos = 0;
    while(leerEmpresa(pos)){
            std::cout << "buscar" << std::endl;
        if(_empresa.getNumeroEmpresa() == numeroEmpresa){
            return pos;
        }
        pos++;
    }
    return -1;
}

void GestorEjercicio::cargarEmpresa()
{
    int numEmpresa;
    char nombreEmpresa[30];
    int cantidadEmpleados;
    int categoria;
    int municipio;
    bool estado;

    std::cout << "Ingrese el numero de empresa: ";
    std::cin >> numEmpresa;
    while(buscarEmpresa(numEmpresa) == numEmpresa){
        std::cout << "El numero de empresa ya existe. Ingrese otro: ";
        std::cin >> numEmpresa;
    }
    _empresa.setNumeroEmpresa(numEmpresa);

    std::cout << "Ingrese el nombre de la empresa: ";
    funcion.cargarCadena(nombreEmpresa, 30);
    _empresa.setNombreEmpresa(nombreEmpresa);

    std::cout << "Ingrese la cantidad de empleados: ";
    std::cin >> cantidadEmpleados;
    _empresa.setCantidadEmpleados(cantidadEmpleados);

    std::cout << "Ingrese la categoria de la empresa: ";
    std::cin >> categoria;
    _empresa.setCategoria(categoria);

    std::cout << "Ingrese el municipio de la empresa: ";
    std::cin >> municipio;
    _empresa.setMunicipio(municipio);

    _empresa.setEstado(true);
    system("pause");
    system("cls");
}

void GestorEjercicio::cargarMunicipio()
{

}

void GestorEjercicio::cargarCategoria()
{

}


int GestorEjercicio::buscarMunicipio()
{

}

int GestorEjercicio::buscarCategoria()
{

}

bool GestorEjercicio::crearArchivoEmpresas()
{
    int creado;
    FILE* pFile = fopen("empresas.dat", "wb");
    if(pFile == NULL) return false;

    cargarEmpresa();
    creado = fwrite(&_empresa, sizeof(Empresas), 1, pFile);

    fclose(pFile);
    return creado;
}

bool GestorEjercicio::crearArchivoMunicipios()
{

}

bool GestorEjercicio::crearArchivoCategorias()
{

}
