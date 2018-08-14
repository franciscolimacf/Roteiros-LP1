#ifndef DESPESA_H
#define DESPESA_H
#include <string>

using namespace std;

class Despesa
{
    private:
        double valor;
        string tipoDeGasto;

    public:
        Despesa();

        void setValor(double value);
        void setTipoDeGasto(string type);

        double getValor();
        string getTipoDeGasto();

};

#endif // DESPESA_H
