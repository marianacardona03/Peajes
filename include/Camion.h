#pragma once
#include <string>
#include "Vehiculo.h"
using namespace std;

class Camion : public Vehiculo {
private:
    int ejes;

public:
  ~Camion() override;
  Camion(string placa, Propietario* propietario, int ejes);
  void setEjes(int ejes);
  int getEjes();
  void agregarEje();
  int calcularPrecio() const override; 
  string getTipo() const override;
  virtual string getInfo() const override;
 };
