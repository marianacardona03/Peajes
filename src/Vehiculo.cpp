#include <iostream>
#include "Vehiculo.h"
using namespace std;

Vehiculo::~Vehiculo() = default;

Vehiculo::Vehiculo()
{
  this->placa = "";
  this->propietario = nullptr;
}

Vehiculo::Vehiculo(string placa, Propietario* propietario)
{
  this->placa = placa;
  this->propietario = propietario;
  
}

void Vehiculo::setPlaca(string placa) { this->placa = placa; }
void Vehiculo::setPropietario(Propietario* propietario) {this->propietario = propietario; }
string Vehiculo::getPlaca() const  { return this->placa; }
Propietario* Vehiculo::getPropietario() const { return this->propietario;}

ostream& operator<<(ostream& os, const Vehiculo& v)
{
    os << v.getTipo() << " " << v.getPlaca() << " - " << v.getInfo();
    return os;
}








