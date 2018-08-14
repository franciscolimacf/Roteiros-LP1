#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos(){

};

void ControleDeGastos::setDespesas(Despesa d, int i){
    despesas[i] = d;
};

double ControleDeGastos::calculaTotalDeDespesas(){
    double soma = 0.0;
    int q;

    for(q=0;q<5;q++){
        soma += despesas[q].getValor();
    }
    return soma;
};

bool ControleDeGastos::existeDespesaTipo(string typ){
    bool flag;
    int q;

    for(q=0;q<5;q++){
        if(typ == despesas[q].getTipoDeGasto()){
            flag = true;
            break;
        }
        else
            flag = false;
    }
    return flag;
}
