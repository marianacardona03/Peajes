#include <string>
#include <vector>
#include "Registro.h"
#include "Vehiculo.h"
#include "Operador.h"
using namespace std;
 
class Caseta {
private:
    string nombre;
    Operador* operador;           
    vector<Registro*> pasos;   
    int totalRecaudado;           
 
public:
    Caseta(string nombre, Operador* operador);
    ~Caseta();
    string getNombre();
    Operador* getOperador();
    int getTotalPasos();
    void registrarPaso(Vehiculo* vehiculo);
    int getTotalRecaudado();
    int getCantidadCarros();
    int getCantidadMotos();
    int getCantidadBuses();
    int getCantidadCamiones();
};