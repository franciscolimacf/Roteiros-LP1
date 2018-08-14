#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice{

    private:

        int nmr;
        string desc;
        int quant;
        double preco;

    public:

        Invoice(int num, string des, int q, double price);

        void setNumero(int num);
        void setDescricao(string des);
        void setQuantidade(int q);
        void setPreco(double price);

        int getNumero();
        string getDescricao();
        int getQuantidade();
        double getPreco();
        double getInvoiceAmount();


};

#endif
