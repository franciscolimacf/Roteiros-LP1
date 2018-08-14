#include "Despesa.h"


using namespace std;

Despesa::Despesa()
{
    valor = 0;
    tipoDeGasto = " ";

};

void Despesa::setValor(double value){
    valor = value;
};

void Despesa::setTipoDeGasto(string type){
    tipoDeGasto = type;
};

double Despesa::getValor(){
    return valor;
};

string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
};
