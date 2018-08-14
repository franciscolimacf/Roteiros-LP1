#include "Empregado.h"

Empregado::Empregado(string name, string lastname, double salary){
    nome = name;
    sobrenome = lastname;
    salario = salary;
};
void Empregado::setNome(string name){
    nome = name;
};
void Empregado::setSobrenome(string lastname){
    sobrenome = lastname;
};
void Empregado::setSalario(double salary){
    salario = salary;
};

string Empregado::getNome(){
    return nome;
};
string Empregado::getSobrenome(){
    return sobrenome;
};
double Empregado::getSalario(){
    return salario;
};
