#include <string>
#include "Propietario.h"
using namespace std;


Propietario::Propietario()
{
  this->vecino = false;
}

Propietario::Propietario(const string& id, const string& nombre, bool vecino): Persona(id,nombre)
{
  this->vecino = vecino;
}
void Propietario::setVecino(bool vecino) { this->vecino = vecino; }
bool Propietario::getVecino() const { return this->vecino; }

string Propietario::describir() const {
    string texto;

    if (vecino)
        texto = "Si";
    else
        texto = "No";

    return "Propietario: " + getNombre() + " (ID: " + getId() + ")"
           + "  Es un vecino: " + texto;
           
}

