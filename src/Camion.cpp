#include <iostream>
#include <Camion.h>
#include "Excepciones.h"

Camion::~Camion()
{
    cout << "Destruyendo camión " << getPlaca() << endl;
}

Camion::Camion(string placa, Propietario* propietario, int ejes)
    : Vehiculo(placa,propietario)
{
  this->ejes = ejes ;
  if (ejes < 2) {
        throw DatosInvalidos("Un camion debe tener al menos dos ejes");
    }
}

void Camion::setEjes (int ejes) { 
    if (ejes < 2) {
        throw DatosInvalidos("Un camion debe tener al menos dos ejes");
    }
    this->ejes = ejes; 
    
}

void Camion::agregarEje() {
    ejes++;
}

int Camion::getEjes () { return this->ejes ; }

int Camion::calcularPrecio () const{
        return 8900 * ejes;
}

string Camion::getTipo() const { return "Camión"; }

string Camion::getInfo() const
{
    return "Ejes: " + to_string(ejes);
}

