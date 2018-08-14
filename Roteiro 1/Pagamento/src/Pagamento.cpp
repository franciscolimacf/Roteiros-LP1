#include "Pagamento.h"

Pagamento::Pagamento()
{
    valorPagamento = 0.0;
    nomeDoFuncionario = " ";
};

void Pagamento::setValorPagamento(double value){
    valorPagamento = value;
};

void Pagamento::setNomeDoFuncionario(string name){
    nomeDoFuncionario = name;
};

double Pagamento::getValorPagamento(){
    return valorPagamento;
};

string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
};

