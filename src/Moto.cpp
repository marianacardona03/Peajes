#include <iostream>
#include "Moto.h"

Moto::Moto() : Vehiculo()
{
  this->cilindraje = 100;
}

Moto::~Moto()
{
    cout << "Destruyendo moto " << getPlaca() << endl;
}

Moto::Moto(string placa, Propietario* propietario, int cilindraje)
    : Vehiculo(placa, propietario)
{
  this->cilindraje = cilindraje;
}

void Moto::setCilindraje(int cilindraje) { this->cilindraje = cilindraje; }
int Moto::getCilindraje() const{ return this->cilindraje; }

bool Moto::altoCilindraje() const{
    return this->cilindraje > 400;
}

int Moto::calcularPrecio () const 
{
    int tarifa = 3400;                        
    Propietario* p = getPropietario();

    if (p != nullptr && p->getVecino())
        tarifa = tarifa * (100 - 34) / 100;  
    return tarifa;
}

string Moto::getTipo() const { return "Moto"; }

string Moto::getInfo() const
{
    return "Cilindraje: " + to_string(cilindraje);
}
