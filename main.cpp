#include<iostream>
#include<windows.h>
#include<format>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome = "Eduardo";

    std::string mensagem = std::format("Olá, {}! Você tem {} anos.\n", nome);
    std::cout<<mensagem;

    return 0;
}