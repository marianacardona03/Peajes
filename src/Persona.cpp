#include <iostream>
#include "Persona.h"

Persona::~Persona() = default;

Persona::Persona()
{
  this->id = "";
  this->nombre = "";
}

Persona::Persona(string id, string nombre)
{
  this->id = id;
  this->nombre = nombre;
}
void Persona::setId(string id) { this->id = id; }
void Persona::setNombre(string nombre) { this->nombre = nombre; }
string Persona::getId() const { return this->id; }
string Persona::getNombre() const { return this->nombre; }

