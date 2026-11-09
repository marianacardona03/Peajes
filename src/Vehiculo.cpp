#include <iostream>
#include "Vehiculo.h"
using namespace std;

Vehiculo::~Vehiculo() = default;

Vehiculo::Vehiculo()
{
  this->placa = "";
  this->propietario = nullptr;
}

Vehiculo::Vehiculo(string placa, Persona* propietario)
{
  this->placa = placa;
  this->propietario = propietario;
  
}

void Vehiculo::setPlaca(string placa) { this->placa = placa; }
void Vehiculo::setPropietario(Persona* propietario) {this->propietario = propietario; }
string Vehiculo::getPlaca() { return this->placa; }
Persona* Vehiculo::getPropietario() { return this->propietario = propietario; }




