#pragma once
#include <string>
#include "Vehiculo.h"
using namespace std;

class Auto : public Vehiculo {
private:
    int pasajeros;

public:
  Auto();
  ~Auto() override;
  Auto(string placa, Propietario* propietario, int pasajeros);
  void setPasajeros(int pasajeros);
  int getPasajeros();
  int calcularPrecio() const override; 
  string getTipo() const override;
  string getInfo() const override;
 };
