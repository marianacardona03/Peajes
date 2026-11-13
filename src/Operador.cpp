#include <string>
#include "Operador.h"
using namespace std;


Operador::Operador(const string& id, const string& nombre, string codigo): Persona(id,nombre)
{
  this->codigo = codigo;
}
void Operador::setCodigo(string codigo) { this->codigo = codigo; }
string Operador::getCodigo() const { return this->codigo; }

string Operador::describir () const
{
    return "Operador: " + getNombre() + " ID: " + getId() +  "  Código:" + getCodigo();
}

