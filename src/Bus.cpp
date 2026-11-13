#include <iostream>
#include <Bus.h>
#include "Excepciones.h"

Bus::~Bus()
{
    cout << "Destruyendo bus " << getPlaca() << endl;
}

Bus::Bus(string placa, Propietario* propietario, int puestos )
	: Vehiculo(placa,propietario)
{
    if (puestos < 1) {
        throw DatosInvalidos("Un bus debe tener al menos un puesto");
    }
	this->puestos = puestos;
}

void Bus::setPuestos (int puestos ) {
	this->puestos = puestos;
	if (puestos < 1) {
        throw DatosInvalidos("Un bus debe tener al menos un puesto");
    }
}
int Bus::getPuestos () {
	return this->puestos;
}

int Bus::calcularPrecio () const
{
    return 16700;       
}

string Bus::getTipo() const { return "Bus"; }

string Bus::getInfo() const
{
    return "Puestos: " + to_string(puestos);
}
