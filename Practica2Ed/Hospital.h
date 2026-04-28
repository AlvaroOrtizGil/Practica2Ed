#define maxColaEspera 20

class Hospital {
private:
    cadena nombreHospital;
    int codigoPostal;
    int idHospital;
    Hospital *siguienteHospital;
    int maxCamas;
    Lista pacientesIngresados;
    Cola pacientesEnEspera;
    cadena estado;
    cadena tipoHospital;

public:
    Hospital(cadena nom, int id, int mC, int cP, cadena tH);
    ~Hospital();//Destructor

    void getNombreHospital(cadena &nH);
    int getIdHospital();
    int getMaxCamas();
    int getNumPacientesIngresados();
    int getNumPacientesEnEspera();
    Hospital* getSiguienteHospital();
    void setSiguienteHospital(Hospital *pH);
    bool setMaxCamas(int camas);
    bool buscarPaciente(int idPaciente);
    bool ingresarPaciente(Paciente p);
    bool bajaPaciente(int idPaciente);
    void exportarPacientesIngresados(Paciente *ingresados);
    void exportarPacientesEnEspera(Paciente *enEspera);
    bool estaActivo();
    bool estaInactivo();
    bool activar();
    bool desactivar();
    bool faltaSangre();
    void mostrarPacientesIngresados();
    void mostrarPacientesEnEspera();
    void mostrarInformacion();
};
