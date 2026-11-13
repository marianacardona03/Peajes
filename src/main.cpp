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
    
    
    cout << "Caso 4" << endl;
    Moto* moto2 = new Moto("MOT650", nullptr, 650);
    cout << *moto2 << endl;
    cout << "Paga: " << moto2->calcularPrecio() << endl;
    cout << "¿Es de alto cilindraje? ";
    if (moto2->altoCilindraje() == true) {
        cout << "Si" << endl;
    } else {
        cout << "No" << endl;
    }
    
        cout << "Caso 5" << endl;
    Vehiculo* bus = new Bus("BUS777", &vecino, 38);
    cout << *bus << endl;
    cout << "Paga: " << bus->calcularPrecio() << endl << endl;
    
    
    cout << "Caso 6" << endl;
    Camion* camion = new Camion("CAM301", nullptr, 3);
    cout << *camion << endl;
    cout << "Paga: " << camion->calcularPrecio() << endl << endl;
 
    
    cout << "Caso 7" << endl;
    camion->agregarEje();
    cout << *camion << endl;
    cout << "Paga: " << camion->calcularPrecio() << endl << endl;
    
    
    cout << "Caso 8: ";
    try {
        Auto* autoInvalido = new Auto("", &noVecino, 2);
        delete autoInvalido;
    }
    catch (const PlacaInvalida& e) {
        cout << "Error, " << e.what() << endl;
    }
    

    cout << "Caso 9: ";
    try {
        Camion* camionInvalido = new Camion("CAM001", nullptr, 1);
        delete camionInvalido;
    }
    catch (const DatosInvalidos& e) {
        cout << "Error, " << e.what() << endl;
    }
    
    
    
 
    
    
    
    
    
 
    return 0;
}