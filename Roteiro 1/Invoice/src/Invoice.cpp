#include "Invoice.h"
#include <string>

Invoice::Invoice(int num, string des, int q, double price){

    nmr = num;
    desc = des;
    quant = q;
    preco = price;
};

void Invoice::setNumero(int num){
    nmr = num;
};

void Invoice::setDescricao(string des){
    desc = des;
};

void Invoice::setQuantidade(int q){
    quant = q;
};

void Invoice::setPreco(double price){
    preco = price;
};

int Invoice::getNumero(){
    return nmr;
};

string Invoice::getDescricao(){
    return desc;
};

int Invoice::getQuantidade(){
    return quant;
};

double Invoice::getPreco(){
    return preco;
};

double Invoice::getInvoiceAmount(){
    return quant*preco;
};
