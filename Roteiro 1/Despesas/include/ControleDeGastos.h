#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"


class ControleDeGastos
{
    private:
        Despesa despesas[5];

    public:
        ControleDeGastos();
        void setDespesas(Despesa d, int i);
        double calculaTotalDeDespesas();
        bool existeDespesaTipo(string typ);
};

#endif // CONTROLEDEGASTOS_H
