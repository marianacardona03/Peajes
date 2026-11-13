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
 
    // Caso 1
    cout << "Caso 1 " << endl;
    Vehiculo* carro = new Auto("ABC123", &noVecino, 3);
    cout << *carro << endl;
    cout << "Paga: " << carro->calcularPrecio() << endl << endl;
    
    
    // Caso 2
    cout << "Caso 2" << endl;
    carro->setPropietario(&vecino);
    cout << *carro << endl;
    cout << "Paga: " << carro->calcularPrecio() << endl << endl;
    
    
    // Caso 3
    cout << "Caso 3" << endl;
    Vehiculo* moto1 = new Moto("XYZ45A", &vecino, 125);
    cout << *moto1 << endl;
    cout << "Paga: " << moto1->calcularPrecio() << endl << endl;
    
    
    //Caso 4
    cout << "Caso 4" << endl;
    Moto* moto2 = new Moto("MOT650", nullptr, 650);
    cout << *moto2 << endl;
    cout << "Paga: " << moto2->calcularPrecio() << endl;
    cout << "¿Es de alto cilindraje? ";
    if (moto2->altoCilindraje() == true) {
        cout << "Si" << endl << endl;
    } else {
        cout << "No" << endl ;
    }
    
    
    // Caso 5
    cout << "Caso 5" << endl;
    Vehiculo* bus = new Bus("BUS777", &vecino, 38);
    cout << *bus << endl;
    cout << "Paga: " << bus->calcularPrecio() << endl << endl;
    
    
    // Caso 6
    cout << "Caso 6" << endl;
    Camion* camion = new Camion("CAM301", nullptr, 3);
    cout << *camion << endl;
    cout << "Paga: " << camion->calcularPrecio() << endl << endl;
 
 
    // Caso 7
    cout << "Caso 7" << endl;
    camion->agregarEje();
    cout << *camion << endl;
    cout << "Paga: " << camion->calcularPrecio() << endl << endl;
    
    
    // Caso 8
    cout << "Caso 8: ";
    try {
        Auto* autoInvalido = new Auto("", &noVecino, 2);
        delete autoInvalido;
    }
    catch (const PlacaInvalida& e) {
        cout << "Error, " << e.what() << endl;
    }
    
    
    // Caso 9
    cout << "Caso 9: "; 
    try {
        Camion* camionInvalido = new Camion("CAM001", nullptr, 1);
        delete camionInvalido;
    }
    catch (const DatosInvalidos& e) {
        cout << "Error, " << e.what() << endl<< endl;
    }
    
    
    // Caso 10
    cout << "Caso 10" << endl;
    Operador operador("4380", "Roberto Navia", "AC-456");
    cout << operador.describir() << endl;
 
    Caseta* caseta = new Caseta("Caseta Norte", &operador);
    caseta->registrarPaso(carro);   
    caseta->registrarPaso(moto1);  
    caseta->registrarPaso(bus);     
    caseta->registrarPaso(camion);  
 
    cout << "Caseta: " << caseta->getNombre() << endl;
    cout << "Total de pasos: " << caseta->getTotalPasos() << endl;
    cout << "Recaudo total: $" << caseta->getTotalRecaudado() << endl;
    cout << "Carros: " << caseta->getCantidadCarros() << endl;
    cout << "Motos: " << caseta->getCantidadMotos() << endl;
    cout << "Buses:  " << caseta->getCantidadBuses() << endl;
    cout << "Camiones: " << caseta->getCantidadCamiones() << endl;
    cout << endl;

    
    // Caso 13
    cout << "Caso 13" << endl;
    
    delete caseta;
 
    Vehiculo* vehiculos[4] = { carro, moto1, bus, camion };
    for (int i = 0; i < 4; i++) {
        delete vehiculos[i];   
    }
    
    return 0;
}

