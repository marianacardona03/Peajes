#include <iostream>
#include "Vehiculo.h"
#include "Excepciones.h"
using namespace std;

Vehiculo::~Vehiculo() = default;

Vehiculo::Vehiculo(string placa, Propietario* propietario)
{
    if (placa.empty()) {
        throw PlacaInvalida();
    }
  this->placa = placa;
  this->propietario = propietario;
}

void Vehiculo::setPlaca(string placa)
{
    if (placa.empty()) {
        throw PlacaInvalida();
    }
    this->placa = placa;
}

void Vehiculo::setPropietario(Propietario* propietario) {this->propietario = propietario; }
string Vehiculo::getPlaca() const { return this->placa;}
Propietario* Vehiculo::getPropietario() const { return this->propietario;}

ostream& operator<<(ostream& os, const Vehiculo& v)
{
    os << v.getTipo() << " " << v.getPlaca() << " - " << v.getInfo();
    return os;
}








