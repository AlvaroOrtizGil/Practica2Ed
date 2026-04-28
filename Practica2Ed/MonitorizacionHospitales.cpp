#define Hospital.h
#include <iostream>
#include <cstring>
#include "MonitorizacionHospitales.h"

// Implementación de crearHospital
bool MonitorizacionHospitales::crearHospital(cadena nombre, int idHospital, int maxCamas, int codPostal, cadena tipo) {

    // 1. COMPROBACIÓN: Usas la función auxiliar para ver si el ID ya está usado
    if (existeHospital(idHospital)) {
        std::cout << "Error: Ya existe un hospital con el ID " << idHospital << std::endl;
        return false;
    }
