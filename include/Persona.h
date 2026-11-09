#pragma once
#include <string>
using namespace std;

class Persona {
private:
    string id;
    string nombre;
    
public:
Persona();
virtual ~Persona();
  Persona(string id, string nombre);
  void setId(string id);
  void setNombre(string nombre);
  string getId();
  string getNombre();
  virtual string describir() const = 0;
};