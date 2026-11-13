#pragma once
#include <string>
using namespace std;
#include "Vehiculo.h"

class Moto : public Vehiculo {
private:
   int cilindraje;

public:
  ~Moto() override;
  Moto(string placa, Propietario* propietario, int cilindraje);
  void setCilindraje(int cilindraje);
  int getCilindraje() const ;
  bool altoCilindraje() const;
  int calcularPrecio() const override;
  string getTipo() const override;
  virtual string getInfo() const override;
  
};
