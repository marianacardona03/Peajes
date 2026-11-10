#pragma once
#include <string>
#include "Persona.h"
using namespace std;

class Operador : public Persona {
private:
    string codigo;
public:
    Operador();
    Operador(const string& id, const string& nombre, string codigo);
    void setCodigo(string codigo);
    string getCodigo();
    string describir() override;
};