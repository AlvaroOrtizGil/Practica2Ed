#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED



#endif // LISTA_H_INCLUDED
// FICHERO TADLista.h
#include <iostream>
#define INCREMENTO 4
#include "Paciente.h"


using namespace std;
class lista
{
    Paciente *elementos; // elementos de la lista
    int n; // nº de elementos que tiene la lista
    int Tama; // tamaño de la tabla en cada momento
public:
    lista(); // constructor de la clase
    ~lista(); // destructor de la clase
    lista(Paciente p);
    bool esvacia();
    int longitud();
    void anadirIzq(Paciente e);
    void anadirDch(Paciente e);
    void eliminarIzq();
    void eliminarDch();
    float observarIzq();
    float observarDch();
    void concatenar(lista l);
    bool pertenece(Paciente e);
    void insertar(int i, Paciente e);
    void eliminar(int i);
    void modificar(int i, Paciente e);
    Paciente observar(int i);
    int posicion(Paciente e);
};
