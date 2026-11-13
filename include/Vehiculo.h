#pragma once
#include <string>
#include "Propietario.h"
using namespace std;
#include <iostream>


class Vehiculo
{
private:
	string placa;
	Propietario* propietario;

public:

	virtual ~Vehiculo();
	Vehiculo(string placa, Propietario* propietario);

	void setPlaca(string placa);
	void setPropietario(Propietario* propietario);

	string getPlaca() const;
	Propietario* getPropietario() const;
	virtual string getTipo() const = 0;
	virtual string getInfo() const = 0;
	virtual int calcularPrecio() const = 0;
};

ostream& operator<<(ostream& os, const Vehiculo& v);
