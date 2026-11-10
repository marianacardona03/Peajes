#pragma once
#include <string>
#include "Vehiculo.h"
using namespace std;

class Auto : public Vehiculo {
private:
    int pasajeros;

public:
  Auto();
  Auto(string placa, Propietario* propietario, int pasajeros);
  void setPasajeros(int pasajeros);
  int getPasajeros();
  int calcularPrecio() override; 
 };
