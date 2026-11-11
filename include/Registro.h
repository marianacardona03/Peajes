#include <string>
using namespace std;

class Registro{
private:
    string placa;
    string tipo;
    int valorCobrado;
 
public:
    Registro(const string& placa, const string& tipo, int valorCobrado);
    ~Registro();
    string getPlaca() const;
    string getTipo() const;
    int getValorCobrado() const;
};