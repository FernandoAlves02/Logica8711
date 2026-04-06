#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;
    std::string sobrenome = " Alves";

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<nome.append(sobrenome);

    return 0;
}