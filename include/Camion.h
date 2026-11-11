#pragma once
#include <string>
#include "Vehiculo.h"
using namespace std;

class Camion : public Vehiculo {
private:
    int ejes;

public:
  Camion();
  ~Camion() override;
  Camion(string placa, Propietario* propietario, int ejes);
  void setEjes(int ejes);
  int getEjes();
  int calcularPrecio() const override; 
  string getTipo() const override;
  virtual string getInfo() const override;
 };
