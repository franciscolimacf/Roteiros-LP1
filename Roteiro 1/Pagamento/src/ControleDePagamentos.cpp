#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos()
{

};

void ControleDePagamentos::setPagamentos(Pagamento p, int i){
    pagamentos[i] = p;
};

double ControleDePagamentos::calculaTotalDePagamentos(){
    double soma = 0.0;
    int q;
    for(q=0;q<5;q++){
        soma+= pagamentos[q].getValorPagamento();
    }
    return soma;
};

bool ControleDePagamentos::existePagamentoParaFuncionario(string name){
    int q;
    bool flag;

    for(q=0;q<5;q++){

        if(name == pagamentos[q].getNomeDoFuncionario()){
            flag = true;
            break;
        }else
            flag = false;

    }
    return flag;
};
