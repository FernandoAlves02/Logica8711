#include<iostream>
#include<string>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;
    int idade;
    int anoAtual = 2026;

    std::cout<<"Boa noite, qual o seu nome?"<<std::endl;
    std::cin>>nome;

    std::cout<<"E a sua idade?"<<std::endl;
    std::cin>>idade;
    int anoNascido = 2026 - idade;

    std::cout<<"Seja bem vindo "<<nome<<", você nasceu no ano de "<<anoNascido<<std::endl;

    return 0;
}