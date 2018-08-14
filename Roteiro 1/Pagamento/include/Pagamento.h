#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

using namespace std;

class Pagamento
{
    private:
        double valorPagamento;
        string nomeDoFuncionario;

    public:
        Pagamento();
        void setValorPagamento(double value);
        void setNomeDoFuncionario(string name);

        double getValorPagamento();
        string getNomeDoFuncionario();

};

#endif // PAGAMENTO_H
