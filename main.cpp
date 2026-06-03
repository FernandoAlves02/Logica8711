#include<iostream>
#include<windows.h>
#include<string>

struct Pessoa{
    std::string nome;
    int idade;
    float altura;
};


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Pessoa p1;

    p1.nome = "Fernando";
    p1.idade = 24;
    p1.altura = 1.83;

    std::cout<<"Nome: "<<p1.nome<<std::endl;
    std::cout<<"Idade: "<<p1.idade<<std::endl;
    std::cout<<"Altura: "<<p1.altura<<std::endl;

    return 0;
}