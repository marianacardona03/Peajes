#pragma once
#include <string>
#include "Persona.h"
using namespace std;

class Operador : public Persona {
private:
    string codigo;
public:
    Operador(const string& id, const string& nombre, string codigo);
    void setCodigo(string codigo);
    string getCodigo () const;
    string describir() const override;
};