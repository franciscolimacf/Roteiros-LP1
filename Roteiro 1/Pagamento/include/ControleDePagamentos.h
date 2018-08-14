#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"


class ControleDePagamentos
{
    private:
        Pagamento pagamentos[5];

    public:
        ControleDePagamentos();
        void setPagamentos(Pagamento p, int i);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string name);

};

#endif // CONTROLEDEPAGAMENTOS_H
