#include "Registro.h"
#include <iostream>
using namespace std;

Registro::Registro(const string& placa, const string& tipo, int valorCobrado)
{
	this->placa = placa;
	this->tipo = tipo;
	this->valorCobrado = valorCobrado;
}

Registro::~Registro() {
	cout << "Destruyendo Registro " << placa << endl;
}

string Registro::getPlaca() const
{
	return placa;
}

string Registro::getTipo() const
{
	return tipo;
}

int Registro::getValorCobrado() const
{
	return valorCobrado;
}
