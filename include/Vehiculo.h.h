#pragma once
#include <string>
using namespace std;

class Persona; 

class Vehiculo
{
private:
    string placa;
    Persona* propietario;

public:
    
    Vehiculo();
    virtual ~Vehiculo();
    Vehiculo(string placa, Persona* propietario);

    void setPlaca(string placa);
    void setPropietario(Persona* propietario);

    string getPlaca();
    Persona* getPropietario();

    virtual int calcularPrecio() = 0;
    virtual void mostrarinfo() = 0;
};
