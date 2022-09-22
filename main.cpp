#include <iostream>

#include "gestorejercicio.h"


int menu();
void punto1();
void punto2();
void punto3();

Funciones funciones;
int main()
{
    GestorEjercicio gestor;
    int opt, opt2, carga;
    do{
        opt = menu();

        switch(opt){
            case 1: punto1();
                break;
            case 2: punto2();
                break;
            case 3: punto3();
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                std::cout << "1. LISTAR ARCHIVO EMPRESAS" << std::endl;
                std::cout << "2. AGREGAR REGISTRO EMPRESA" << std::endl;
                std::cout << "3. CREAR ARCHIVO CATEGORIAS (Destructivo)" << std::endl;
                std::cout << "4. CREAR ARCHIVO EMPRESAS ESENCIALES (Destructivo)" << std::endl;
                std::cout << "5. CREAR ARCHIVO EMPRESAS (Destructivo)" << std::endl;
                std::cout << "6. LISTAR ARCHIVO MUNICIPIOS" << std::endl;
                std::cout << "7. LISTAR ARCHIVO CATEGORIAS" << std::endl;
                std::cout << "8. LISTAR ARCHIVO EMPRESAS ESENCIALES" << std::endl;
                std::cout << std::endl;
                std::cout << "Opcion: ";
                std::cin >> opt2;

                switch(opt2){
                    case 1:
                            gestor.listarEmpresas();
                        break;
                    case 2:
                            if(gestor.agregarEmpresa()){
                                std::cout << "Agregada correctamente" << std::endl;
                            } else{
                                std::cout << "Error en la carga" << std::endl;
                            }

                        break;
                    case 3:
                        break;
                    case 4:
                        break;
                    case 5:
                            if(gestor.crearArchivoEmpresas()){
                                std::cout << "Creado correctamente" << std::endl;
                            } else{
                                std::cout << "Error en la carga" << std::endl;
                            }
                        break;
                    case 6:
                        break;
                }
                break;
            case 0: std::cout << "Hasta luego!" << std::endl;
                break;
            default: std::cout << "Opcion incorrecta." << std::endl;
                break;
        }
        system("pause");
        system("cls");

    }while(opt != 0);

    return 0;
}

void punto1()
{
//    int conMunicSeccion[9] = {0};
//    Municipios municipio;
//    int pos = 0;
//    while(municipio.leerDeDisco(pos)){
//        conMunicSeccion[municipio.getSeccion()-1]++;
//        pos++;
//    }
//
//    funciones.mostrarVectorInt(conMunicSeccion, 9);
}

void punto2()
{
//    Empresas empresa;
//    int pos = 0;
//
//    std::cout << ">> EMPRESAS CON MAS DE 200 EMPLEADOS <<" << std::endl;
//    while(empresa.leerDeDisco(pos)){
//        if(empresa.getCantidadEmpleados() >= 200){
//            std::cout << "- " << empresa.getNombreEmpresa() << std::endl;
//        }
//        pos++;
//    }
}

void punto3()
{

}

int menu(){
    int optMenu;
    std::cout << "1. CANTIDAD DE EMPRESAS DE CADA MUNICIPIO" << std::endl;
    std::cout << "2. EMPRESAS CON MAS DE 200 EMPLEADOS" << std::endl;
    std::cout << "3. GENERAR ARCHIVO DE EMPRESAS ESENCIALES" << std::endl << std::endl;
    std::cout << "-- OTROS --" << std::endl;
    std::cout << "4. CATEGORIA DE EMPRESAS CON MAS EMPLEADOS" << std::endl;
    std::cout << "5. CANTIDAD DE MUNICIPIOS CON MENOS DE 200.000 HABITANTES" << std::endl;
    std::cout << "6. SECCION CON MAYOR CANTIDAD DE HABITANTES" << std::endl;
    std::cout << "7. GENERAR ARCHIVO EMPRESAS CATEGORIA 15" << std::endl;
    std::cout << "8. GENERAR ARCHIVO CANTIDAD EMPRESAS CATEGORIA 1 POR MUNICIPIO" << std::endl << std::endl;
    std::cout << "9. CREAR/CARGAR/MODIFICAR ARCHIVOS" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "0. SALIR" << std::endl;
    std::cout << "\nOpcion: ";
    std::cin >> optMenu;
    system("cls");

    return optMenu;
}
