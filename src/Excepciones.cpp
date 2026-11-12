#include "Excepciones.h"

const char* PlacaInvalida::what() const noexcept {
    return "La placa no puede estar vacia";
}

DatosInvalidos::DatosInvalidos(string mensaje) {
    this->mensaje = mensaje;
}

const char* DatosInvalidos::what() const noexcept {
    return this->mensaje.c_str();
}