#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED



#endif // PACIENTE_H_INCLUDED
typedef char cadena[50];

struct Paciente {
    cadena nombreCompleto;
    int historialClinico;
    char tipoSangre[2];
    int gravedad;
    cadena patologia;
};
