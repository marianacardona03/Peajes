#include <iostream>
#include "Propietario.h"
#include "Operador.h"
#include "Auto.h"
#include "Moto.h"
#include "Bus.h"
#include "Camion.h"
#include "Caseta.h"
#include "Excepciones.h"
 
using namespace std;
 
int main() {
    // Propietarios
    Propietario noVecino("1234", "Maria Gomez", false);
    Propietario vecino("8910", "Juan Erazo", true);
 
 
    cout << "Caso 1 " << endl;
    Vehiculo* carro = new Auto("ABC123", &noVecino, 3);
    cout << *carro << endl;
    cout << "Paga: " << carro->calcularPrecio() << endl << endl;
    
    
    cout << "Caso 2" << endl;
    carro->setPropietario(&vecino);
    cout << *carro << endl;
    cout << "Paga: " << carro->calcularPrecio() << endl << endl;
    
    
    cout << "Caso 3" << endl;
    Vehiculo* moto1 = new Moto("XYZ45A", &vecino, 125);
    cout << *moto1 << endl;
    cout << "Paga: " << moto1->calcularPrecio() << endl << endl;
 
    return 0;
}