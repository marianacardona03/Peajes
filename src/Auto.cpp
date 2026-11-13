#include <iostream>
#include <Auto.h>
#include "Excepciones.h"

Auto::~Auto()
{
    cout << "Destruyendo Carro " << getPlaca() << endl;
}

Auto::Auto(string placa, Propietario* propietario, int pasajeros)
    : Vehiculo(placa,propietario)
{
    if (pasajeros < 1) {
        throw DatosInvalidos("El carro debe tener al menos un pasajero");
    }
    this->pasajeros = pasajeros ;
}

void Auto::setPasajeros (int pasajeros ) { 
    if (pasajeros < 1) {
        throw DatosInvalidos("El carro debe tener al menos un pasajero");
    }
    this->pasajeros = pasajeros ; 
}

void Auto::agregarPasajero() {
    pasajeros++;
}

int Auto::getPasajeros () { return this->pasajeros ; }

int Auto::calcularPrecio () const
{
    int tarifa = 10800;                       
    Propietario* p = getPropietario();

    if (p != nullptr && p->getVecino())
        tarifa = tarifa * (100 - 34) / 100;  

    return tarifa;
}

string Auto::getTipo() const { return "Carro"; }

string Auto::getInfo() const
{
    return "Pasajeros: " + to_string(this->pasajeros);
}



