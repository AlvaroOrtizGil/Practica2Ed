#ifndef MONITORIZACIONHOSPITALES_H_INCLUDED
#define MONITORIZACIONHOSPITALES_H_INCLUDED



#endif // MONITORIZACIONHOSPITALES_H_INCLUDED
class MonitorizacionHospitales {
private:
    Cola colaGlobal;
    Hospital *primerHospital;
    int numHospitales;

    bool existeHospital(int idHospital);
    bool existePaciente(int idPaciente, cadena &lugar);
    Hospital* buscarHospital(int idHospital);
    Hospital* buscarHospitalConMasCamasLibres();
    Hospital* buscarHospitalParaEspera();

public:
    MonitorizacionHospitales();
    ~MonitorizacionHospitales();

    int getNumHospitales();
    bool crearHospital(cadena nombre, int idHospital, int maxCamas, int codPostal, cadena tipo);
    bool eliminarHospital(int idHospital);
    bool activarHospital(int idHospital);
    bool declararSinSangre(int idHospital);
    bool desactivarHospital(int idHospital);
    bool modificarCamasHospital(int idHospital, int maxCamas);
    bool ingresarPacienteSistema(Paciente p, cadena &lugarDestino, bool &enEspera);
    bool bajaPacienteSistema(int idPaciente, cadena &lugarOrigen);
    int getPosicionHospital(int idHospital);
    void mostrarInformacionHospitales(int pos);
    void mostrarInformacionColaGlobal();
};
