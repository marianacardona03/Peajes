#include <iostream>
#include <Auto.h>


Auto::Auto() : Vehiculo()
{
  this->pasajeros = 1;
}

Auto::Auto(string placa, Propietario* propietario, int pasajeros)
    : Vehiculo(placa,propietario)
{
  this->pasajeros = pasajeros ;
}

void Auto::setPasajeros (int pasajeros ) { this->pasajeros = pasajeros ; }
int Auto::getPasajeros () { return this->pasajeros ; }

int Auto::calcularPrecio()
{
    int tarifa = 10800;                       
    Propietario* p = getPropietario();

    if (p != nullptr && p->getVecino())
        tarifa = tarifa * (100 - 34) / 100;  

    return tarifa;
}