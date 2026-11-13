#pragma once
#include <string>
#include "Vehiculo.h"
using namespace std;

class Bus : public Vehiculo {
private:
    int puestos;

public:
  ~Bus() override;
  Bus (string placa,Propietario* propietario, int puestos);
  void setPuestos(int puestos);
  int getPuestos();
  int calcularPrecio() const override; 
  string getTipo() const override;
  virtual string getInfo() const override;
 };
