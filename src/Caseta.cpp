#include "Caseta.h"
#include <iostream>
#include "Excepciones.h"
using namespace std;
 

Caseta::Caseta(string nombre, Operador* operador) {
    this->nombre = nombre;
    this->operador = operador;
    totalRecaudado = 0;
}

Caseta::~Caseta() {
    cout << "Destruyendo Caseta " << nombre << endl;
    for (int i = 0; i < pasos.size(); i++) {
        delete pasos[i];
    }
    pasos.clear();
}
 
string Caseta::getNombre() {return nombre;}
Operador* Caseta::getOperador() {return operador;}
int Caseta::getTotalPasos() {return pasos.size();}
int Caseta::getTotalRecaudado() { return totalRecaudado;}
 

int Caseta::getCantidadCarros() {
    int contador = 0;
    for (int i = 0; i < pasos.size(); i++) {
        if (pasos[i]->getTipo() == "Carro") {
            contador++;
        }
    }
    return contador;
}
 

int Caseta::getCantidadMotos() {
    int contador = 0;
    for (int i = 0; i < pasos.size(); i++) {
        if (pasos[i]->getTipo() == "Moto") {
            contador++;
        }
    }
    return contador;
}
 

int Caseta::getCantidadBuses() {
    int contador = 0;
    for (int i = 0; i < pasos.size(); i++) {
        if (pasos[i]->getTipo() == "Bus") {
            contador++;
        }
    }
    return contador;
}
 

int Caseta::getCantidadCamiones() {
    int contador = 0;
    for (int i = 0; i < pasos.size(); i++) {
        if (pasos[i]->getTipo() == "Camion") {
            contador++;
        }
    }
    return contador;
}

void Caseta::registrarPaso(Vehiculo* vehiculo) {
    if (vehiculo == nullptr) {
        throw DatosInvalidos("No se puede registrar un vehiculo nulo");
    }
    string placa = vehiculo->getPlaca();
    string categoria = vehiculo->getTipo();
    int valor = vehiculo->calcularPrecio();
 
    Registro* registro = new Registro(placa, categoria, valor);
    pasos.push_back(registro);
 
    totalRecaudado = totalRecaudado + valor;
}
 