#include <iostream>
#include "ControleDeGastos.h"

using namespace std;

int main()
{
    ControleDeGastos desp;
    Despesa bola = Despesa();
    Despesa agua = Despesa();
    string type;


    bola.setValor(2.0);
    bola.setTipoDeGasto("esportes");

    agua.setValor(200.3);
    agua.setTipoDeGasto("domestico");

    desp.setDespesas(bola, 0);
    desp.setDespesas(agua, 1);



    cout << "Total das despesas: " << desp.calculaTotalDeDespesas() << endl;
    cout << "Existe despesa do tipo: ";
    cin >> type;
    cout << endl;

    if(desp.existeDespesaTipo(type))
        cout << "Sim !" << endl;
    else
        cout << "Nao !" << endl;

    return 0;
}
