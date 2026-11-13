#include <iostream>
#include "Moto.h"
#include "Excepciones.h"

Moto::~Moto()
{
    cout << "Destruyendo moto " << getPlaca() << endl;
}

Moto::Moto(string placa, Propietario* propietario, int cilindraje)
    : Vehiculo(placa, propietario)
{
    if (cilindraje <= 0) {
        throw DatosInvalidos("El cilindraje debe ser mayor que cero");
    }
  this->cilindraje = cilindraje;
}

void Moto::setCilindraje(int cilindraje) { 
    if (cilindraje <= 0) {
        throw DatosInvalidos("El cilindraje debe ser mayor que cero");
    }
    this->cilindraje = cilindraje;
}

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
