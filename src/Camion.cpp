#include <iostream>
#include <Camion.h>

Camion::Camion() : Vehiculo()
{
  this->ejes = 2;
}

Camion::~Camion()
{
    cout << "Destruyendo camión " << getPlaca() << endl;
}

Camion::Camion(string placa, Propietario* propietario, int ejes)
    : Vehiculo(placa,propietario)
{
  this->ejes = ejes ;
}

void Camion::setEjes (int ejes) { this->ejes = ejes; }
int Camion::getEjes () { return this->ejes ; }

int Camion::calcularPrecio () const{
        return 8900 * ejes;
}

string Camion::getTipo() const { return "Camión"; }

string Camion::getInfo() const
{
    return "Ejes: " + to_string(ejes);
}