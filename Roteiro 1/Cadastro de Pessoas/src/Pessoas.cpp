#include "Pessoas.h"

using namespace std;

Pessoas::Pessoas(){

        nome= " ";
        idade = 0;
        telefone = 0;
};

Pessoas::Pessoas(string name){
    nome = name;
    idade = 0;
    telefone = 0;
};

Pessoas::Pessoas(string name, int age, int phone){
    nome = name;
    idade = age;
    telefone = phone;
};

void Pessoas::setIdade(int age){
    idade = age;
};

void Pessoas:: setNome(string name){
    nome = name;
};

void Pessoas::setTelefone(int phone){
    telefone = phone;
};

string Pessoas::getNome(){
    return nome;
};

int Pessoas::getIdade(){
    return idade;
};

int Pessoas::getTelefone(){
    return telefone;
};
