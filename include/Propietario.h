#pragma once
#include <string>
#include "Persona.h"
using namespace std;

class Propietario : public Persona {
private:
    bool vecino;
public:
    Propietario();
    Propietario(const string& id, const string& nombre, bool vecino);
    void setVecino(bool vecino);
    bool getVecino () const;
    string describir() const override;
};