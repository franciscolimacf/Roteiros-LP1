#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

using namespace std;

class Empregado
{
private:
    string nome;
    string sobrenome;
    double salario;

public:
    Empregado(string nome, string sobrenome, double salario);

    void setNome(string name);
    void setSobrenome(string lastname);
    void setSalario(double salary);

    string getNome();
    string getSobrenome();
    double getSalario();

};

#endif // EMPREGADO_H
