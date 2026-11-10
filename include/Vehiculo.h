#pragma once
#include <string>
#include "Propietario.h"
using namespace std;


class Vehiculo
{
private:
    string placa;
    Propietario* propietario;

public:
    
    Vehiculo();
    virtual ~Vehiculo();
    Vehiculo(string placa, Propietario* propietario);

    void setPlaca(string placa);
    void setPropietario(Propietario* propietario);

    string getPlaca();
    Propietario* getPropietario();

    virtual int calcularPrecio() = 0;
    virtual void mostrarinfo() = 0;
    
};
