#include<iostream>
#include<string>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nomeCompleto;

    std::cout<<"Digite o nome completo do aluno: "<<std::endl;
    std::getline(std::cin, nomeCompleto);

    std::cout<<nomeCompleto<<std::endl;


    return 0;
}