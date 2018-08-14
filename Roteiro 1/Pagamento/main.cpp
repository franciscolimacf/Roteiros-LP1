#include <iostream>
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    string name;
    ControleDePagamentos controle;
    Pagamento kejo = Pagamento();
    Pagamento hawk = Pagamento();

    kejo.setNomeDoFuncionario("Bruno Henrique");
    kejo.setValorPagamento(1200.5);

    hawk.setNomeDoFuncionario("Lucas Henrique");
    hawk.setValorPagamento(5000.75);

    controle.setPagamentos(kejo, 0);
    controle.setPagamentos(hawk, 1);

    cout << "Nome: " << kejo.getNomeDoFuncionario() << endl;
    cout << "Valor do pagamento: " << kejo.getValorPagamento() <<endl;

    cout << "--------------------------------------------------"<< endl;

    cout << "Nome: " << hawk.getNomeDoFuncionario() << endl;
    cout << "Valor do pagamento: " << hawk.getValorPagamento() <<endl;

    cout << "--------------------------------------------------"<< endl;

    cout << "Total a pagar: " << controle.calculaTotalDePagamentos() << endl;

    cout << "Existe pagamento para funcionario: ";
    getline(cin, name);
    cout << endl;

    if(controle.existePagamentoParaFuncionario(name))
        cout << "Sim !" << endl;
    else
        cout << "Nao !" << endl;

    return 0;
}
