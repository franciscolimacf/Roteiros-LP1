#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice prod1(01, "Um produto bem legal ai", 3, 5.35);


    cout << "\nNumero do produto: " << prod1.getNumero()<< endl;
    cout << "Descricao do Produto: " << prod1.getDescricao()<< endl;
    cout << "Quantidade: " << prod1.getQuantidade()<<endl;
    cout << "Preco: R$" << prod1.getPreco() << endl;
    cout << "Fatura total: R$" << prod1.getInvoiceAmount() << endl;

    return 0;
}
