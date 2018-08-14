#ifndef PESSOAS_H
#define PESSOAS_H
#include <string>

using namespace std;

class Pessoas
{
    private:
        string nome;
        int idade, telefone;

    public:

        Pessoas();
        Pessoas(string name);
        Pessoas(string name, int age, int phone);

        void setNome(string name);
        void setIdade(int age);
        void setTelefone(int phone);

        string getNome();
        int getIdade();
        int getTelefone();

};

#endif // PESSOAS_H
