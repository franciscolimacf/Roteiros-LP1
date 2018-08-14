#include <iostream>
#include "Empregado.h"

using namespace std;

int main()
{
    Empregado hawk("Lucas Henrique", "Lopes", 60000.50);
    Empregado kejo("Bruno Henrique", "Araujo", 36000.18);



    cout << "Nome do Empregado: " << hawk.getNome() << endl;
    cout << "Sobrenome: " << hawk.getSobrenome() << endl;
    cout << "Salario anual: R$ " << hawk.getSalario() << endl;

    cout << "-------------------------------------------------" << endl;

    cout << "Nome do Empregado: " << kejo.getNome() << endl;
    cout << "Sobrenome: " << kejo.getSobrenome() << endl;
    cout << "Salario anual: R$ " << kejo.getSalario() << endl;

    cout << "-------------------------------------------------" << endl;

    cout << "Salario com aumento de 10% de " << hawk.getNome() << ": " << hawk.getSalario()*1.1 << endl;
    cout << "Salario com aumento de 10% de " << kejo.getNome() << ": " << kejo.getSalario()*1.1 << endl;



    return 0;
}
