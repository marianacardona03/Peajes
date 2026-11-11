#include <iostream>
#include <Bus.h>

Bus::Bus() : Vehiculo()
{
	this->puestos = 1;
}

Bus::~Bus()
{
    cout << "Destruyendo bus " << getPlaca() << endl;
}

Bus::Bus(string placa, Propietario* propietario, int puestos )
	: Vehiculo(placa,propietario)
{
	this->puestos = puestos;
}

void Bus::setPuestos (int puestos ) {
	this->puestos = puestos;
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
