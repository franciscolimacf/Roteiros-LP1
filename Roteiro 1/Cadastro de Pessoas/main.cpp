#include <iostream>
#include "Pessoas.h"

using namespace std;

int main()
{
    Pessoas lucas = Pessoas("Lucas");

    cout << "Nome: " << lucas.getNome() << endl;
    cout << "Idade: " << lucas.getIdade() << endl;
    cout << "Telefone: " << lucas.getTelefone() << endl;

    cout << "------------------" << endl;

    lucas = Pessoas("Lucas", 19, 987526782);

    cout << "Nome: " << lucas.getNome() << endl;
    cout << "Idade: " << lucas.getIdade() << endl;
    cout << "Telefone: " << lucas.getTelefone() << endl;

    return 0;
}
