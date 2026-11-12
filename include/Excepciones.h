#pragma once
#include <exception>
#include <string>
using namespace std;

class PlacaInvalida : public exception {
public:
    const char* what() const noexcept override;
};

class DatosInvalidos : public exception {
private:
    string mensaje; 

public:
    DatosInvalidos(string mensaje);
    const char* what() const noexcept override;
};
